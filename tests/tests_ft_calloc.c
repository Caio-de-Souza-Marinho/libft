#include "minunit.h"
#include "../src/ft_calloc.c"

MU_TEST(test_calloc_allocating_1_byte_char)
{
	// ARRANGE
	size_t	nmemb = 1;
	size_t	size = sizeof(char);
	char	expected_result = '\0';

	// ACT
	char	*actual_result = ft_calloc(nmemb, size);

	// ASSERT 
	mu_assert_char_eq(expected_result, *actual_result);
	free(actual_result);
}

MU_TEST(test_calloc_allocating_100000_bytes_char)
{
	// ARRANGE
	size_t	nmemb = 100000;
	size_t	size = sizeof(char);
	char	expected_result[100000] = {0};

	// ACT
	char	*actual_result = ft_calloc(nmemb, size);

	// ASSERT 
	mu_assert_mem_eq(expected_result, actual_result, nmemb);
	free(actual_result);
}

MU_TEST(test_calloc_allocating_more_than_size_t_max_should_return_null)
{
	// ARRANGE
	#define SIZE_MAX ((size_t) ~((size_t) 0))
	size_t	nmemb = SIZE_MAX + 1;
	size_t	size = sizeof(char);
	char	*expected_result = NULL;

	// ACT
	char	*actual_result = ft_calloc(nmemb, size);

	// ASSERT 
	mu_assert_mem_eq(expected_result, actual_result, nmemb);
	free(actual_result);
}

MU_TEST_SUITE(ft_calloc_test_suite)
{
	MU_RUN_TEST(test_calloc_allocating_1_byte_char);
	MU_RUN_TEST(test_calloc_allocating_100000_bytes_char);
	MU_RUN_TEST(test_calloc_allocating_more_than_size_t_max_should_return_null);
}
