#include "binary_trees.h"
/**
 * binary_tree_insert_right - creates a binary tree node in thee right branch
 * @parent: root tree
 * @value: id of node
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)

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
	p->left = NULL;

	if (parent->right != NULL)
	{
		parent->right->parent = p;
		p->right = parent->right;
		parent->right = p;
	}

	else
	{
		parent->right = p;
		p->right = NULL;
	}

	return (p);
}
