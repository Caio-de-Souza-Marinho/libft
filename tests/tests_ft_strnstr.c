#include "minunit.h"
#include "../include/libft.h"

MU_TEST(test_strnstr_find_io_in_string_caio_return_pointer_to_io)
{
	// ARRANGE
	char	big[] = "caio";
	char	little[] = "io";
	size_t	len = 4;
	char	*expected_result = &big[2]; 

	// ACT
	char	*actual_result = ft_strnstr(big, little, len);

	// ASSERT
	mu_assert(expected_result == actual_result, "expected_result should point to the address of the char i in big");
}

MU_TEST(test_strnstr_find_za_in_string_caio_should_return_null)
{
	// ARRANGE
	char	big[] = "caio";
	char	little[] = "za";
	size_t	len = 2;
	char	*expected_result = NULL; 

	// ACT
	char	*actual_result = ft_strnstr(big, little, len);

	// ASSERT
	mu_assert(expected_result == actual_result, "expected_result should be NULL");
}

MU_TEST(test_strnstr_if_little_is_empty_return_big)
{
	// ARRANGE
	char	big[] = "caio";
	char	little[] = "";
	size_t	len = 4;
	char	*expected_result = big;

	// ACT
	char	*actual_result = ft_strnstr(big, little, len);

	// ASSERT
	mu_assert(expected_result == actual_result, "expected_result should be big");
}

MU_TEST_SUITE(ft_strnstr_test_suite)
{
	MU_RUN_TEST(test_strnstr_find_io_in_string_caio_return_pointer_to_io);
	MU_RUN_TEST(test_strnstr_find_za_in_string_caio_should_return_null);
	MU_RUN_TEST(test_strnstr_if_little_is_empty_return_big);
}
