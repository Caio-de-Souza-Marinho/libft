#include "minunit.h"
#include "../include/libft.h"
#include <fcntl.h>
#include <sys/stat.h>

MU_TEST(test_putendl_fd_entering_string_caio_in_empty_file)
{
	// ARRANGE
	char	s[5] = "caio";
	int	fd = open("test.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	size_t	read_count = strlen(s);
	char	result_buffer[4];
	char	*expected_char = s;
	int	expected_read_size = 4;

	// ACT
	ft_putendl_fd(s, fd);
	close(fd);

	// ASSERT
	fd = open("test.txt", O_RDONLY);
	int	actual_read_size = read(fd, result_buffer, read_count);
	close(fd);
	for (int i = 0; i < 4; i++)
		mu_assert_char_eq(expected_char[i], result_buffer[i]);
	mu_assert_int_eq(expected_read_size, actual_read_size);
	remove("test.txt");
}

MU_TEST_SUITE(ft_putendl_fd_test_suite)
{
	MU_RUN_TEST(test_putendl_fd_entering_string_caio_in_empty_file);
}
