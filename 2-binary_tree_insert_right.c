#include "binary_trees.h"

/**
 * binary_tree_insert_right - Entry point
 * @parent: A pointer.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or error occurs - NULL.
 *	Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a right-child,
 *	the new node takes its place
 *	and the old right-child is set as
 *	the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* validate parameters */
	if (parent == NULL)
	{
		return (NULL);
	} /* end if */

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	} /* End if */

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	} /* end if  */
	parent->right = new_node;

	return (new_node);
} /* end function */
