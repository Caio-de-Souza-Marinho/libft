#include "minunit.h"
#include "../src/ft_lstadd_back.c"

MU_TEST(tests_lstadd_back_add_list)
{
	// ARRANGE
	t_list	*node = (t_list *)malloc(sizeof(t_list));
	char	*content = "Hello, World!";
	node->content = content;
	node->next = NULL;

	t_list	*new_node = (t_list *)malloc(sizeof(t_list));
	char	*new_content = "New Node!";
	new_node->content = new_content;
	new_node->next = NULL;

	// ACT
	ft_lstadd_back(&node, new_node);

	// ASSERT 
	mu_assert(node->next == new_node, "New node should be at the back of the list");    
	mu_assert_string_eq("Hello, World!", (char *)node->content);
	mu_assert_string_eq("New Node!", (char *)node->next->content);

	// FREE MEMORY
	t_list *temp = node->next;
	free(temp);
	free(node);
}

MU_TEST_SUITE(ft_lstadd_back_test_suite)
{
    MU_RUN_TEST(tests_lstadd_back_add_list);
}
