#include "minunit.h"
#include "../include/libft.h"

MU_TEST(test_strlcat_concat_A_and_B_should_set_dst_as_AB)
{
	// ARRANGE
	char	dst[3] = "A\0";
	char	src[2] = "B";
	size_t	size = 3;
	char	expected_dst[] = "AB";
	size_t	expected_result = 2;

	// ACT
	size_t	actual_result = ft_strlcat(dst, src, size);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST(test_strlcat_concat_ABC_and_DEF_size_2_should_keep_dst_as_ABC_and_return_5)
{
	// ARRANGE
	char	dst[7] = "ABC\0";
	char	src[4] = "DEF";
	size_t	size = 2;
	char	expected_dst[] = "ABC";
	size_t	expected_result = 5;

	// ACT
	size_t	actual_result = ft_strlcat(dst, src, size);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST(test_strlcat_concat_empty_src_should_keep_dst_unchanged)
{
	// ARRANGE
	char	dst[6] = "Hello";
	char	src[1] = "";
	size_t	size = 6;
	char	expected_dst[] = "Hello";
	size_t	expected_result = 5;

	// ACT
	size_t	actual_result = ft_strlcat(dst, src, size);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST(test_strlcat_empty_dst_should_copy_src)
{
	// ARRANGE
	char	dst[6] = "";
	char	src[5] = "Test";
	size_t	size = 6;
	char	expected_dst[] = "Test";
	size_t	expected_result = 4;

	// ACT
	size_t	actual_result = ft_strlcat(dst, src, size);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST_SUITE(ft_strlcat_test_suite)
{
	MU_RUN_TEST(test_strlcat_concat_A_and_B_should_set_dst_as_AB);
	MU_RUN_TEST(test_strlcat_concat_ABC_and_DEF_size_2_should_keep_dst_as_ABC_and_return_5);
	MU_RUN_TEST(test_strlcat_concat_empty_src_should_keep_dst_unchanged);
	MU_RUN_TEST(test_strlcat_empty_dst_should_copy_src);
}
