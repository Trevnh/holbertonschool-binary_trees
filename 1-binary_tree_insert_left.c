#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * if parent already has a left child, new node will take its place and old
 * left child will be new node's left child.
 * @parent: parent of the node to insert left child in
 * @value: value of the new node
 *
 * Return: Pointer to new node or NULL on failure or NULL parent.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = parent->left;
	parent->left = node;
	if (node->left != NULL)
		node->left->parent = node;
	return (node);
}
