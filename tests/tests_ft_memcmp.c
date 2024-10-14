#include "minunit.h"
#include "../src/ft_memcmp.c"

MU_TEST(test_memcmp_comparing_caio_and_caio_returns_0)
{
	// ARRANGE
	char	s1[] = "caio";
	char	s2[] = "caio";
	size_t	n = 4;
	int	expected_result = 0;

	// ACT
	int	actual_result = ft_memcmp(s1, s2, n);	

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);	
}

MU_TEST(test_memcmp_comparing_caio_and_caip_returns_minus_1)
{
	// ARRANGE
	char	s1[] = "caio";
	char	s2[] = "caip";
	size_t	n = 4;
	int	expected_result = -1;

	// ACT
	int	actual_result = ft_memcmp(s1, s2, n);	

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);	
}

MU_TEST(test_memcmp_comparing_caip_and_caio_returns_1)
{
	// ARRANGE
	char	s1[] = "caip";
	char	s2[] = "caio";
	size_t	n = 4;
	int	expected_result = 1;

	// ACT
	int	actual_result = ft_memcmp(s1, s2, n);	

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);	
}

MU_TEST(test_memcmp_comparing_elements_int_array)
{
	// ARRANGE
	char	s1[] = "caip";
	char	s2[] = "caio";
	size_t	n = 4;
	int	expected_result = 1;

	// ACT
	int	actual_result = ft_memcmp(s1, s2, n);	

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);	
}

MU_TEST(test_memcmp_comparing_equal_int_arrays_should_returns_0)
{
	// ARRANGE
	int	s1[] = {10, 20, 30, 40, 50};
	int	s2[] = {10, 20, 30, 40, 50};
	size_t	n = sizeof(s1);
	int	expected_result = 0;	

	// ACT
	int	actual_result = ft_memcmp(s1, s2, n);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);	
}

MU_TEST_SUITE(ft_memcmp_test_suite)
{
	MU_RUN_TEST(test_memcmp_comparing_caio_and_caio_returns_0);
	MU_RUN_TEST(test_memcmp_comparing_caio_and_caip_returns_minus_1);
	MU_RUN_TEST(test_memcmp_comparing_caip_and_caio_returns_1);
	MU_RUN_TEST(test_memcmp_comparing_equal_int_arrays_should_returns_0);
}
