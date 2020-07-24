#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: root tree
 * @value: id of node
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *p = NULL;

	p = malloc(sizeof(binary_tree_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->parent = parent;
	p->n = value;
	p->left = NULL;
	p->right = NULL;

	return (p);
}
