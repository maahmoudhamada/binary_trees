#include "binary_trees.h"

/**
* binary_tree_is_leaf - Function to check a node if it's a leaf
*
* @node: Node to check
*
* Return: One (1) if it's a leaf Zero (0) otherwise
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (!node)
return (0);

else if (!node->left && !node->right)
return (1);
else
return (0);
}
