#include "minunit.h"
#include "../include/libft.h"

MU_TEST(test_strcmp_equal_strings_return_zero)
{
	// ARRANGE
	const char *s1 = "abc";
	const char *s2 = "abc";
	int expected = 0;

	// ACT
	int actual = ft_strcmp(s1, s2);

	// ASSERT
	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_strcmp_s1_greater_first_char_returns_positive)
{
	// ARRANGE
	const char *s1 = "zebra";
	const char *s2 = "apple";
	int expected = 25; // 'z' (122) - 'a' (97) = 25

	// ACT
	int actual = ft_strcmp(s1, s2);

	// ASSERT
	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_strcmp_s1_less_first_char_returns_negative)
{
	// ARRANGE
	const char *s1 = "apple";
	const char *s2 = "zebra";
	int expected = -25; // 'a' (97) - 'z' (122) = -25

	// ACT
	int actual = ft_strcmp(s1, s2);

	// ASSERT
	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_strcmp_different_middle_char_returns_difference)
{
	// ARRANGE
	const char *s1 = "hello";
	const char *s2 = "hallo";
	int expected = 4; // 'e' (101) - 'a' (97) = 4

	// ACT
	int actual = ft_strcmp(s1, s2);

	// ASSERT
	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_strcmp_s1_shorter_than_s2_returns_negative)
{
	// ARRANGE
	const char *s1 = "test";
	const char *s2 = "testing";
	int expected = -105; // '\0' (0) - 'i' (105) = -105

	// ACT
	int actual = ft_strcmp(s1, s2);

	// ASSERT
	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_strcmp_both_empty_strings_return_zero)
{
	// ARRANGE
	const char *s1 = "";
	const char *s2 = "";
	int expected = 0;

	// ACT
	int actual = ft_strcmp(s1, s2);

	// ASSERT
	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_strcmp_s1_empty_returns_negative)
{
	// ARRANGE
	const char *s1 = "";
	const char *s2 = "abc";
	int expected = -97; // '\0' (0) - 'a' (97) = -97

	// ACT
	int actual = ft_strcmp(s1, s2);

	// ASSERT
	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_strcmp_case_sensitive_comparison)
{
	// ARRANGE
	const char *s1 = "Hello";
	const char *s2 = "hello";
	int expected = -32; // 'H' (72) - 'h' (104) = -32

	// ACT
	int actual = ft_strcmp(s1, s2);

	// ASSERT
	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_strcmp_non_ascii_characters)
{
	// ARRANGE
	const char *s1 = "café";
	const char *s2 = "cafe";
	int expected = 132; // 'é' (233) - 'e' (101) = 132

	// ACT
	int actual = ft_strcmp(s1, s2);

	// ASSERT
	mu_assert_int_eq(expected, actual);
}

MU_TEST_SUITE(ft_strcmp_test_suite)
{
	MU_RUN_TEST(test_strcmp_equal_strings_return_zero);
	MU_RUN_TEST(test_strcmp_s1_greater_first_char_returns_positive);
	MU_RUN_TEST(test_strcmp_s1_less_first_char_returns_negative);
	MU_RUN_TEST(test_strcmp_different_middle_char_returns_difference);
	MU_RUN_TEST(test_strcmp_s1_shorter_than_s2_returns_negative);
	MU_RUN_TEST(test_strcmp_both_empty_strings_return_zero);
	MU_RUN_TEST(test_strcmp_s1_empty_returns_negative);
	MU_RUN_TEST(test_strcmp_case_sensitive_comparison);
	MU_RUN_TEST(test_strcmp_non_ascii_characters);
}
