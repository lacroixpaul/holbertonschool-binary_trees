#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 * @tree: a pointer to the root node of the tree
 * to count the number of nodes.
 *
 * Return: The number of nodes.
 * If tree is NULL, the function must return 0.
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count; 

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		count = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
		return (1 + count);
	}

	count = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (count);
}
