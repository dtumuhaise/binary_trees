#include "binary_trees.h"


/**
 * height - function measures height of binary tree
 * @tree: pointer to root node of the tree to measure height
 * Return: size of tree or 0
*/
size_t height(const binary_tree_t *tree)
{
	size_t lDepth, rDepth;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		lDepth = height(tree->left);
		rDepth = height(tree->right);

		if (lDepth > rDepth)
		{
			return (lDepth + 1);
		}
		else
		{
			return (rDepth + 1);
		}
	}
}

/**
 * binary_tree_height - function measures height of binary tree
 * @tree: pointer to root node of the tree to measure height
 * Return: size of tree or 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return (height(tree) - 1);
	}
}
