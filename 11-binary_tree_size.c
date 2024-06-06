#include "binary_trees.h"

/**
* binary_tree_size - Function to get the size of a tree
*
* @tree: root of tree
*
* Return: Size of tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
size_t count = 0;
if (tree == NULL)
return (0);

count += binary_tree_size(tree->left);
count += binary_tree_size(tree->right);
return (count + 1);
}
