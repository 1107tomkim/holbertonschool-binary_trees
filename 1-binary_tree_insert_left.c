#include "binary_trees.h"

/**
 * binary_tree_insert_left - Add left node as child
 * @parent: pointer to parent node
 * @value: value stored in new left child node
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left)
	{
		new_node->n = parent->left->n;
		parent->left->n = value;
		parent->left->left = new_node;
		new_node->parent = parent->left;
	}
	else
	{
		parent->left = new_node;
		new_node->parent = parent;
		new_node->n = value;
	}

	return (new_node);
}
