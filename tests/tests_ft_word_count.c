#include "minunit.h"
#include "../include/libft.h"

MU_TEST(test_word_count_with_no_delimiter_returns_1)
{
	// ARRANGE
	char const *input = "Hello";
	char delimiter = ' ';
	int expected_result = 1;

	// ACT
	int actual_result = ft_word_count(input, delimiter);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_word_count_with_multiple_words_returns_3)
{
	// ARRANGE
	char const *input = "Hello world how";
	char delimiter = ' ';
	int expected_result = 3;

	// ACT
	int actual_result = ft_word_count(input, delimiter);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_word_count_with_no_words_returns_0)
{
	// ARRANGE
	char const *input = "";
	char delimiter = ' ';
	int expected_result = 0;

	// ACT
	int actual_result = ft_word_count(input, delimiter);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_word_count_with_delimiters_only_returns_0)
{
	// ARRANGE
	char const *input = "    ";
	char delimiter = ' ';
	int expected_result = 0;

	// ACT
	int actual_result = ft_word_count(input, delimiter);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_word_count_with_multiple_delimiters_between_words_returns_correct_count)
{
	// ARRANGE
	char const *input = "Hello   world   how";
	char delimiter = ' ';
	int expected_result = 3;

	// ACT
	int actual_result = ft_word_count(input, delimiter);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_word_count_test_suite)
{
	MU_RUN_TEST(test_word_count_with_no_delimiter_returns_1);
	MU_RUN_TEST(test_word_count_with_multiple_words_returns_3);
	MU_RUN_TEST(test_word_count_with_no_words_returns_0);
	MU_RUN_TEST(test_word_count_with_delimiters_only_returns_0);
	MU_RUN_TEST(test_word_count_with_multiple_delimiters_between_words_returns_correct_count);
}
