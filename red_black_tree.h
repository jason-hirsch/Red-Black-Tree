#ifndef RED_BLACK_TREE_H
#define RED_BLACK_TREE_H

#include <cstddef>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <utility>

template <typename Comparable>
class RedBlackTree {
public:
    enum Color { RED, BLACK };
    struct Node {
        int color;
        Node* parent;
        Node* left;
        Node* right;
        Comparable value;
        Node(Comparable value) : color(RED), parent(nullptr), left(nullptr), right(nullptr), value(value) {}
        Node() : color(RED), parent(nullptr), left(nullptr), right(nullptr), value(0) {}
    };
    Node* root;


    RedBlackTree() : root(nullptr) {}

    Node* copyTree(const Node* from) {
        if (from == nullptr) return nullptr;

        Node* curr = new Node(from->value);
        curr->color = from->color;

        if (from->left != nullptr) {
            curr->left = copyTree(from->left);
            curr->left->parent = curr;
        }

        if (from->right != nullptr) {
            curr->right = copyTree(from->right);
            curr->right->parent = curr;
        }

        return curr;
    }

    RedBlackTree(const RedBlackTree& other) : RedBlackTree() {
        root = copyTree(other.get_root());
    }

    void clear(Node* curr) {
        if (curr == nullptr) return;
        clear(curr->left);
        clear(curr->right);
        delete curr;
    }

    ~RedBlackTree() {
        clear(root);
        root = nullptr;
    }

    RedBlackTree& operator=(const RedBlackTree& rhs) {
        if (root != rhs.get_root()) {
            clear(root);
            root = copyTree(rhs.get_root());
        }

        return *this;
    }

    Node* rotateRight(Node* curr) {
        Node* swapSide = curr->left->right;
        if (swapSide != nullptr) swapSide->parent = curr;

        curr->left->right = curr;
        curr->left->parent = curr->parent;

        curr->parent = curr->left;
        curr->left = swapSide;

        return curr->parent;
    }

    Node* rotateLeft(Node* curr) {
        Node* swapSide = curr->right->left;
        if (swapSide != nullptr) swapSide->parent = curr;

        curr->right->left = curr;
        curr->right->parent = curr->parent;

        curr->parent = curr->right;
        curr->right = swapSide;

        return curr->parent;
    }

    Node* rebalance(Node* grandparent, Node* parent, Node* uncle, Node* child) {
        if (parent->color == BLACK) {
            return grandparent;
        }

        if (parent->color == RED && child->color == RED) {
            if (uncle != nullptr && uncle->color == RED) {
                parent->color = BLACK;
                uncle->color = BLACK;
                grandparent->color = RED;
            }
            else {
                if (grandparent->left == parent && parent->left == child) {
                    grandparent = rotateRight(grandparent);
                }
                else if (grandparent->left == parent && parent->right == child) {
                    parent = rotateLeft(parent);
                    grandparent->left = parent;
                    grandparent = rotateRight(grandparent);
                }
                else if (grandparent->right == parent && parent->right == child) {
                    grandparent = rotateLeft(grandparent);
                }
                else if (grandparent->right == parent && parent->left == child) {
                    parent = rotateRight(parent);
                    grandparent->right = parent;
                    grandparent = rotateLeft(grandparent);
                }
                grandparent->color = BLACK;
                grandparent->left->color = RED;
                grandparent->right->color = RED;
            }
        }

        return grandparent;
    }

    Node* insert_helper(Node* curr, const Comparable& value) {
        if (curr == nullptr) {
            Node* newNode = new Node(value);
            return newNode;
        }

        if (value < curr->value) {
            curr->left = insert_helper(curr->left, value);
            curr->left->parent = curr;

            Node* grandparent = curr;
            Node* parent = curr->left;
            Node* uncle = curr->right;
            Node* child = nullptr;
            if (value < parent->value) child = parent->left;
            if (value > parent->value) child = parent->right;

            if (child != nullptr) curr = rebalance(grandparent, parent, uncle, child);

            return curr;
        }

        if (value > curr->value) {
            curr->right = insert_helper(curr->right, value);
            curr->right->parent = curr;

            Node* grandparent = curr;
            Node* parent = curr->right;
            Node* uncle = curr->left;
            Node* child = nullptr;
            if (value < parent->value) child = parent->left;
            if (value > parent->value) child = parent->right;

            if (child != nullptr) curr = rebalance(grandparent, parent, uncle, child);

            return curr;
        }

        return curr;
    }

    void insert(const Comparable& value) {
        root = insert_helper(root, value);
        root->color = BLACK;
    }

