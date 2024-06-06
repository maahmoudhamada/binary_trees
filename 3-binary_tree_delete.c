#include "binary_trees.h"

/**
 * postorder_traverse - Function to traverse tree using post-order method
 *
 * @root: Root of the tree
 *
 * Return: Void
 */

void postorder_traverse(binary_tree_t *root)
{
if (!root)
return;
postorder_traverse(root->left);
postorder_traverse(root->right);
free(root);
}

/**
* binary_tree_delete - Function to fully delete a binary tree
*
* @tree: Root of the tree
*
* Return: Void
*/

void binary_tree_delete(binary_tree_t *tree)
{
if (!tree)
return;
postorder_traverse(tree);
}
