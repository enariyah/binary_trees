#include "binary_trees.h"

/**
 * binary_tree_insert_left - adds node on the left
 * @parent: pointer to parent
 * @value: value
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node;

if (parent == NULL)
return (NULL);

node = calloc(1, sizeof(binary_tree_t));
if (node == NULL)
return (NULL);
if (parent->left == NULL)
{
parent->left = node;
node->parent = parent;
node->n = value;
node->right = NULL;
node->left = NULL;
}
else
{
node->left = parent->left;
parent->left->parent = node;
parent->left = node;
node->n = value;
node->parent = parent;
node->right = NULL;
}
return (node);
}
