#include "minunit.h"
#include "../include/libft.h"

MU_TEST(test_tolower_receiving_A_returns_a)
{
	// ARRANGE
	int	input = 'A'; 
	int	expected_result = 'a';

	// ACT
	int	actual_result = ft_tolower(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_tolower_receiving_a_returns_a)
{
	// ARRANGE
	int	input = 'a'; 
	int	expected_result = 'a';

	// ACT
	int	actual_result = ft_tolower(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_tolower_receiving_char_0_returns_char_0)
{
	// ARRANGE
	int	input = '0'; 
	int	expected_result = '0';

	// ACT
	int	actual_result = ft_tolower(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_tolower_receiving_asterisk_returns_asterisk)
{
	// ARRANGE
	int	input = '*'; 
	int	expected_result = '*';

	// ACT
	int	actual_result = ft_tolower(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_tolower_test_suite)
{
	MU_RUN_TEST(test_tolower_receiving_A_returns_a);
	MU_RUN_TEST(test_tolower_receiving_a_returns_a);
	MU_RUN_TEST(test_tolower_receiving_char_0_returns_char_0);
	MU_RUN_TEST(test_tolower_receiving_asterisk_returns_asterisk);
}
