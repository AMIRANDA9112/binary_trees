#include "binary_trees.h"

/**
 * tree_height - search the height of a tree
 * @tree: tree to analyze
 * Return: height
 */
int tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	if (left >= right)
		return (left + 1);
	else
		return (right + 1);
}

/**
 * binary_tree_balance - search the balance if a tree
 * @tree: tree to analyze
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		right = tree_height(tree->right) + 1;

	return (left - right);
}
