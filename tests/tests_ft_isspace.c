#include "minunit.h"
#include "../include/libft.h"

MU_TEST(test_isspace_receiving_space_returns_true)
{
	// ARRANGE
	int input = ' ';
	int expected_result = 1;

	// ACT
	int actual_result = ft_isspace(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isspace_receiving_tab_returns_true)
{
	// ARRANGE
	int input = '\t';
	int expected_result = 1;

	// ACT
	int actual_result = ft_isspace(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isspace_receiving_newline_returns_true)
{
	// ARRANGE
	int input = '\n';
	int expected_result = 1;

	// ACT
	int actual_result = ft_isspace(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isspace_receiving_a_returns_false)
{
	// ARRANGE
	int input = 'a';
	int expected_result = 0;

	// ACT
	int actual_result = ft_isspace(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isspace_receiving_backspace_returns_false)
{
	// ARRANGE
	int input = 8; // ASCII backspace character
	int expected_result = 0;

	// ACT
	int actual_result = ft_isspace(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_isspace_test_suite)
{
	MU_RUN_TEST(test_isspace_receiving_space_returns_true);
	MU_RUN_TEST(test_isspace_receiving_tab_returns_true);
	MU_RUN_TEST(test_isspace_receiving_newline_returns_true);
	MU_RUN_TEST(test_isspace_receiving_a_returns_false);
	MU_RUN_TEST(test_isspace_receiving_backspace_returns_false);
}
