#include "minunit.h"
#include "../src/ft_strlcpy.c"

MU_TEST(test_strlcpy_passing_ai_oi_2_set_dst_as_o_and_returns_2)
{
	// ARRANGE
	char	dst[] = "ai";
	char	src[] = "oi";
	int	size = 2;
	int	expected_result = 2;
	char	expected_dst[] = "o";

	// ACT
	int actual_result = ft_strlcpy(dst, src, size);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}


MU_TEST(test_strlcpy_passing_ai_oi_3_set_dst_as_oi_and_returns_2)
{
	// ARRANGE
	char	dst[] = "ai";
	char	src[] = "oi";
	int	size = 3;
	int	expected_result = 2;
	char	expected_dst[] = "oi";

	// ACT
	int actual_result = ft_strlcpy(dst, src, size);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}


MU_TEST(test_strlcpy_passing_ai_boi_3_set_dst_as_bo_and_returns_3)
{
	// ARRANGE
	char	dst[] = "ai";
	char	src[] = "boi";
	int	size = 3;
	int	expected_result = 3;
	char	expected_dst[] = "bo";

	// ACT
	int actual_result = ft_strlcpy(dst, src, size);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST_SUITE(ft_strlcpy_test_suite)
{
	MU_RUN_TEST(test_strlcpy_passing_ai_oi_2_set_dst_as_o_and_returns_2);
	MU_RUN_TEST(test_strlcpy_passing_ai_oi_3_set_dst_as_oi_and_returns_2);
	MU_RUN_TEST(test_strlcpy_passing_ai_boi_3_set_dst_as_bo_and_returns_3);
}
