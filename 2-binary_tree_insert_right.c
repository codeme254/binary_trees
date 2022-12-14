#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as right child of another node
 * @parent: pointer to the parent node to insert the right child in
 * @value: the value to store in the new node
 * Return: pointer to the created node or null on failure/ if parent is null
 * Description: replace the right child if it already exists
 * if parent has a a right child, the new node must take its place
 * the old right-child must be set as the right child of the new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *current_right;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	current_right = parent->right;

	if (current_right != NULL)
	{
		parent->right = new_node;
		current_right->parent = new_node;
		new_node->right = current_right;
	}
	else
	{
		parent->right = new_node;
	}

	return (new_node);
}

