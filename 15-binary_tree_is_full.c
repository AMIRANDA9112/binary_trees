#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a tree is full
 * @tree: Tree to analyze
 * Return: if true return 1 if false return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		return (binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right));
	}
	if (tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right));
	}
	else
	{
		return (1);
	}
}
