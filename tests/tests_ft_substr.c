#include "minunit.h"
#include "../src/ft_substr.c"

MU_TEST(test_substr_string_caio_find_io_return_io)
{
	// ARRANGE
	char		s[] = "caio";
	unsigned int	start = 2;
	size_t		len = 2;
	char		expected_result[] = "io";	

	// ACT
	char		*actual_result = ft_substr(s, start, len);

	// ASSERT
	mu_assert_string_eq(expected_result, actual_result);
	free(actual_result);
}

MU_TEST(test_substr_string_caio_len_8_find_io_return_io)
{
	// ARRANGE
	char		s[] = "caio";
	unsigned int	start = 2;
	size_t		len = 8;
	char		expected_result[] = "io";	

	// ACT
	char		*actual_result = ft_substr(s, start, len);

	// ASSERT
	mu_assert_string_eq(expected_result, actual_result);
	free(actual_result);
}

MU_TEST(test_substr_string_caio_len_0_should_return_null)
{
	// ARRANGE
	char		s[] = "caio";
	unsigned int	start = 1;
	size_t		len = 0;

	// ACT
	char		*actual_result = ft_substr(s, start, len);

	// ASSERT
	mu_assert(actual_result == NULL, "the result should be NULL");
	free(actual_result);
}

MU_TEST_SUITE(ft_substr_test_suite)
{
	MU_RUN_TEST(test_substr_string_caio_find_io_return_io);
	MU_RUN_TEST(test_substr_string_caio_len_8_find_io_return_io);
	//MU_RUN_TEST(test_substr_string_caio_len_0_should_return_null);
}

