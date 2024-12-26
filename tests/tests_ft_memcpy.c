#include "minunit.h"
#include "../include/libft.h"
#include <string.h>

typedef struct
{
	char name[256];
	int age;
} Student;


MU_TEST(test_memcpy_dst_and_src_copying_5_positions)
{
	// ARRANGE
	char	dest[] = "watermelonjuice";
	char	src[] = "apple";
	size_t	size = strlen(src);
	char	expected_dest[] = "applemelonjuice";
	char	*expected_memory_position = dest;
	
	// ACT
	char	*returned_memory_position = ft_memcpy(dest, src, size);
	
	// ASSERT
	mu_assert_string_eq(expected_dest, dest);
	mu_assert(expected_memory_position == returned_memory_position, "memory position should be &dest");
}

MU_TEST(test_memcpy_copying_int_array_3_positions)
{
	// ARRANGE
	int	src_array[3] = {1, 2, 3};
	int	dest_array[3] = {0};
	int	expected_array[3] = {1, 2, 3};
	int	*expected_memory_position = dest_array;

	// ACT
	int *returned_memory_position = ft_memcpy(dest_array, src_array, sizeof(double) * 3);

	// ASSERT
	mu_assert_int_eq(expected_array[0], dest_array[0]);
	mu_assert_int_eq(expected_array[1], dest_array[1]);
	mu_assert_int_eq(expected_array[2], dest_array[2]);
	mu_assert(expected_memory_position == returned_memory_position, "memory position should be &dest_array");
}

MU_TEST(test_memcpy_copying_struct)
{
	// ARRANGE
	Student student1;
	strcpy(student1.name, "Caio");
	student1.age = 20;

	// ACT
	Student student2;
	memcpy(&student2, &student1, sizeof(Student));

	// ASSERT
	mu_assert_string_eq(student1.name, student2.name);
	mu_assert_int_eq(student1.age, student2.age);
}

MU_TEST(test_memcpy_dst_and_src_null_dont_copy_and_returns_dst)
{
	// ARRANGE
	char	*dest = NULL;
	char	*src = NULL;
	size_t	size = 5;
	char	*expected_dest = NULL;
	char	*expected_memory_position = dest;
	
	// ACT
	char	*returned_memory_position = ft_memcpy(dest, src, size);
	
	// ASSERT
	mu_assert_string_eq(expected_dest, dest);
	mu_assert(expected_memory_position == returned_memory_position, "memory position should be &dest");
}

MU_TEST_SUITE(ft_memcpy_test_suite)
{
	MU_RUN_TEST(test_memcpy_dst_and_src_copying_5_positions);
	MU_RUN_TEST(test_memcpy_copying_int_array_3_positions);
	MU_RUN_TEST(test_memcpy_copying_struct);
	MU_RUN_TEST(test_memcpy_dst_and_src_null_dont_copy_and_returns_dst);
}
