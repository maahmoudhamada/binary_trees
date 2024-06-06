#include "binary_trees.h"

/**
* binary_tree_insert_right - Function to insert child to the right of tree
*
* @parent: Pointer point to parent node
* @value: Value of newly created node
*
* Return: Newly created node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new;

if (!parent)
return (NULL);

new = binary_tree_node(parent, value);
if (!new)
return (NULL);

if (parent->right)
{
parent->right->parent = new;
new->right = parent->right;
}
parent->right = new;
return (new);
}

