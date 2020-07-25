#include "binary_trees.h"

/**
 * binary_tree_depth - search the depth of a node
 * @tree: node to analyze
 * Return: Tree depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
