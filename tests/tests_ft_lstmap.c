#include "minunit.h"
#include "../src/ft_lstmap.c"

void	*to_upper_lstmap(void *content)
{
	char	*s;
	char	*new_str;
	int	i;

	s = (char *)content;
	new_str = ft_strdup(s);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (new_str[i])
	{
		new_str[i] = ft_toupper(new_str[i]);
		i++;
	}
	return ((void *)new_str);
}

void	del_node(void *content)
{
	free(content);
}

MU_TEST(test_lstmap_to_upper_content_of_only_one_element)
{
	// ARRANGE
	t_list	*head = (t_list *)malloc(sizeof(t_list));
	char	*content = ft_strdup("hello, World");
	head->content = content;
	head->next = NULL;
	char	*expected_result = "HELLO, WORLD";

	// ACT
	t_list	*new_list = ft_lstmap(head, (void *)to_upper_lstmap, del_node);

	// ASSERT
	mu_assert(new_list != NULL, "The new list head shouldn't be NULL");
	mu_assert_string_eq(expected_result, (char *)new_list->content);

	// FREE MEMORY
	ft_lstclear(&new_list, del_node);
	ft_lstclear(&head, del_node);
}

MU_TEST(test_lstmap_to_upper_content_of_every_element)
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
	t_list	*new_list = ft_lstmap(head, (void *)to_upper_lstmap, del_node);

	// ASSERT
	mu_assert(new_list != NULL, "The new list head shouldn't be NULL");
	mu_assert_string_eq(expected_result1, (char *)new_list->content);
	mu_assert_string_eq(expected_result2, (char *)new_list->next->content);
	mu_assert_string_eq(expected_result3, (char *)new_list->next->next->content);

	// FREE MEMORY
	ft_lstclear(&new_list, del_node);
	ft_lstclear(&head, del_node);
}

MU_TEST_SUITE(ft_lstmap_test_suite)
{
	MU_RUN_TEST(test_lstmap_to_upper_content_of_only_one_element);
	MU_RUN_TEST(test_lstmap_to_upper_content_of_every_element);
}