    void fix_double_black(Node* curr) {
        if (curr == root) {
            return;
        }

        Node* parent = curr->parent;
        Node* sibling = curr->parent->left;
        if (curr->parent->left == curr) {
            sibling = curr->parent->right;
        }

        if (sibling == nullptr) {
            fix_double_black(parent);
        }
        else if (sibling->color == BLACK && ((sibling->left != nullptr && sibling->left->color == RED) || (sibling->right != nullptr && sibling->right->color == RED))) {
            Node* grandparent = parent->parent;
            Node* newParent = nullptr;

            if (sibling == parent->left && (sibling->left != nullptr && sibling->left->color == RED)) {
                sibling->left->color = sibling->color;
                sibling->color = parent->color;
                newParent = rotateRight(parent);
            }
            else if (sibling == parent->left && (sibling->right != nullptr && sibling->right->color == RED)) {
                sibling->right->color = parent->color;
                sibling = rotateLeft(sibling);
                parent->left = sibling;
                newParent = rotateRight(parent);
            }
            else if (sibling == parent->right && (sibling->right != nullptr && sibling->right->color == RED)) {
                sibling->right->color = sibling->color;
                sibling->color = parent->color;
                newParent = rotateLeft(parent);
            }
            else if (sibling == parent->right && (sibling->left != nullptr && sibling->left->color == RED)) {
                sibling->left->color = parent->color;
                sibling = rotateRight(sibling);
                parent->right = sibling;
                newParent = rotateLeft(parent);
            }

            parent->color = BLACK;

            if (grandparent == nullptr) root = newParent;
            else if (grandparent->left == parent) grandparent->left = newParent;
            else if (grandparent->right == parent) grandparent->right = newParent;
        }
        else if (sibling->color == BLACK && (sibling->left == nullptr || sibling->left->color == BLACK) && (sibling->right == nullptr || sibling->right->color == BLACK)) {
            sibling->color = RED;
            if (parent->color == RED) {
                parent->color = BLACK;
            }
            else {
                fix_double_black(parent);
            }
        }
        else if (sibling->color == RED) {
            Node* grandparent = parent->parent;
            Node* newParent = nullptr;

            parent->color = RED;
            sibling->color = BLACK;

            if (parent->right == sibling) {
                newParent = rotateLeft(parent);
            }
            else {
                newParent = rotateRight(parent);
            }

            if (grandparent == nullptr) root = newParent;
            else if (grandparent->left == parent) grandparent->left = newParent;
            else if (grandparent->right == parent) grandparent->right = newParent;

            fix_double_black(curr);
        }
    }

    void rbt_delete(Node* curr) {
        Node* child = curr->left;
        if (curr->right != nullptr) child = curr->right;

        if (curr->color == RED || (child != nullptr && child->color == RED)) {
            Node* parent = curr->parent;
            if (parent->left == curr) {
                parent->left = child;
            }
            else {
                parent->right = child;
            }
            if (child != nullptr) {
                child->color = BLACK;
                child->parent = parent;
            }

            delete curr;
            return;
        }
        else {
            if (child != nullptr) {
                Node* parent = curr->parent;
                //Node* sibling = nullptr;
                if (parent->left == curr) {
                    parent->left = child;
                    //sibling = parent->right;
                }
                else {
                    parent->right = child;
                    //sibling = parent->left;
                }
                delete curr;
                curr = child;
                fix_double_black(curr);
            }
            else {
                fix_double_black(curr);
                Node* parent = curr->parent;
                //Node* sibling = nullptr;
                if (parent->left == curr) {
                    parent->left = child;
                    //sibling = parent->right;
                }
                else {
                    parent->right = child;
                    //sibling = parent->left;
                }
                delete curr;
            }
        }
    }

    void remove(const Comparable& value) {
        if (root == nullptr) {
            return;
        }

        if (value == root->value && root->left == nullptr && root->right == nullptr) {
            delete root;
            root = nullptr;
        }

        Node* curr = root;
        while (curr != nullptr && value != curr->value) {
            if (value < curr->value) curr = curr->left;
            else if (value > curr->value) curr = curr->right;
        }

        if (curr != nullptr && value == curr->value) {
            if (curr->left == nullptr && curr->right == nullptr) {
                rbt_delete(curr);
            }
            else {
                Node* replacement = nullptr;
                if (curr->right == nullptr) {
                    replacement = curr->left;
                    while (replacement->right != nullptr) replacement = replacement->right;
                }
                else {
                    replacement = curr->right;
                    while (replacement->left != nullptr) replacement = replacement->left;
                }
                Comparable temp = curr->value;
                curr->value = replacement->value;
                replacement->value = temp;
                rbt_delete(replacement);
            }
        }

        if (root != nullptr) {
            root->color = BLACK;
        }
    }

    bool contains_helper(Node* curr, const Comparable& value) const {
        if (curr == nullptr) return false;
        if (curr->value == value) return true;
        if (value < curr->value) return contains_helper(curr->left, value);
        if (value > curr->value) return contains_helper(curr->right, value);

        return false;
    }

    bool contains(const Comparable& value) const {
        return contains_helper(root, value);
    }

    const Comparable& find_min() const {
        if (root == nullptr) {
            throw std::invalid_argument("Tree must not be empty to call find_min()");
        }

        Node* curr = root;
        while (curr->left != nullptr) {
            curr = curr->left;
        }
        return curr->value;
    }

    const Comparable& find_max() const {
        if (root == nullptr) {
            throw std::invalid_argument("Tree must not be empty to call find_max()");
        }

        Node* curr = root;
        while (curr->right != nullptr) {
            curr = curr->right;
        }
        return curr->value;
    }

    int color(const Node* node) const {
        if (node != nullptr) {
            return node->color;
        }
        return BLACK;
    }

    const Node* get_root() const {
        return root;
    }

    void print_helper(std::ostream& stream, Node* curr, size_t whitespace) const {
        if (curr == nullptr) {
            return;
        }

        print_helper(stream, curr->right, whitespace + 2);

        std::string line(whitespace, ' ');
        std::stringstream ss;
        ss << line;
        if (curr->color == RED) ss << "R:";
        else ss << "B:";
        ss << curr->value << " P: ";
        if (curr->parent != nullptr) ss << curr->parent->value;
        stream << ss.str() << "\n";

        print_helper(stream, curr->left, whitespace + 2);
    }

    void print_tree(std::ostream& stream) const {
        if (root == nullptr) {
            stream << "<empty>\n";
        }
        else {
            print_helper(stream, root, 0);
        }
    }
};

#endif  // RED_BLACK_TREE_H