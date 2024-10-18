#include "minunit.h"
#include "../src/ft_split.c"

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

MU_TEST_SUITE(ft_split_test_suite)
{
	MU_RUN_TEST(test_split_string_hello_world_cool_returns_array_hello_world_cool_null);
	MU_RUN_TEST(test_split_string_hello_world_cool_returns_array_hello_world_cool_null);
}
