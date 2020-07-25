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
	if (tree == NULL)
	{
		return (0);
	}
	return (tree_height(tree->left) - tree_height(tree->right));
}
/**
 * binary_tree_size - search the size of a tree
 * @tree: tree to analysze
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + (binary_tree_size(tree->left) + (binary_tree_size(tree->right))));
}
/**
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: tree to analyze
 * Return: 0 if false and 1 if true
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
	return (0);


	if (binary_tree_balance(tree->left) == 0)
		if (binary_tree_balance(tree->right) == 0)
		{
			if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
				return (1);

		}
		return (0);
	return (0);
}
