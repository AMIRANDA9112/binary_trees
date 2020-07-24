#include "binary_trees.h"
/**
 * binary_tree_is_root - verify if a node is a root of a tree
 * @node: node to analyze
 * Return: 1 if leaf & zero if not y can not fajarding
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
