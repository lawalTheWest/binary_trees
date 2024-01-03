#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Entry point
 * Description: 'Checks if a node is a leaf of a binary tree.'
 * @node: A pointer to the node to check.
 * Return: If the node is a leaf - 1.
 *	Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* validate parameters */
	if (node == NULL || node->left != NULL || node->right != NULL)
	{
		return (0);
	} /* end if */
	else
	{
		return (1);
	} /* end else */
}