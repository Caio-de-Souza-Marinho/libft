#include "minunit.h"
#include "../include/libft.h"

MU_TEST(test_strlen_receiving_A_returns_1)
{
	// ARRANGE
	const char	*input = "A"; 
	size_t	expected_result = 1;

	// ACT
	size_t	actual_result = ft_strlen(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_strlen_receiving_caio_returns_4)
{
	// ARRANGE
	const char	*input = "caio"; 
	size_t	expected_result = 4;

	// ACT
	size_t	actual_result = ft_strlen(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_strlen_receiving_tes_null_terminator_te_returns_3)
{
	// ARRANGE
	const char	*input = "tes\0te"; 
	size_t	expected_result = 3;

	// ACT
	size_t	actual_result = ft_strlen(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_strlen_test_suite)
{
	MU_RUN_TEST(test_strlen_receiving_A_returns_1);
	MU_RUN_TEST(test_strlen_receiving_caio_returns_4);
	MU_RUN_TEST(test_strlen_receiving_tes_null_terminator_te_returns_3);
}
