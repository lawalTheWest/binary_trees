#include "binary_trees.h"

/**
 * binary_trees_ancestor - Entry point
 * Description: 'Finds the lowest common ancestor of two nodes.'
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *ancestor, *pop;

	/* Validate parameters */
	if (first == NULL || second == NULL)
	{
		return (NULL);
	} /* End if */
	if (first == second)
	{
		return ((binary_tree_t *)first);
	} /* End if */

	ancestor = first->parent, pop = second->parent;
	if (first == pop || !ancestor || (!ancestor->parent && pop))
	{
		return (binary_trees_ancestor(first, pop));
	} /* end if */
	else if (ancestor == second || !pop || (!pop->parent && ancestor))
	{
		return (binary_trees_ancestor(ancestor, second));
	} /* end else if */
	return (binary_trees_ancestor(ancestor, pop));
} /* end function */
