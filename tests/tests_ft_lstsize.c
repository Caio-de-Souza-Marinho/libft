#include "minunit.h"
#include "../include/libft.h"

MU_TEST(test_lstsize_count_size_should_return_5)
{
	// ARRANGE
	char	*content = "Head";
	char	*content1 = "One";
	char	*content2 = "Two";
	char	*content3 = "Three";
	char	*content4 = "Four";
	t_list	*head = ft_lstnew(content); 
	head->next = ft_lstnew(content1);
	head->next->next = ft_lstnew(content2);
	head->next->next->next = ft_lstnew(content3);
	head->next->next->next->next = ft_lstnew(content4);
	int	expected_result = 5;

	// ACT
	int	actual_result = ft_lstsize(head);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);	

	// FREE MEMORY
	t_list	*current = head;
	t_list	*next;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

MU_TEST(test_lstsize_count_size_should_return_3)
{
	// ARRANGE
	char	*content = "Head";
	char	*content1 = "One";
	char	*content2 = "Two";
	t_list	*head = ft_lstnew(content); 
	head->next = ft_lstnew(content1);
	head->next->next = ft_lstnew(content2);
	int	expected_result = 3;

	// ACT
	int	actual_result = ft_lstsize(head);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);	

	// FREE MEMORY
	t_list	*current = head;
	t_list	*next;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

MU_TEST_SUITE(ft_lstsize_test_suite)
{
	MU_RUN_TEST(test_lstsize_count_size_should_return_5);
	MU_RUN_TEST(test_lstsize_count_size_should_return_3);
}
