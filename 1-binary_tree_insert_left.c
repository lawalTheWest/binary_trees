#include "binary_trees.h"

/**
 * binary_tree_insert_left - Entry point
 * Description: 'Inserts a node as a left-child of
 * another in a binary tree.'
 * @parent: A pointer to the node to the let child node to be inserted.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *	Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	} /* End if */

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	} /* End if */

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	} /* end if */
	parent->left = new_node;

	return (new_node);
} /* End function */
