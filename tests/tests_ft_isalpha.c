#include "minunit.h"
#include "../include/libft.h"

MU_TEST(test_isalpha_receiving_A_returns_true)
{
	// ARRANGE
	char	input = 'A';
	int	expected_result = 1; // any number different from 0
	
	// ACT
	int	actual_result = ft_isalpha(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isalpha_receiving_b_returns_true)
{
	// ARRANGE
	char	input = 'b';
	int	expected_result = 1; // any number different from 0
	
	// ACT
	int	actual_result = ft_isalpha(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isalpha_receiving_3_returns_false)
{
	// ARRANGE
	char	input = '3';
	int	expected_result = 0; // any number different from 0
	
	// ACT
	int	actual_result = ft_isalpha(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isalpha_receiving_asterisk_returns_false)
{
	// ARRANGE
	char	input = '*';
	int	expected_result = 0; // any number different from 0
	
	// ACT
	int	actual_result = ft_isalpha(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isalpha_receiving_int_65_returns_true)
{
	// ARRANGE
	int	input = 65;
	int	expected_result = 1; // any number different from 0
	
	// ACT
	int	actual_result = ft_isalpha(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_isalpha_test_suite)
{
	MU_RUN_TEST(test_isalpha_receiving_A_returns_true);
	MU_RUN_TEST(test_isalpha_receiving_b_returns_true);
	MU_RUN_TEST(test_isalpha_receiving_3_returns_false);
	MU_RUN_TEST(test_isalpha_receiving_asterisk_returns_false);
	MU_RUN_TEST(test_isalpha_receiving_int_65_returns_true);
}
