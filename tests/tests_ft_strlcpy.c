#include "minunit.h"
#include "../include/libft.h"

MU_TEST(test_strlcpy_passing_ai_oi_2_set_dst_as_o_and_returns_2)
{
	// ARRANGE
	char	dst[] = "ai";
	char	src[] = "oi";
	size_t	size = 2;
	size_t	expected_result = 2;
	char	expected_dst[] = "o";

	// ACT
	size_t actual_result = ft_strlcpy(dst, src, size);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}


MU_TEST(test_strlcpy_passing_ai_oi_3_set_dst_as_oi_and_returns_2)
{
	// ARRANGE
	char	dst[] = "ai";
	char	src[] = "oi";
	size_t	size = 3;
	size_t	expected_result = 2;
	char	expected_dst[] = "oi";

	// ACT
	size_t actual_result = ft_strlcpy(dst, src, size);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}


MU_TEST(test_strlcpy_passing_ai_boi_3_set_dst_as_bo_and_returns_3)
{
	// ARRANGE
	char	dst[] = "ai";
	char	src[] = "boi";
	size_t	size = 3;
	size_t	expected_result = 3;
	char	expected_dst[] = "bo";

	// ACT
	size_t actual_result = ft_strlcpy(dst, src, size);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST(test_strlcpy_passing_size_0_returns_src_len_without_modifying_dst)
{
	// ARRANGE
	char	dst[] = "destination";
	char	src[] = "source";
	size_t	size = 0;
	size_t	expected_result = 6; // length of "source"
	char	expected_dst[] = "destination"; // dst must remain unchanged

	// ACT
	size_t	actual_result = ft_strlcpy(dst, src, size);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}


MU_TEST(test_strlcpy_passing_size_exact_src_len_plus_one)
{
	// ARRANGE
	char	dst[10]; 
	char	src[] = "hello";
	size_t	size = 6; // exactly the size of "hello" + 1
	size_t	expected_result = 5; // length of src 
	char	expected_dst[] = "hello"; // fully copied string 

	// ACT
	size_t	actual_result = ft_strlcpy(dst, src, size);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST(test_strlcpy_large_src_small_dst)
{
	// ARRANGE
	char	dst[5]; 
	char	src[] = "this is a very long string";
	size_t	size = 5; // the size of dst buffer 
	size_t	expected_result = 26; // the length of src 
	char	expected_dst[] = "this"; // only the first 4 chars should be copied, then null-terminated 

	// ACT
	size_t	actual_result = ft_strlcpy(dst, src, size);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST(test_strlcpy_empty_src_sets_dst_to_empty_and_returns_0)
{
	// ARRANGE
	char	dst[] = "destination"; 
	char	src[] = "";
	size_t	size = 10; //
	size_t	expected_result = 0; // the length of src 
	char	expected_dst[] = ""; // dst should be an empty string 

	// ACT
	size_t	actual_result = ft_strlcpy(dst, src, size);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST(test_strlcpy_passing_size_1_sets_dst_to_empty_and_returns_src_len)
{
	// ARRANGE
	char	dst[] = "destination"; 
	char	src[] = "source";
	size_t	size = 1; //
	size_t	expected_result = 6; // the length of "source"
	char	expected_dst[] = ""; // only null character should be set

	// ACT
	size_t	actual_result = ft_strlcpy(dst, src, size);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST_SUITE(ft_strlcpy_test_suite)
{
	MU_RUN_TEST(test_strlcpy_passing_ai_oi_2_set_dst_as_o_and_returns_2);
	MU_RUN_TEST(test_strlcpy_passing_ai_oi_3_set_dst_as_oi_and_returns_2);
	MU_RUN_TEST(test_strlcpy_passing_ai_boi_3_set_dst_as_bo_and_returns_3);
	MU_RUN_TEST(test_strlcpy_passing_size_0_returns_src_len_without_modifying_dst);
	MU_RUN_TEST(test_strlcpy_passing_size_exact_src_len_plus_one);
	MU_RUN_TEST(test_strlcpy_large_src_small_dst);
	MU_RUN_TEST(test_strlcpy_empty_src_sets_dst_to_empty_and_returns_0);
	MU_RUN_TEST(test_strlcpy_passing_size_1_sets_dst_to_empty_and_returns_src_len);
}
