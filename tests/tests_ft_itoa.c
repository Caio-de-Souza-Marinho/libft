#include "minunit.h"
#include "../src/ft_itoa.c"

MU_TEST(test_itoa_passing_int_1234_returns_string_1234)
{
	// ARRANGE
	int	n = 1234;
	char	*expected_result = "1234";

	// ACT
	char	*actual_result = ft_itoa(n);

	// ASSERT
	mu_assert_string_eq(expected_result, actual_result);

	// FREE MEMORY
	free(actual_result);
}

MU_TEST(test_itoa_passing_int_0_returns_string_0)
{
	// ARRANGE
	int	n = 0;
	char	*expected_result = "0";

	// ACT
	char	*actual_result = ft_itoa(n);

	// ASSERT
	mu_assert_string_eq(expected_result, actual_result);

	// FREE MEMORY
	free(actual_result);
}

MU_TEST(test_itoa_passing_int_minus_10_returns_string_minus_10)
{
	// ARRANGE
	int	n = -10;
	char	*expected_result = "-10";

	// ACT
	char	*actual_result = ft_itoa(n);

	// ASSERT
	mu_assert_string_eq(expected_result, actual_result);

	// FREE MEMORY
	free(actual_result);
}

MU_TEST_SUITE(ft_itoa_test_suite)
{
	MU_RUN_TEST(test_itoa_passing_int_1234_returns_string_1234);
	MU_RUN_TEST(test_itoa_passing_int_0_returns_string_0);
	MU_RUN_TEST(test_itoa_passing_int_minus_10_returns_string_minus_10);
}
