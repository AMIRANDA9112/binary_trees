#include "binary_trees.h"

/**
 * binary_tree_sibling - checks if a node's sibling
 * @node: node to analyze
 * Return: node sibling or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL)
        return (NULL);

    if (node->parent == NULL)
        return (NULL);

    if (node->parent->left == node)
        return (node->parent->right);

    else
        return (node->parent->left);
}
