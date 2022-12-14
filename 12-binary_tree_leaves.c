#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaves on a binary tree
 * @tree: pointer to the root of the binary tree
 * Return: the number of leaves on the binary tree
 * if tree is NULL, return 0
 * a leaf is a node with no children completely
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

