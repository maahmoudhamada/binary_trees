#include "binary_trees.h"

/**
* binary_tree_leaves - Function to get the number of leaves
*
* @tree: Root of a tree
*
* Return: Number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t count = 0;
if (tree == NULL)
return (0);

else if (!tree->right && !tree->left)
return (1);

count += binary_tree_leaves(tree->left);
count += binary_tree_leaves(tree->right);
return (count);
}
