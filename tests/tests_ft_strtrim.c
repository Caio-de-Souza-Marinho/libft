#include "minunit.h"
#include "../src/ft_strtrim.c"

MU_TEST(test_strtrim_abbbbcaiobbbbaaa_should_return_caio)
{
	// ARRANGE
	char	*s1 = "abbbbcaiobbbbaaa";
	char	*set = "ab";
	char	*expected_result = "caio";

	// ACT
	char	*actual_result = ft_strtrim(s1, set);

	// ASSERT
	mu_assert_string_eq(expected_result, actual_result);
	free(actual_result);
}

MU_TEST(test_strtrim_space_caio_space_should_return_caio)
{
	// ARRANGE
	char	*s1 = " caio ";
	char	*set = " ";
	char	*expected_result = "caio";

	// ACT
	char	*actual_result = ft_strtrim(s1, set);

	// ASSERT
	mu_assert_string_eq(expected_result, actual_result);
	free(actual_result);
}

MU_TEST_SUITE(ft_strtrim_test_suite)
{
	MU_RUN_TEST(test_strtrim_abbbbcaiobbbbaaa_should_return_caio);
	MU_RUN_TEST(test_strtrim_space_caio_space_should_return_caio);
}
