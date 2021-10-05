#include "red_black_tree.h"

/*


int isValidTree_helper(RedBlackTree<int>& tree, const RedBlackTree<int>::Node* curr, std::unordered_set<int>& inTree) {
    if (curr == nullptr) return 0;

    if (inTree.count(curr->value) == 0) return -4;
    inTree.erase(curr->value);

    if (curr->left != nullptr && curr->left->parent != curr) return -3;
    if (curr->right != nullptr && curr->right->parent != curr) return -2;

    if (tree.color(curr) == RedBlackTree<int>::Color::RED && (tree.color(curr->left) == RedBlackTree<int>::Color::RED || tree.color(curr->right) == RedBlackTree<int>::Color::RED)) {
        return -1;
    }

    int leftBlacks = isValidTree_helper(tree, curr->left, inTree);
    if (leftBlacks < 0) return leftBlacks;

    int rightBlacks = isValidTree_helper(tree, curr->right, inTree);
    if (rightBlacks < 0) return rightBlacks;

    if (leftBlacks != rightBlacks) return -5;

    if (tree.color(curr) == RedBlackTree<int>::Color::BLACK) {
        return leftBlacks + 1;
    }

    return leftBlacks;
}

bool isValidTree(RedBlackTree<int> tree, std::unordered_set<int> inTree) {
    if (tree.get_root() == nullptr) return true;
    if (tree.get_root()->color != RedBlackTree<int>::Color::BLACK) {
        std::cout << -6 << std::endl;
        return false;
    }
    int ret = isValidTree_helper(tree, tree.get_root(), inTree);
    if (ret < 0) {
        std::cout << ret << std::endl;
        return false;
    }
    if (!inTree.empty()) {
        std::cout << -7 << std::endl;
        return false;
    }
    return true;
}
*/

