#include "binary_trees.h"
/**
 * binary_tree_height - search the height of a binary tree
 * @tree: tree to analyze.
 * Return: void
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		if (tree->right == NULL)
			return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left >= right)
		return (left + 1);
	return (right + 1);
}
