#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_left_child = 0;
	int height_right_child = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_left_child = 1 + binary_tree_height(tree->left);
	if (tree->right)
		height_right_child = 1 + binary_tree_height(tree->right);

	if (height_left_child > height_right_child)
		return (height_left_child);
	else
		return (height_right_child);
}
