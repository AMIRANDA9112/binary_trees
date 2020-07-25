#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: Tree analyze
 * Return: count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		if (tree->right == NULL)
			return (0);

		return (1 + (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right)));

	return (1 + (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right)));
}
