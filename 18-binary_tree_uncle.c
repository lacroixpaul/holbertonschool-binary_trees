#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 * @node: a pointer to the node to find the uncle.
 *
 * Return: a pointer to the uncle node.
 * If node is NULL, return NULL.
 * If node has no uncle, return NULL.
 **/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *gd_parent;
	
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	gd_parent = node->parent->parent;

	if (gd_parent->left == node->parent)
		return (gd_parent->right);
	else
		return (gd_parent->left);
}
