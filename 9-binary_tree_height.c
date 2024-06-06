#include "binary_trees.h"

/**
 * binary_height_helper - Helper function to get height of binary tree
 *
 * @tree: Root of binary tree
 *
 * Return: Height of binary tree
 */

size_t binary_height_helper(const binary_tree_t *tree)
{
size_t lft, rght;

if (tree == NULL)
return (0);

lft = binary_height_helper(tree->left);
rght = binary_height_helper(tree->right);
return (MAX(lft, rght) + 1);

}

/**
* binary_tree_height - Function to get the height of binary tree
*
* @tree: Root of binary tree
*
* Return: Height of binary tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t h = 0;
if (tree == NULL)
return (0);
h = binary_height_helper(tree);
return (h - 1);
}
