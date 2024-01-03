#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary node
 * @parent: node parent
 * @value: Value of the node
 * Return: the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* define new_node of type binary_tree_t */
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	/* validate if node is created */
	if (new_node == NULL)
	{
		/* null returned */
		return (NULL);
	} /* End if */
	new_node->n = value; /* value (int) stored in node */
	new_node->parent = parent; /* parent node */
	new_node->left = NULL; /* left child node */
	new_node->right = NULL; /* right child node */

	return (new_node); /* return new node */
} /* End function */
