#include "minunit.h"
#include "../src/ft_toupper.c"

MU_TEST(test_toupper_receiving_A_returns_A)
{
	// ARRANGE
	int	input = 'A'; 
	int	expected_result = 'A';

	// ACT
	int	actual_result = ft_toupper(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_toupper_receiving_a_returns_A)
{
	// ARRANGE
	int	input = 'a'; 
	int	expected_result = 'A';

	// ACT
	int	actual_result = ft_toupper(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_toupper_receiving_char_0_returns_char_0)
{
	// ARRANGE
	int	input = '0'; 
	int	expected_result = '0';

	// ACT
	int	actual_result = ft_toupper(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_toupper_test_suite)
{
	MU_RUN_TEST(test_toupper_receiving_A_returns_A);
	MU_RUN_TEST(test_toupper_receiving_a_returns_A);
	MU_RUN_TEST(test_toupper_receiving_char_0_returns_char_0);
}
