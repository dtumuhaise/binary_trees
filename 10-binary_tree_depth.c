#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of a node
 * @tree: pointer to the node to measure the depth
 * Return: depth or 0
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	else
	{
		return (0);
	}
}
