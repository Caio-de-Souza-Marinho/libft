#include "minunit.h"
#include "../src/ft_lstadd_front.c"

MU_TEST(tests_lstadd_front_add_list)
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
	ft_lstadd_front(&node, new_node);

	// ASSERT 
	mu_assert(new_node == node, "New node should be at the front of the list");    
	mu_assert_string_eq("New Node!", (char *)node->content);
	mu_assert_string_eq("Hello, World!", (char *)node->next->content);

	// FREE MEMORY
	t_list *temp = new_node->next;
	free(temp);
	free(new_node);
}

MU_TEST_SUITE(ft_lstadd_front_test_suite)
{
    MU_RUN_TEST(tests_lstadd_front_add_list);
}
