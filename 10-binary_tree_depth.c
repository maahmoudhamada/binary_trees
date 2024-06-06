#include "binary_trees.h"

/**
* binary_tree_depth - Function to get depth of a node in a tree
*
* @tree: Root of the tree
*
* Return: Depth of a node
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t d = 0;

if (tree == NULL)
return (0);

while (tree->parent != NULL)
{
d++;
tree = tree->parent;
}
return (d);
}

