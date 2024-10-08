#include "minunit.h"
#include "../src/ft_isascii.c"

MU_TEST(test_isascii_receiving_A_return_true)
{
	// ASSERT
	char	input = 'A';
	int	expected_result = 1;

	// ACT
	int	actual_result = ft_isascii(input);

	// ARRANGE
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isascii_receiving_127_return_true)
{
	// ASSERT
	int	input = 127;
	int	expected_result = 1;

	// ACT
	int	actual_result = ft_isascii(input);

	// ARRANGE
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isascii_receiving_128_return_false)
{
	// ASSERT
	int	input = 128;
	int	expected_result = 0;

	// ACT
	int	actual_result = ft_isascii(input);

	// ARRANGE
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_isascii_test_suite)
{
	MU_RUN_TEST(test_isascii_receiving_A_return_true);
	MU_RUN_TEST(test_isascii_receiving_127_return_true);
	MU_RUN_TEST(test_isascii_receiving_128_return_false);
}
