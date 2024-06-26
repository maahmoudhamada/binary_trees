#include "binary_trees.h"

/**
* binary_tree_node - Function to create new node in binary tree
*
* @parent: Pointer point to parent of the child
* @value: Value of the new node
*
* Return: The newly created node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new;

new = malloc(sizeof(binary_tree_t));
if (new == NULL)
return (NULL);

new->parent = parent;
new->n = value;
new->left = NULL;
new->right = NULL;
return (new);
}

