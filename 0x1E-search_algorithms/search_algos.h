#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Task 0: Linear search */
int linear_search(int *array, size_t size, int value);

/* Task 1: Binary search */
int binary_search(int *array, size_t size, int value);

/* Task 2: Big-O notation */
/* No function prototypes needed in header */

/* Task 3: Jump search */
int jump_search(int *array, size_t size, int value);

/* Task 4: Interpolation search */
int interpolation_search(int *array, size_t size, int value);

/* Task 5: Exponential search */
int exponential_search(int *array, size_t size, int value);

/* Task 6: Sorting algorithms */
void bubble_sort(int *array, size_t size);
void insertion_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/* Task 7: Big-O notation */
/* No function prototypes needed in header */

/* Task 8: C Data Structure - Linked List */
struct Node {
    int data;
    struct Node *next;
};

struct Node *create_list(int *array, size_t size);
void print_list(struct Node *head);
void free_list(struct Node *head);

/* Task 9: Hash table */
/* Hash table function prototypes */

/* Task 10: Hash function */
unsigned int hash_djb2(const char *str);

/* Task 11: Binary tree */
struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode *create_tree_node(int data);
void free_binary_tree(struct TreeNode *root);

/* Task 12: Binary search tree */
struct TreeNode *bst_insert(struct TreeNode *root, int data);
struct TreeNode *bst_search(struct TreeNode *root, int key);
void bst_inorder_traversal(struct TreeNode *root);

/* Task 13: AVL tree */
struct AVLTreeNode {
    int data;
    int height;
    struct AVLTreeNode *left;
    struct AVLTreeNode *right;
};

struct AVLTreeNode *avl_insert(struct AVLTreeNode *root, int data);
struct AVLTreeNode *avl_delete(struct AVLTreeNode *root, int key);
void avl_inorder_traversal(struct AVLTreeNode *root);

/* Task 14: Red-Black tree */
enum Color {
    RED,
    BLACK
};

struct RBTreeNode {
    int data;
    enum Color color;
    struct RBTreeNode *left;
    struct RBTreeNode *right;
    struct RBTreeNode *parent;
};

struct RBTreeNode *rbt_insert(struct RBTreeNode *root, int data);
struct RBTreeNode *rbt_delete(struct RBTreeNode *root, int key);
void rbt_inorder_traversal(struct RBTreeNode *root);

#endif /* SEARCH_ALGOS_H */

