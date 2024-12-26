#include "minunit.h"
#include "../include/libft.h"

MU_TEST(test_lstnew_add_new_node_with_content_string)
{
	// ARRANGE
	char	*content = "Hello, World!";
	t_list	*node;

	// ACT
	node = ft_lstnew(content);

	// ASSERT
	mu_assert(node != NULL, "Node should not be NULL");
	mu_assert(node->content == content, "Node content should match the input content");
	mu_assert(node->next == NULL, "Node's next pointer should be NULL");

	// FREE MEMORY
	free(node);
}

MU_TEST(test_lstnew_add_new_node_with_content_int)
{
	// ARRANGE
	int	*content = (int *)malloc(sizeof(int));
	*content = 42;
	t_list	*node;

	// ACT
	node = ft_lstnew(content);

	// ASSERT
	mu_assert(node != NULL, "Node should not be NULL");
	mu_assert(node->content == content, "Node content should match the input content");
	mu_assert(node->next == NULL, "Node's next pointer should be NULL");

	// FREE MEMORY
	free(node);
	free(content);
}

MU_TEST_SUITE(ft_lstnew_test_suite)
{
	MU_RUN_TEST(test_lstnew_add_new_node_with_content_string);
	MU_RUN_TEST(test_lstnew_add_new_node_with_content_int);
}
