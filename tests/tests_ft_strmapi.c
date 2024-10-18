#include "minunit.h"
#include "../src/ft_strmapi.c"

char	ft_toupper_adapted(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

MU_TEST(test_strmapi_pass_hello_returns_HELLO)
{
	// ARRANGE
	char	*s = "hello";
	char	*expected_result = "HELLO";

	// ACT
	char	*actual_result = ft_strmapi(s, ft_toupper_adapted);

	// ASSERT
	mu_assert_string_eq(expected_result, actual_result);

	// FREE MEMORY
	free(actual_result);
}

MU_TEST(test_strmapi_pass_Hello_World_returns_HELLO_WORLD)
{
	// ARRANGE
	char	*s = "Hello, World!";
	char	*expected_result = "HELLO, WORLD!";

	// ACT
	char	*actual_result = ft_strmapi(s, ft_toupper_adapted);

	// ASSERT
	mu_assert_string_eq(expected_result, actual_result);

	// FREE MEMORY
	free(actual_result);
}

MU_TEST_SUITE(ft_strmapi_test_suite)
{
	MU_RUN_TEST(test_strmapi_pass_hello_returns_HELLO);
	MU_RUN_TEST(test_strmapi_pass_Hello_World_returns_HELLO_WORLD);
}
