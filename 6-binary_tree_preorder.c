#include "binary_trees.h"
/**
* binary_tree_preorder - Function to traverse tree using preorder method
*
* @tree: Root of the tree
* @func: Pointer to function takes integer as parameter
*
* Return: Void
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}

