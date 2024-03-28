#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf in a binary tree.
 * @node: A pointer to the node to check.
 * Return: if the node is a leaf 1
 * 		otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (!node)
	{
		return (0);
	}

	if (!node->left && !node->right)
	{
		return (1);
	}

	return (0);
}
