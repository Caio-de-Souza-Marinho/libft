#include "minunit.h"
#include "../include/libft.h"

MU_TEST(test_strjoin3_concat_caio_and_oiac_should_return_caiooiac)
{
	// ARRANGE
	char	s1[] = "caio";
	char	s2[] = "=";
	char	s3[] = "oiac";
	char	expected_result[] = "caio=oiac";

	// ACT
	char	*actual_result = ft_strjoin3(s1, s2, s3);

	// ASSERT
	mu_assert_string_eq(expected_result, actual_result);	
	free(actual_result);
}

MU_TEST(test_strjoin3_concat_caio_and_empty_string_should_return_caio)
{
	// ARRANGE
	char	s1[] = "caio";
	char	s2[] = "";
	char	s3[] = "";
	char	expected_result[] = "caio";

	// ACT
	char	*actual_result = ft_strjoin3(s1, s2, s3);

	// ASSERT
	mu_assert_string_eq(expected_result, actual_result);	
	free(actual_result);
}

MU_TEST(test_strjoin3_concat_empty_string_and_caio_should_return_caio)
{
	// ARRANGE
	char	s1[] = "";
	char	s2[] = "caio";
	char	s3[] = " caio";
	char	expected_result[] = "caio caio";

	// ACT
	char	*actual_result = ft_strjoin3(s1, s2, s3);

	// ASSERT
	mu_assert_string_eq(expected_result, actual_result);	
	free(actual_result);
}

MU_TEST_SUITE(ft_strjoin3_test_suite)
{
	MU_RUN_TEST(test_strjoin3_concat_caio_and_oiac_should_return_caiooiac);
	MU_RUN_TEST(test_strjoin3_concat_caio_and_empty_string_should_return_caio);
	MU_RUN_TEST(test_strjoin3_concat_empty_string_and_caio_should_return_caio);
}
