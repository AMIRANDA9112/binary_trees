#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves of a tree
 * @tree: Tree to analyze
 * Return: Count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL)
	{
		if (tree->right == NULL)
		{
			return (1);
		}
		else
		{
			return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
		}
	}
	else
	{
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
}
