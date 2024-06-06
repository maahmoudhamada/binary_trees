#include "binary_trees.h"

/**
* binary_tree_postorder - Function to traverse through tree using post method
* @tree: Root of the tree
* @func: Pointer to function
*
* Return: Void
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
