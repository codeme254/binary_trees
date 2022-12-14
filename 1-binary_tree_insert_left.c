#include "binary_trees.h"


/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: pointer to the node to insert the left-child
 * @value: the value to store in the new node
 * Return: pointer to the created node or null on failure or if parent is null
 * Description: replace the left child if it already exists as explaind below
 * If parent has already a left child, the new node must take its place
 * the old lef-child must then be set as the left-child of the new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *current_left;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	current_left = parent->left;

	if (current_left != NULL)
	{
		parent->left = new_node;
		current_left->parent = new_node;
		new_node->left = current_left;
	}
	else
	{
		parent->left = new_node;
	}

	return (new_node);
}

