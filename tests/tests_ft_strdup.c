#include "minunit.h"
#include "../include/libft.h"

MU_TEST(test_strdup_duplicate_string_one_char)
{
	// ARRANGE
	char	s[] = "A";
	char	expected_result[] = "A";

	// ACT
	char	*actual_result = ft_strdup(s);

	// ASSERT
	mu_assert(actual_result != s, "the returned value should not point to the same memory address passe by parameter");
	mu_assert_string_eq(expected_result, actual_result);
	free(actual_result);
}

MU_TEST(test_strdup_duplicate_string_100_chars)
{
	// ARRANGE
	char	s[] = "Praesent in mauris eu tortor porttitor accumsan. Mauris suscipit, ligula sit amet pharetra semper, nibh ante cursus purus, vel sagittis velit mauris vel metus. Aenean fermentum risus id tortor. Integer imperdiet lectus quis justo. Integer tempor. Vivamus ac urna vel leo pretium faucibus. Mauris elementum mauris vitae tortor. In dapibus augue non sapien. Aliquam ante. Curabitur bibendum justo non orci. Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Morbi gravida libero nec velit. Morbi scelerisque luctus velit. Etiam dui sem, fermentum vitae, sagittis id, malesuada in, quam. Proin mattis lacinia justo. Vestibulum facilisis auctor urna. Aliquam in lorem sit amet";
	char	expected_result[] = "Praesent in mauris eu tortor porttitor accumsan. Mauris suscipit, ligula sit amet pharetra semper, nibh ante cursus purus, vel sagittis velit mauris vel metus. Aenean fermentum risus id tortor. Integer imperdiet lectus quis justo. Integer tempor. Vivamus ac urna vel leo pretium faucibus. Mauris elementum mauris vitae tortor. In dapibus augue non sapien. Aliquam ante. Curabitur bibendum justo non orci. Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Morbi gravida libero nec velit. Morbi scelerisque luctus velit. Etiam dui sem, fermentum vitae, sagittis id, malesuada in, quam. Proin mattis lacinia justo. Vestibulum facilisis auctor urna. Aliquam in lorem sit amet";

	// ACT
	char	*actual_result = ft_strdup(s);

	// ASSERT
	mu_assert(actual_result != s, "the returned value should not point to the same memory address passe by parameter");
	mu_assert_string_eq(expected_result, actual_result);
	free(actual_result);
}

MU_TEST(test_strdup_duplicate_empty_string)
{
	// ARRANGE
	char	s[] = "";
	char	expected_result[] = "";

	// ACT
	char	*actual_result = ft_strdup(s);

	// ASSERT
	mu_assert(actual_result != s, "the returned value should not point to the same memory address passe by parameter");
	mu_assert_string_eq(expected_result, actual_result);
	free(actual_result);
}

MU_TEST_SUITE(ft_strdup_test_suite)
{
	MU_RUN_TEST(test_strdup_duplicate_string_one_char);
	MU_RUN_TEST(test_strdup_duplicate_string_100_chars);
	MU_RUN_TEST(test_strdup_duplicate_empty_string);
}
