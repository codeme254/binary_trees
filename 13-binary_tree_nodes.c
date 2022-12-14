#include "binary_trees.h"

/**
 * binary_tree_nodes - count the number of nodes in a binary tree
 * @tree: pointer to the root node of the tree to count
 * Return: the number of nodes
 * if tree is null, return 0
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (0);

	return (1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
}

