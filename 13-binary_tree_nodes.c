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
