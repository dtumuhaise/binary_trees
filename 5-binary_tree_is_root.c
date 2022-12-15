#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is a root
 * @node: pointer to node to check
 * Return: 1 or 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent != NULL)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
