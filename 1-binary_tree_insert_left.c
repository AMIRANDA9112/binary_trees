#include "binary_trees.h"
/**
 * binary_tree_insert_left - creates a binary tree node in thee left branch
 * @parent: root tree
 * @value: id of node
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)

{
	binary_tree_t *p = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	p = malloc(sizeof(binary_tree_t));

	if (p == NULL)
	{
		return (NULL);
	}

	p->parent = parent;
	p->n = value;
	p->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = p;
		p->left = parent->left;
	}

	else
	{
		parent->left = p;
		p->n = value;
		p->left = NULL;

	}

	return (p);
}
