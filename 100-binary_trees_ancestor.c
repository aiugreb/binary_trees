#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);
{
	binary_tree_t *a, *b;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	a = first->parent, b = second->parent;
	if (first == b || !a || (!a->parent && b))
		return (binary_trees_ancestor(first, b));
	else if (a == second || !b || (!b->parent && a))
		return (binary_trees_ancestor(a, second));
	return (binary_trees_ancestor(a, b));
}
