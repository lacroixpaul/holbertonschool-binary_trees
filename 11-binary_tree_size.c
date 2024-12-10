#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree : pointer to the node to measure the size.
 * Return: 0 if tree is NULL or the size.
 **/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_right = 0, size_left = 0;
	const binary_tree_t *ptr_temp;

	ptr_temp = tree;

	if (tree == NULL)
		return (0);

	if (ptr_temp->left != NULL)
	{
		size_right = binary_tree_size(ptr_temp->left);
	}
	else
		size_right = 0;

	ptr_temp = tree;

	if (ptr_temp->right != NULL)
		size_left = binary_tree_size(ptr_temp->right);
	else
		size_left = 0;
	return (size_left + size_right + 1);
}
