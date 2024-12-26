#include "minunit.h"
#include "../include/libft.h"

MU_TEST(test_strjoin_concat_caio_and_oiac_should_return_caiooiac)
{
	// ARRANGE
	char	s1[] = "caio";
	char	s2[] = "oiac";
	char	expected_result[] = "caiooiac";

	// ACT
	char	*actual_result = ft_strjoin(s1, s2);

	// ASSERT
	mu_assert_string_eq(expected_result, actual_result);	
	free(actual_result);
}

MU_TEST(test_strjoin_concat_caio_and_empty_string_should_return_caio)
{
	// ARRANGE
	char	s1[] = "caio";
	char	s2[] = "";
	char	expected_result[] = "caio";

	// ACT
	char	*actual_result = ft_strjoin(s1, s2);

	// ASSERT
	mu_assert_string_eq(expected_result, actual_result);	
	free(actual_result);
}

MU_TEST(test_strjoin_concat_empty_string_and_caio_should_return_caio)
{
	// ARRANGE
	char	s1[] = "";
	char	s2[] = "caio";
	char	expected_result[] = "caio";

	// ACT
	char	*actual_result = ft_strjoin(s1, s2);

	// ASSERT
	mu_assert_string_eq(expected_result, actual_result);	
	free(actual_result);
}

MU_TEST_SUITE(ft_strjoin_test_suite)
{
	MU_RUN_TEST(test_strjoin_concat_caio_and_oiac_should_return_caiooiac);
	MU_RUN_TEST(test_strjoin_concat_caio_and_empty_string_should_return_caio);
	MU_RUN_TEST(test_strjoin_concat_empty_string_and_caio_should_return_caio);
}
