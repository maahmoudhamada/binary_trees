#include "binary_trees.h"

/**
* binary_tree_nodes - Function to get number nodes with at least one child
*
* @tree: Root of the tree
*
* Return: Number of nodes
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;
if (tree == NULL)
return (0);


count += binary_tree_nodes(tree->left);
count += binary_tree_nodes(tree->right);
if (tree->right || tree->left)
count++;
return (count);
}
