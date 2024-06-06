#include "binary_trees.h"

/**
* binary_tree_is_root - Function to check if a node is root
*
* @node: Node to check
*
* Return: One (1) if a root Zero (0) otherwise
*/

int binary_tree_is_root(const binary_tree_t *node)
{
if (!node)
return (0);

else if (!node->parent)
return (1);

else
return (0);
}