int main() {
    // TODO(student): write at least 1000 lines of test

    // make an empty tree
    RedBlackTree<int> tree;

    std::cout << "insert 6" << std::endl;
    tree.insert(6);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 4" << std::endl;
    tree.insert(4);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 2" << std::endl;
    tree.insert(2);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 8" << std::endl;
    tree.insert(8);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 10" << std::endl;
    tree.insert(10);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 42" << std::endl;
    tree.insert(42);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 17" << std::endl;
    tree.insert(17);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 11" << std::endl;
    tree.insert(11);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 45" << std::endl;
    tree.insert(45);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 3" << std::endl;
    tree.insert(3);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 9" << std::endl;
    tree.insert(9);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 12" << std::endl;
    tree.insert(12);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 21" << std::endl;
    tree.insert(21);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 1" << std::endl;
    tree.insert(1);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 5" << std::endl;
    tree.insert(5);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 7" << std::endl;
    tree.insert(7);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 13" << std::endl;
    tree.insert(13);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 14" << std::endl;
    tree.insert(14);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 15" << std::endl;
    tree.insert(15);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 16" << std::endl;
    tree.insert(16);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 46" << std::endl;
    tree.insert(46);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 47" << std::endl;
    tree.insert(47);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 48" << std::endl;
    tree.insert(48);

    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }


    std::cout << "contains 4? " << std::boolalpha << tree.contains(4) << std::endl;
    std::cout << "contains 7? " << std::boolalpha << tree.contains(7) << std::endl;


    std::cout << "remove 4" << std::endl;
    tree.remove(4);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 12" << std::endl;
    tree.remove(12);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 1" << std::endl;
    tree.remove(1);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 42" << std::endl;
    tree.remove(42);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 2" << std::endl;
    tree.remove(2);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 17" << std::endl;
    tree.remove(17);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 11" << std::endl;
    tree.remove(11);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 45" << std::endl;
    tree.remove(45);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 21" << std::endl;
    tree.remove(21);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 15" << std::endl;
    tree.remove(15);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 46" << std::endl;
    tree.remove(46);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 16" << std::endl;
    tree.remove(16);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }


    // find the minimum element
    std::cout << "min: " << tree.find_min() << std::endl;

    // find the maximum element
    std::cout << "max: " << tree.find_max() << std::endl;


    std::cout << "remove 47" << std::endl;
    tree.remove(47);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 48" << std::endl;
    tree.remove(48);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 8" << std::endl;
    tree.remove(8);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 3" << std::endl;
    tree.remove(3);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 5" << std::endl;
    tree.remove(5);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 14" << std::endl;
    tree.remove(14);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 6" << std::endl;
    tree.remove(6);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 13" << std::endl;
    tree.remove(13);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 7" << std::endl;
    tree.remove(7);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 9" << std::endl;
    tree.remove(9);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 10" << std::endl;
    tree.remove(10);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }


    std::cout << "insert 213" << std::endl;
    tree.insert(213);

    std::cout << "insert 42" << std::endl;
    tree.insert(42);

    std::cout << "insert 95" << std::endl;
    tree.insert(95);

    std::cout << "insert 14" << std::endl;
    tree.insert(14);


    {
        std::cout << "Testing copy constructor" << std::endl;
    }
    RedBlackTree<int> copyConstructor(tree);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "copy constructed tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }


    RedBlackTree<int> copyAssignment;
    copyAssignment.insert(420);
    copyAssignment.insert(123);

    {
        std::cout << "Testing copy assignment" << std::endl;
    }
    copyAssignment = tree;
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "copy assignment tree: " << std::endl;
        std::ostringstream ss;
        tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }


    // make an empty tree
    RedBlackTree<double> double_tree;

    std::cout << "insert 4.2" << std::endl;
    double_tree.insert(4.2);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 7.4" << std::endl;
    double_tree.insert(7.4);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 69.42" << std::endl;
    double_tree.insert(69.42);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 8" << std::endl;
    double_tree.insert(8);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 10" << std::endl;
    double_tree.insert(10);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 3.14" << std::endl;
    double_tree.insert(3.14);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 1.7" << std::endl;
    double_tree.insert(1.7);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 1.1" << std::endl;
    double_tree.insert(1.1);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 24.4" << std::endl;
    double_tree.insert(24.4);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 3" << std::endl;
    double_tree.insert(3);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 9" << std::endl;
    double_tree.insert(9);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 36.6" << std::endl;
    double_tree.insert(36.6);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 100" << std::endl;
    double_tree.insert(100);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 0.1" << std::endl;
    double_tree.insert(0.1);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 5" << std::endl;
    double_tree.insert(5);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 7" << std::endl;
    double_tree.insert(7);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 1.3" << std::endl;
    double_tree.insert(1.3);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 41" << std::endl;
    double_tree.insert(41);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 1.5" << std::endl;
    double_tree.insert(1.5);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 61" << std::endl;
    double_tree.insert(61);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 4.6" << std::endl;
    double_tree.insert(4.6);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "insert 14.4" << std::endl;
    double_tree.insert(14.4);

    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }


    std::cout << "contains 4.1? " << std::boolalpha << double_tree.contains(4.1) << std::endl;
    std::cout << "contains 3.14? " << std::boolalpha << double_tree.contains(3.14) << std::endl;


    std::cout << "remove 5" << std::endl;
    double_tree.remove(5);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 0.1" << std::endl;
    double_tree.remove(0.1);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 1.5" << std::endl;
    double_tree.remove(1.5);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 24.4" << std::endl;
    double_tree.remove(24.4);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 7" << std::endl;
    double_tree.remove(7);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 41" << std::endl;
    double_tree.remove(41);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 36.6" << std::endl;
    double_tree.remove(36.6);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 10" << std::endl;
    double_tree.remove(10);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 3" << std::endl;
    double_tree.remove(3);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 1.1" << std::endl;
    double_tree.remove(1.1);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 69.42" << std::endl;
    double_tree.remove(69.42);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 61" << std::endl;
    double_tree.remove(61);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }


    // find the minimum element
    std::cout << "min: " << double_tree.find_min() << std::endl;

    // find the maximum element
    std::cout << "max: " << double_tree.find_max() << std::endl;


    std::cout << "remove 4.6" << std::endl;
    double_tree.remove(4.6);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 100" << std::endl;
    double_tree.remove(100);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 9" << std::endl;
    double_tree.remove(9);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 1.7" << std::endl;
    double_tree.remove(1.7);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 1.3" << std::endl;
    double_tree.remove(1.3);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 14.4" << std::endl;
    double_tree.remove(14.4);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 7.4" << std::endl;
    double_tree.remove(7.4);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 3.14" << std::endl;
    double_tree.remove(3.14);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 8" << std::endl;
    double_tree.remove(8);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }

    std::cout << "remove 4.2" << std::endl;
    double_tree.remove(4.2);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "tree: " << std::endl;
        std::ostringstream ss;
        double_tree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }


    std::cout << "insert 213" << std::endl;
    double_tree.insert(213);

    std::cout << "insert 42" << std::endl;
    double_tree.insert(42);

    std::cout << "insert 95" << std::endl;
    double_tree.insert(95);

    std::cout << "insert 14" << std::endl;
    double_tree.insert(14);


    {
        std::cout << "Testing copy constructor" << std::endl;
    }
    RedBlackTree<double> doubleCopyConstructor(double_tree);
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "copy constructed tree: " << std::endl;
        std::ostringstream ss;
        doubleCopyConstructor.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }


    RedBlackTree<double> doubleCopyAssignment;
    doubleCopyAssignment.insert(420);
    doubleCopyAssignment.insert(123);

    {
        std::cout << "Testing copy assignment" << std::endl;
    }
    doubleCopyAssignment = double_tree;
    // print the tree (this is not executed on Mimir)
    {
        std::cout << "copy assignment tree: " << std::endl;
        std::ostringstream ss;
        doubleCopyAssignment.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }


    RedBlackTree<int> debugging;

    std::cout << "insert 6" << std::endl;
    debugging.insert(6);

    std::cout << "insert 4" << std::endl;
    debugging.insert(4);

    std::cout << "insert 2" << std::endl;
    debugging.insert(2);

    std::cout << "insert 8" << std::endl;
    debugging.insert(8);

    std::cout << "insert 10" << std::endl;
    debugging.insert(10);

    std::cout << "contains 4? " << std::boolalpha << debugging.contains(4) << std::endl;
    std::cout << "contains 7? " << std::boolalpha << debugging.contains(7) << std::endl;

    std::cout << "remove 4" << std::endl;
    debugging.remove(4);

    // find the minimum element
    std::cout << "min: " << debugging.find_min() << std::endl;

    // find the maximum element
    std::cout << "max: " << debugging.find_max() << std::endl;

    std::cout << "get_root value: " << debugging.get_root()->value << std::endl;

    std::cout << "remove 6" << std::endl;
    debugging.remove(6);

    std::cout << "remove 2" << std::endl;
    debugging.remove(2);

    std::cout << "remove 8" << std::endl;
    debugging.remove(8);

    std::cout << "remove 10" << std::endl;
    debugging.remove(10);

    if (debugging.get_root() == nullptr) {
        std::cout << "Debugging is empty" << std::endl;
    }
    else {
        std::cout << "Debugging is not empty" << std::endl;
    }

    std::cout << "remove 420" << std::endl;
    debugging.remove(420);


    RedBlackTree<int> tryRemovingFromEmpty;

    std::cout << "remove 222" << std::endl;
    tryRemovingFromEmpty.remove(222);

    RedBlackTree<int> tryRemovingSomethingThatIsntThere;

    std::cout << "insert 6" << std::endl;
    tryRemovingSomethingThatIsntThere.insert(6);

    std::cout << "remove 5" << std::endl;
    tryRemovingSomethingThatIsntThere.remove(5);

    std::cout << "remove 7" << std::endl;
    tryRemovingSomethingThatIsntThere.remove(7);

    /*
    std::cout << std::endl;
    std::unordered_set<int> inTree;
    RedBlackTree<int> autoTree;
    srand(time(NULL));
    for (int i = 0; i < 1000; i++) {
        int curr = rand() % 1000000;
        if (inTree.count(curr) == 0) {
            std::cout << "insert " << curr << std::endl;
            autoTree.insert(curr);
            inTree.insert(curr);
            if (!isValidTree(autoTree, inTree)) {
                // print the tree (this is not executed on Mimir)
                {
                    std::ostringstream ss;
                    autoTree.print_tree(ss);
                    std::cout << ss.str() << std::endl;
                }
                std::cout << "TREE IS NOT VALID" << std::endl;
                return 0;
            }
        }
    }

    for (const int& val : std::unordered_set<int>(inTree)) {
        std::cout << "remove " << val << std::endl;
        autoTree.remove(val);
        inTree.erase(val);
        if (!isValidTree(autoTree, inTree)) {
            // print the tree (this is not executed on Mimir)
            {
                std::ostringstream ss;
                autoTree.print_tree(ss);
                std::cout << ss.str() << std::endl;
            }
            std::cout << "TREE IS NOT VALID" << std::endl;
            return 0;
        }
    }

    // print the tree (this is not executed on Mimir)
    {
        std::ostringstream ss;
        autoTree.print_tree(ss);
        std::cout << ss.str() << std::endl;
    }
    */


    return 0;
}