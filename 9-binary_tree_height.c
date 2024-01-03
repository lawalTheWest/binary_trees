#include "binary_trees.h"

/**
 * binary_tree_height - Entry point
 * Description: 'Measures the height of a binary tree.'
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0,
 *	else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lft = 0, rght = 0;

		/* Validate parameters */
		if (tree == NULL)
		{
			return (0);
		} /* end if */

		if (tree->left)
		{
			lft = 1 + binary_tree_height(tree->left);
		} /*  end if */

		if (tree->right)
		{
			rght = 1 + binary_tree_height(tree->right);
		} /* end if */

		/* return the greatre */
		if (lft > rght)
		{
			return (lft);
		} /* End if */
		else
		{
			return (rght);
		} /* end else */
	} /* End if */
	return (0);
} /* End function  */
