#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree : pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL or the height.
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = 1 + binary_tree_height(tree->left);
	else
		left_height = 0;
	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);
	else
		right_height = 0;

	if (right_height > left_height)
		return (right_height);
	else
		return (left_height);
}
