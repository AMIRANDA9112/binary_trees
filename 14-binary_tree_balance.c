#include "binary_trees.h"

/**
 * tree_height - search the height of a tree
 * @tree: tree to analyze
 * Return: height
 */
int tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + (MAX(tree_height(tree->left), tree_height(tree->right))));
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

	if (tree->left != NULL)
		left = tree_height(tree->left) + 1;

	if (tree->right != NULL)
		right = tree_height(tree->right) + 1;

	return (left - right);
}
