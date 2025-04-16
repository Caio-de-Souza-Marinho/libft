#include "minunit.h"
#include "../include/libft.h"

MU_TEST(test_split_string_hello_world_cool_returns_array_hello_world_cool_null)
{
	// ARRANGE
	char	*s = "Hello World Cool";
	char	c = ' ';
	char	*expected_result[] = {"Hello", "World", "Cool", NULL};

	// ACT
	char	**actual_result = ft_split(s, c);

	// ASSERT
	for (int i = 0; i < 4; i++)
		mu_assert_string_eq(expected_result[i], actual_result[i]);

	// FREE MEMORY	
	for (int i = 0; i < 4; i++)
		free(actual_result[i]);
	free(actual_result);
}

MU_TEST(test_split_string_hello_world_cool_using__as_delimiter_returns_array_hello_world_cool_null)
{
	// ARRANGE
	char	*s = "Hello_World_Cool";
	char	c = '_';
	char	*expected_result[] = {"Hello", "World", "Cool", NULL};

	// ACT
	char	**actual_result = ft_split(s, c);

	// ASSERT
	for (int i = 0; i < 4; i++)
		mu_assert_string_eq(expected_result[i], actual_result[i]);

	// FREE MEMORY	
	for (int i = 0; i < 4; i++)
		free(actual_result[i]);
	free(actual_result);
}
MU_TEST(test_split_empty_string_returns_null_terminated_array)
{
	char	*s = "";
	char	c = ' ';
	char	*expected[] = {NULL};

	char	**actual = ft_split(s, c);
	mu_assert_string_eq(expected[0], actual[0]);
	free(actual);
}

MU_TEST(test_split_only_delimiters_returns_null_terminated_array)
{
	char	*s = "   ";
	char	c = ' ';
	char	*expected[] = {NULL};

	char	**actual = ft_split(s, c);
	mu_assert_string_eq(expected[0], actual[0]);
	free(actual);
}

MU_TEST(test_split_consecutive_delimiters_returns_correct_array)
{
	char	*s = "Hello,,World";
	char	c = ',';
	char	*expected[] = {"Hello", "World", NULL};

	char	**actual = ft_split(s, c);
	for (int i = 0; expected[i]; i++)
		mu_assert_string_eq(expected[i], actual[i]);
	for (int i = 0; actual[i]; i++)
		free(actual[i]);
	free(actual);
}

MU_TEST(test_split_leading_trailing_delimiters)
{
	char	*s = "___Hello__World___";
	char	c = '_';
	char	*expected[] = {"Hello", "World", NULL};

	char	**actual = ft_split(s, c);
	for (int i = 0; expected[i]; i++)
		mu_assert_string_eq(expected[i], actual[i]);
	for (int i = 0; actual[i]; i++)
		free(actual[i]);
	free(actual);
}

MU_TEST(test_split_consecutive_delimiters)
{
	char **res = ft_split(",,Hello,,World,,", ',');
	mu_assert_string_eq("Hello", res[0]);
	mu_assert_string_eq("World", res[1]);
	mu_assert(res[2] == NULL, "Array must be NULL-terminated");
	free(res[0]); free(res[1]); free(res);
}

MU_TEST_SUITE(ft_split_test_suite)
{
	MU_RUN_TEST(test_split_string_hello_world_cool_returns_array_hello_world_cool_null);
	MU_RUN_TEST(test_split_string_hello_world_cool_using__as_delimiter_returns_array_hello_world_cool_null);
	MU_RUN_TEST(test_split_empty_string_returns_null_terminated_array);
	MU_RUN_TEST(test_split_only_delimiters_returns_null_terminated_array);
	MU_RUN_TEST(test_split_consecutive_delimiters_returns_correct_array);
	MU_RUN_TEST(test_split_leading_trailing_delimiters);
	MU_RUN_TEST(test_split_consecutive_delimiters);
}
