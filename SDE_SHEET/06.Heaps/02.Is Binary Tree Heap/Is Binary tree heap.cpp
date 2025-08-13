class Solution {
public:

    // Count total nodes
    int countTotal(Node* root) {
        if (!root) return 0;
        return 1 + countTotal(root->left) + countTotal(root->right);
    }

    // Check completeness using index method
    bool is_CBT(Node* root, int index, int totalNodes) {
        if (!root) return true;
        if (index >= totalNodes) return false;
        return is_CBT(root->left, 2*index + 1, totalNodes) &&
               is_CBT(root->right, 2*index + 2, totalNodes);
    }

    // Check max-heap property
    bool is_maxheap(Node* root) {
        // Leaf node
        if (!root->left && !root->right) 
            return true;

        // Only left child exists
        if (!root->right) {
            return (root->data >= root->left->data) &&
                   is_maxheap(root->left);
        }

        // Both children exist
        return (root->data >= root->left->data &&
                root->data >= root->right->data &&
                is_maxheap(root->left) &&
                is_maxheap(root->right));
    }

    // Main function
    bool isHeap(Node* tree) {
        int totalNodes = countTotal(tree);
        return is_CBT(tree, 0, totalNodes) && is_maxheap(tree);
    }
};
