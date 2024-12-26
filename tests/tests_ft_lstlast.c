#include "minunit.h"
#include "../include/libft.h"

MU_TEST(test_lstlast_return_last_element)
{
	// ARRANGE
	char	*content = "Head";
	char	*content1 = "One";
	char	*content2 = "Last";
	t_list	*head = ft_lstnew(content);
	t_list	*one = ft_lstnew(content1);
	t_list	*last = ft_lstnew(content2);
	head->next = one;
	one->next = last;
	t_list	*expected_result = last;

	// ACT
	t_list	*actual_result = ft_lstlast(head);

	// ASSERT 
	mu_assert(expected_result == actual_result, "Result should be the last element of the list");
	mu_assert_string_eq("Last", (char *)last->content);
	mu_assert_string_eq("Last", (char *)one->next->content);


	// FREE MEMORY
	t_list *current = head;
	t_list *next;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

MU_TEST(test_lstlast_list_is_null_should_return_null)
{
	// ARRANGE
	t_list	*head = NULL;
	t_list	*expected_result = NULL;

	// ACT
	t_list	*actual_result = ft_lstlast(head);

	// ASSERT 
	mu_assert(expected_result == actual_result, "Result should be NULL");

	// FREE MEMORY
	t_list *current = head;
	t_list *next;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

MU_TEST_SUITE(ft_lstlast_test_suite)
{
	MU_RUN_TEST(test_lstlast_return_last_element);	
	MU_RUN_TEST(test_lstlast_list_is_null_should_return_null);	
}
