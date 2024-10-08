#include "minunit.h"
#include "../src/ft_isalnum.c"

MU_TEST(test_isalnum_receiving_A_returns_true)
{
	// ARRANGE
	char	input = 'A';
	int	expected_result = 1;

	// ACT
	int	actual_result = ft_isalnum(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isalnum_receiving_0_returns_true)
{
	// ARRANGE
	char	input = '0';
	int	expected_result = 1;

	// ACT
	int	actual_result = ft_isalnum(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isalnum_receiving_asterisk_returns_false)
{
	// ARRANGE
	char	input = '*';
	int	expected_result = 0;

	// ACT
	int	actual_result = ft_isalnum(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_isalnum_test_suite)
{
	MU_RUN_TEST(test_isalnum_receiving_A_returns_true);
	MU_RUN_TEST(test_isalnum_receiving_0_returns_true);
	MU_RUN_TEST(test_isalnum_receiving_asterisk_returns_false);
}
