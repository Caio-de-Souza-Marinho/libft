#include "minunit.h"
#include "../src/ft_memmove.c"

MU_TEST(test_memmove_dst_and_src_copying_5_positions)
{
	// ARRANGE
	char	word[] = "watermelonjuice";
	char	*dest = &word[10]; // juice 
	char	*src = &word[0]; // watermelonjuice
	size_t	size = 5;
	char	expected_word_result[] = "watermelonwater";
	char	*expected_memory_position = dest;

	// ACT
	char	*returned_memory_position = ft_memmove(dest, src, size);
	
	// ASSERT
	mu_assert_string_eq(expected_word_result, word);
	mu_assert(expected_memory_position == returned_memory_position, "memory position should be &dest");
}

MU_TEST(test_memmove_dest_overlaping_src)
{
	// ARRANGE
	char	word[] = "watermelonjuice";
	char	*dest = &word[5]; // melonjuice 
	char	*src = &word[0]; // watermelonjuice
	char	expected_word_result[] = "waterwatermelon";
	char	*expected_memory_position = dest;

	// ACT
	char	*returned_memory_position = ft_memmove(dest, src, 10);
	
	// ASSERT
	mu_assert_string_eq(expected_word_result, word);
	mu_assert(expected_memory_position == returned_memory_position, "memory position should be &dest");
}

MU_TEST(test_memmove_src_overlaping_dest)
{
	// ARRANGE
	char	word[] = "watermelonjuice";
	char	*dest = &word[0]; // watermelonjuice 
	char	*src = &word[5]; // melonjuice 
	char	expected_word_result[] = "melonjuicejuice";
	char	*expected_memory_position = dest;

	// ACT
	char	*returned_memory_position = ft_memmove(dest, src, 10);
	
	// ASSERT
	mu_assert_string_eq(expected_word_result, word);
	mu_assert(expected_memory_position == returned_memory_position, "memory position should be &dest");
}

MU_TEST(test_memmove_int_array_simple_copy)
{
	// ARRANGE
	int	arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int	dest[4];
	int	expected_dest[] = {5, 6, 7, 8};

	// ACT
	ft_memmove(dest, &arr[4], sizeof(int) * 4);

	// ASSERT
	for (int i = 0; i < 4; i++)
		mu_assert_int_eq(expected_dest[i], dest[i]);
}

MU_TEST(test_memmove_int_array_overlap)
{
	// ARRANGE
	int	arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int	expected_arr[] = {1, 2, 3, 4, 1, 2, 3, 4}; // Overlap result

	// ACT
	ft_memmove(&arr[4], &arr[0], sizeof(int) * 4);

	// ASSERT
	for (int i = 0; i < 8; i++)
		mu_assert_int_eq(expected_arr[i], arr[i]);
}

MU_TEST_SUITE(ft_memmove_test_suite)
{
	MU_RUN_TEST(test_memmove_dst_and_src_copying_5_positions);
	MU_RUN_TEST(test_memmove_src_overlaping_dest);
	MU_RUN_TEST(test_memmove_dest_overlaping_src);
	MU_RUN_TEST(test_memmove_int_array_simple_copy);
	MU_RUN_TEST(test_memmove_int_array_overlap);
}
