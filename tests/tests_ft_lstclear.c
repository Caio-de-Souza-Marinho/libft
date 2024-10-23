#include "minunit.h"
#include "../src/ft_lstclear.c"

void	del_elem(void *content)
{
	free(content);
}

MU_TEST(test_lstclear_delete_header)
{
	// ARRANGE
	t_list	*head = (t_list *)malloc(sizeof(t_list));
	char	*content = (char *)malloc(10 * sizeof(char *));
	head->content = content;
	head->next = NULL;

	// ACT
	ft_lstclear(&head, del_elem);

	// ASSERT
	mu_assert(head == NULL, "The node should be NULL");

	// FREE MEMORY
	//free(head);
}

MU_TEST(test_lstclear_delete_last_three_elements)
{
	// ARRANGE
	t_list	*head = (t_list *)malloc(sizeof(t_list)); 
	char	*content = (char *)malloc(10 * sizeof(char *));
	char	*content1 = (char *)malloc(10 * sizeof(char *));
	char	*content2 = (char *)malloc(10 * sizeof(char *));
	char	*content3 = (char *)malloc(10 * sizeof(char *));
	char	*content4 = (char *)malloc(10 * sizeof(char *));
	head->content = content;
	head->next = ft_lstnew(content1);
	head->next->next = ft_lstnew(content2);
	head->next->next->next = ft_lstnew(content3);
	head->next->next->next->next = ft_lstnew(content4);

	// ACT
	ft_lstclear(&head->next->next, del_elem);

	// ASSERT
	mu_assert(head != NULL, "The node head shouldn't be NULL");
	mu_assert(head->next->next == NULL, "The second node after head should be NULL");

	// FREE MEMORY
	t_list	*current = head;
	t_list	*next;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(content);
	free(content1);
}

MU_TEST_SUITE(ft_lstclear_test_suite)
{
	MU_RUN_TEST(test_lstclear_delete_header);
	MU_RUN_TEST(test_lstclear_delete_last_three_elements);
}
