#include "minunit.h"
#include "../src/ft_strrchr.c"

MU_TEST(test_strrchr_look_up_non_existing_char_in_string_should_return_NULL)
{
	// ARRANGE
	char	string[] = "rock eh ruim";
	int	character = 'z';
	char	*expected_result = NULL;

	// ACT
	char	*actual_result = ft_strrchr(string, character);

	// ASSERT
	mu_check(expected_result == actual_result);
}

MU_TEST(test_strrchr_look_up_existing_char_in_string_should_return_its_address)
{
	// ARRANGE
	char	string[] = "banana";
	int	character = 'n';
	char	*expected_result = &string[4];

	// ACT
	char	*actual_result = ft_strrchr(string, character);

	// ASSERT
	mu_assert(expected_result == actual_result, "expected_result content is different from actual_result");
}

MU_TEST(test_strrchr_look_up_null_char_in_string_should_null_terminator_address)
{
	// ARRANGE
	char	string[] = "banana";
	int	character = '\0';
	char	*expected_result = &string[6];

	// ACT
	char	*actual_result = ft_strrchr(string, character);

	// ASSERT
	mu_assert(expected_result == actual_result, "expected_result point to the null terminator");
}

MU_TEST(test_strrchr_look_up_char_in_empty_string_should_return_null)
{
	// ARRANGE
	char	string[] = "";
	int	character = 'g';
	char	*expected_result = NULL;

	// ACT
	char	*actual_result = ft_strrchr(string, character);

	// ASSERT
	mu_assert(expected_result == actual_result, "expected_result should be NULL");
}

MU_TEST_SUITE(ft_strrchr_test_suite)
{
	MU_RUN_TEST(test_strrchr_look_up_non_existing_char_in_string_should_return_NULL);
	MU_RUN_TEST(test_strrchr_look_up_existing_char_in_string_should_return_its_address);
	MU_RUN_TEST(test_strrchr_look_up_null_char_in_string_should_null_terminator_address);
	MU_RUN_TEST(test_strrchr_look_up_char_in_empty_string_should_return_null);
}
