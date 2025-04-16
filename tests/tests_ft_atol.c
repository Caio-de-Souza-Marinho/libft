#include "minunit.h"
#include "../include/libft.h"

MU_TEST(test_atol_convert_1_char_to_1_long)
{
	char    *input = "1";
	long    expected = 1;
	long    actual = ft_atol(input);

	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_atol_convert_42_char_to_42_long)
{
	char    *input = "42";
	long    expected = 42;
	long    actual = ft_atol(input);

	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_atol_convert_1042_char_to_1042_long)
{
	char    *input = "1042";
	long    expected = 1042;
	long    actual = ft_atol(input);

	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_atol_convert_minus_1_char_to_minus_1_long)
{
	char    *input = "-1";
	long    expected = -1;
	long    actual = ft_atol(input);

	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_atol_convert_minus_1042_char_to_minus_1042_long)
{
	char    *input = "-1042";
	long    expected = -1042;
	long    actual = ft_atol(input);

	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_atol_convert_minus_1042_with_space)
{
	char    *input = "   -1042";
	long    expected = -1042;
	long    actual = ft_atol(input);

	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_atol_entering_minus_minus_1042_returns_0)
{
	char    *input = "--1042";
	long    expected = 0;
	long    actual = ft_atol(input);

	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_atol_entering_1042e2_returns_1042)
{
	char    *input = "1042e2";
	long    expected = 1042;
	long    actual = ft_atol(input);

	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_atol_entering_MAX_LONG_returns_correct)
{
	char    *input = "9223372036854775807";
	long    expected = 9223372036854775807L;
	long    actual = ft_atol(input);

	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_atol_entering_MAX_LONG_plus_one_returns_MIN_LONG)
{
	char    *input = "9223372036854775808";
	long    expected = (-9223372036854775807L - 1L);
	long    actual = ft_atol(input);

	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_atol_entering_MIN_LONG_returns_correct)
{
	char    *input = "-9223372036854775808";
	long    expected = (-9223372036854775807L - 1L);
	long    actual = ft_atol(input);

	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_atol_entering_MIN_LONG_minus_one_returns_MAX_LONG)
{
	char    *input = "-9223372036854775809";
	long    expected = 9223372036854775807L;
	long    actual = ft_atol(input);

	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_atol_entering_0_returns_0)
{
	char    *input = "0";
	long    expected = 0;
	long    actual = ft_atol(input);

	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_atol_entering_plus_42_returns_42)
{
	char    *input = "+42";
	long    expected = 42;
	long    actual = ft_atol(input);

	mu_assert_int_eq(expected, actual);
}

MU_TEST(test_atol_entering_plus_plus_42_returns_0)
{
	char    *input = "++42";
	long    expected = 0;
	long    actual = ft_atol(input);

	mu_assert_int_eq(expected, actual);
}

MU_TEST_SUITE(ft_atol_test_suite)
{
	MU_RUN_TEST(test_atol_convert_1_char_to_1_long);
	MU_RUN_TEST(test_atol_convert_42_char_to_42_long);
	MU_RUN_TEST(test_atol_convert_1042_char_to_1042_long);
	MU_RUN_TEST(test_atol_convert_minus_1_char_to_minus_1_long);
	MU_RUN_TEST(test_atol_convert_minus_1042_char_to_minus_1042_long);
	MU_RUN_TEST(test_atol_convert_minus_1042_with_space);
	MU_RUN_TEST(test_atol_entering_minus_minus_1042_returns_0);
	MU_RUN_TEST(test_atol_entering_1042e2_returns_1042);
	MU_RUN_TEST(test_atol_entering_MAX_LONG_returns_correct);
	MU_RUN_TEST(test_atol_entering_MAX_LONG_plus_one_returns_MIN_LONG);
	MU_RUN_TEST(test_atol_entering_MIN_LONG_returns_correct);
	MU_RUN_TEST(test_atol_entering_MIN_LONG_minus_one_returns_MAX_LONG);
	MU_RUN_TEST(test_atol_entering_0_returns_0);
	MU_RUN_TEST(test_atol_entering_plus_42_returns_42);
	MU_RUN_TEST(test_atol_entering_plus_plus_42_returns_0);
}
