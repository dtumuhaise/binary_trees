#include "binary_trees.h"

/**
 * binary_tree_postorder - post order traversal
 * @tree: pointer to node of tree to traverse
 * @func: pointer to function call for each node
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func && tree)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
