#include "minunit.h"
#include "../src/ft_lstiter.c"

void	to_upper_lst(void *content)
{
	char	*s;

	s = (char *)content;
	while (*s)
	{
		*s = ft_toupper(*s);
		s++;
	}
}

MU_TEST(test_lstiter_to_upper_content_of_only_one_element)
{
	// ARRANGE
	t_list	*head = (t_list *)malloc(sizeof(t_list));
	char	*content = ft_strdup("hello, World");
	head->content = content;
	head->next = NULL;
	char	*expected_result = "HELLO, WORLD";

	// ACT
	ft_lstiter(head, to_upper_lst);

	// ASSERT
	mu_assert(head != NULL, "The node shouldn't be NULL");
	mu_assert_string_eq(expected_result, head->content);

	// FREE MEMORY
	free(head->content);
	free(head);
}


MU_TEST(test_lstiter_to_upper_content_of_every_element)
{
	// ARRANGE
	t_list	*head = (t_list *)malloc(sizeof(t_list));
	char	*content1 = ft_strdup("Head");
	char	*content2 = ft_strdup("One");
	char	*content3 = ft_strdup("Two");
	head->content = content1;
	head->next = ft_lstnew(content2);
	head->next->next = ft_lstnew(content3);
	char	*expected_result1 = "HEAD";
	char	*expected_result2 = "ONE";
	char	*expected_result3 = "TWO";

	// ACT
	ft_lstiter(head, to_upper_lst);

	// ASSERT
	mu_assert(head != NULL, "The node shouldn't be NULL");
	mu_assert_string_eq(expected_result1, head->content);
	mu_assert_string_eq(expected_result2, head->next->content);
	mu_assert_string_eq(expected_result3, head->next->next->content);

	// FREE MEMORY
	t_list	*current = head;
	t_list	*next;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(content1);
	free(content2);
	free(content3);
}

MU_TEST_SUITE(ft_lstiter_test_suite)
{
	MU_RUN_TEST(test_lstiter_to_upper_content_of_only_one_element);
	MU_RUN_TEST(test_lstiter_to_upper_content_of_every_element);
}
