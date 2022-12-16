#include "binary_trees.h"

/**
 * binary_tree_inorder - in-order traversal
 * @tree: pointer to root node of tree
 * @func: pointer to function call for each node
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func && tree)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
