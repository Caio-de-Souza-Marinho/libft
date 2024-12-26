#include "minunit.h"
#include "../include/libft.h"

typedef struct {
	int id;
	char name[20];
} person;

MU_TEST(test_memchr_pass_string_try_to_find_char_should_found_W)
{
	// ARRANGE
	char	str[] = "Hello, World!";
	char	char_to_find = 'W';
	size_t	size = sizeof(str);
	void	*expected_result = memchr(str, char_to_find, size);

	// ACT
	void	*actual_result = ft_memchr(str, char_to_find, size);
	
	// ASSERT
	mu_assert(expected_result == actual_result, "test with chars: 'W' should be found.");
}

MU_TEST(test_memchr_pass_int_array_try_to_find_int_should_found_30)
{
	// ARRANGE
	int	arr[] = {10, 20, 30, 40, 50};
	int	int_to_find = 30;
	size_t	size = sizeof(arr);
	void	*expected_result = memchr(arr, int_to_find, size);

	// ACT
	void	*actual_result = ft_memchr(arr, int_to_find, size);
	
	// ASSERT
	mu_assert(expected_result == actual_result, "test with chars: 30 should be found.");
}

MU_TEST(test_memchr_struct_pass_array_of_structs_should_found_id_2)
{
	// ARRANGE
	person people[] = {
		{1, "Alice"},
		{2, "Bob"},
		{3, "Charlie"}
	};
	int	id_to_find = 2;
	size_t	size = sizeof(people);
	void	*expected_result = memchr(people, id_to_find, size);

	// ACT
	void	*actual_result = ft_memchr(people, id_to_find, size);
	
	// ASSERT
	mu_assert(expected_result == actual_result, "test with structs: id 2 should be found.");
}

MU_TEST_SUITE(ft_memchr_test_suite)
{
	MU_RUN_TEST(test_memchr_pass_string_try_to_find_char_should_found_W);
	MU_RUN_TEST(test_memchr_pass_int_array_try_to_find_int_should_found_30);
	MU_RUN_TEST(test_memchr_struct_pass_array_of_structs_should_found_id_2);
}
