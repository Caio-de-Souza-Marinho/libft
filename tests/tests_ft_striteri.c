#include "minunit.h"
#include "../src/ft_striteri.c"

void	test_function(unsigned int i, char *c)
{
	c[i]++;
}

MU_TEST(test_striteri_pass_a_returns_b)
{
	// ARRANGE
	char	s[] = "a";
	char	expected_result[] = "b";

	// ACT
	ft_striteri(s, test_function);

	// ASSERT
	mu_assert_string_eq(expected_result, s);
}

MU_TEST_SUITE(ft_striteri_test_suite)
{
	MU_RUN_TEST(test_striteri_pass_a_returns_b);
}
