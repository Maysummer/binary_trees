#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with least 1 child
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of leaf nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int nodes = 0;

	if (!tree)
		return (0);
	if ((tree->left) || (tree->right))
		nodes = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (nodes);
}
