#include "binary_trees.h"

/**
 * binary_tree_height - finds height of tree
 * @tree: pointer to root node
 * Return: returns height of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if ((!(tree)) || ((!(tree->left)) && (!(tree->right))))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
