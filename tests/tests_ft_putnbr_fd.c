#include "minunit.h"
#include "../include/libft.h"
#include <fcntl.h>
#include <sys/stat.h>

MU_TEST(test_putnbr_fd_entering_12345_in_empty_file)
{
	// ARRANGE
	int	nbr = 12345;
	int	fd = open("test.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	size_t	read_count = 5;
	char	result_buffer[5];
	char	*expected_char = "12345";
	int	expected_read_size = 5;

	// ACT
	ft_putnbr_fd(nbr, fd);
	close(fd);

	// ASSERT
	fd = open("test.txt", O_RDONLY);
	int	actual_read_size = read(fd, result_buffer, read_count);
	close(fd);
	for (int i = 0; i < 5; i++)
		mu_assert_char_eq(expected_char[i], result_buffer[i]);
	mu_assert_int_eq(expected_read_size, actual_read_size);
	remove("test.txt");
}

MU_TEST(test_putnbr_fd_entering_INT_MIN_in_empty_file)
{
	// ARRANGE
	int	nbr = -2147483648;
	int	fd = open("test.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	size_t	read_count = 11;
	char	result_buffer[11];
	char	*expected_char = "-2147483648";
	int	expected_read_size = 11;

	// ACT
	ft_putnbr_fd(nbr, fd);
	close(fd);

	// ASSERT
	fd = open("test.txt", O_RDONLY);
	int	actual_read_size = read(fd, result_buffer, read_count);
	close(fd);
	for (int i = 0; i < 11; i++)
		mu_assert_char_eq(expected_char[i], result_buffer[i]);
	mu_assert_int_eq(expected_read_size, actual_read_size);
	remove("test.txt");
}

MU_TEST_SUITE(ft_putnbr_fd_test_suite)
{
	MU_RUN_TEST(test_putnbr_fd_entering_12345_in_empty_file);
	MU_RUN_TEST(test_putnbr_fd_entering_INT_MIN_in_empty_file);
}
