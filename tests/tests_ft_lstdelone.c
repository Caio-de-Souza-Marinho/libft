#include "minunit.h"
#include "../include/libft.h"

void	del_content(void *content)
{
	free(content);
}

MU_TEST(test_lstdelone_delete_header_content)
{
	// ARRANGE
	t_list	*head = (t_list *)malloc(sizeof(t_list));
	char	*content = (char *)malloc(10 * sizeof(char *));
	head->content = content;
	head->next = NULL;

	// ACT
	ft_lstdelone(head, del_content);

	// ASSERT
	mu_assert(head != NULL, "The node should still exist (but content should be deleted).");

	// FREE MEMORY
	//free(head);
}

MU_TEST_SUITE(ft_lstdelone_test_suite)
{
	MU_RUN_TEST(test_lstdelone_delete_header_content);
}
