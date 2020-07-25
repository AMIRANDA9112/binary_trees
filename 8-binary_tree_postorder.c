#include "binary_trees.h"
/**
 * binary_tree_postorder - funtion that through a binary tree in postorderr
 * @tree: Tree in analyze
 * @func: printer function
 * Return: void function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	func(tree->n);
	binary_tree_postorder(tree->right, func);
}