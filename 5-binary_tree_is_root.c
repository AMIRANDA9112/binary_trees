#include "binary_trees.h"
/**
 * binary_tree_is_leaf - verify if a node is a leaf of a tree
 * @node: node to analyze
 * Return: 1 if leaf & zero if not y can noy fajarding
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
    {
        return (0);
    }
    else if (node->left != NULL && node->right != NULL)
    {
        if (node->parent == NULL)
        {
            return (1);
        }
        else
        {
            return (0);
        }
    }
    else
    {
        return (0);
    }
}
