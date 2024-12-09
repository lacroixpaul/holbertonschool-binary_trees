#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree : pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL or the height.
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	right_height = (binary_tree_height(tree->right) + 1);
	left_height = (binary_tree_height(tree->left) + 1);
		if (right_height < left_height)
			return (left_height);
		else
			return (right_height);
}
