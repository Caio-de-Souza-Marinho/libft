#include "include/libft.h"
#include <stdio.h>
#include <fcntl.h>   // For file descriptor functions (open)
#include <unistd.h>  // For close()

// Functions for testing ft_strmapi, ft_lstiter, and ft_lstmap
char ft_strmapi_func(unsigned int i, char c) {
	return c + i;
}

void ft_lstiter_func(void *content) {
	printf("Node: %s\n", (char *)content);
}

void *ft_lstmap_func(void *content) {
	return ft_strdup((char *)content);
}

int main(void)
{
	// Character check functions
	printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
	printf("ft_isdigit('5'): %d\n", ft_isdigit('5'));
	printf("ft_isalnum('A'): %d\n", ft_isalnum('A'));
	printf("ft_isascii(127): %d\n", ft_isascii(127));
	printf("ft_isprint(32): %d\n", ft_isprint(32));

	// String manipulation functions
	const char *str = "Hello, libft!";
	printf("ft_strlen('%s'): %lu\n", str, ft_strlen(str));
	printf("ft_toupper('a'): %c\n", ft_toupper('a'));
	printf("ft_tolower('A'): %c\n", ft_tolower('A'));

	// Memory manipulation functions
	char memory[20];
	ft_memset(memory, 'A', 10);
	memory[10] = '\0';
	printf("ft_memset: %s\n", memory);

	ft_bzero(memory, 10);
	printf("ft_bzero: %s\n", memory);

	char src[10] = "123456789";
	ft_memcpy(memory, src, 5);
	memory[5] = '\0';
	printf("ft_memcpy: %s\n", memory);

	ft_memmove(memory + 2, memory, 5);
	printf("ft_memmove: %s\n", memory);

	// String functions
	char dest[20] = "Hello ";
	ft_strlcpy(dest, "world", sizeof(dest));
	printf("ft_strlcpy: %s\n", dest);

	ft_strlcat(dest, "!!!", sizeof(dest));
	printf("ft_strlcat: %s\n", dest);

	printf("ft_strchr: %s\n", ft_strchr("Libft", 'f'));
	printf("ft_strrchr: %s\n", ft_strrchr("Libftft", 'f'));

	printf("ft_strncmp('abc', 'abd', 3): %d\n", ft_strncmp("abc", "abd", 3));
	printf("ft_memchr('abcdef', 'c', 6): %s\n", (char *)ft_memchr("abcdef", 'c', 6));
	printf("ft_memcmp('abc', 'abc', 3): %d\n", ft_memcmp("abc", "abc", 3));
	printf("ft_strnstr('foo bar baz', 'bar', 11): %s\n", ft_strnstr("foo bar baz", "bar", 11));
	printf("ft_atoi('  -123'): %d\n", ft_atoi("  -123"));

	// Memory allocation functions
	int *int_arr = ft_calloc(5, sizeof(int));
	if (int_arr)
	{
		for (int i = 0; i < 5; i++)
			printf("ft_calloc[%d]: %d\n", i, int_arr[i]);
		free(int_arr);
	}

	// Duplicating and trimming strings
	char *dup_str = ft_strdup("Duplicate me");
	if (dup_str)
	{
		printf("ft_strdup: %s\n", dup_str);
		free(dup_str);
	}

	char *trimmed_str = ft_strtrim("   ---Hello---   ", " -");
	if (trimmed_str)
	{
		printf("ft_strtrim: '%s'\n", trimmed_str);
		free(trimmed_str);
	}

	// String modification functions
	char *substr = ft_substr("Libft", 1, 3);
	if (substr)
	{
		printf("ft_substr: %s\n", substr);
		free(substr);
	}

	char *joined_str = ft_strjoin("Hello, ", "libft!");
	if (joined_str)
	{
		printf("ft_strjoin: %s\n", joined_str);
		free(joined_str);
	}

	char **split_res = ft_split("Hello world split test", ' ');
	if (split_res)
	{
		for (int i = 0; split_res[i]; i++)
		{
			printf("ft_split[%d]: %s\n", i, split_res[i]);
			free(split_res[i]);
		}
		free(split_res);
	}

	// Integer to ASCII conversion
	char *itoa_res = ft_itoa(-123);
	if (itoa_res)
	{
		printf("ft_itoa(-123): %s\n", itoa_res);
		free(itoa_res);
	}

	// Mapping and iterating functions
	char *strmapi_res = ft_strmapi("abc", ft_strmapi_func);
	if (strmapi_res)
	{
		printf("ft_strmapi: %s\n", strmapi_res);
		free(strmapi_res);
	}

	// Output functions to file descriptor
	int fd = open("test_output.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (fd != -1)
	{
		ft_putstr_fd("Testing ft_putstr_fd\n", fd);
		ft_putendl_fd("This is ft_putendl_fd", fd);
		ft_putchar_fd('A', fd);
		ft_putnbr_fd(-12345, fd);
		close(fd);
		printf("Output written to test_output.txt\n");
		remove("test_output.txt");  // Clean up the test output file
	}

	// Linked list functions
	t_list *list = ft_lstnew(ft_strdup("First node"));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("New first node")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Last node")));
	printf("First node: %s\n", (char *)list->content);
	printf("List size: %d\n", ft_lstsize(list));

	t_list *last = ft_lstlast(list);
	if (last)
		printf("Last node: %s\n", (char *)last->content);

	ft_lstiter(list, ft_lstiter_func);

	t_list *mapped = ft_lstmap(list, ft_lstmap_func, free);
	if (mapped)
	{
		ft_lstiter(mapped, ft_lstiter_func);
		ft_lstclear(&mapped, free);
	}

	ft_lstclear(&list, free);

	// get_next_line tests
	int	fd1 = open("tests/test_files/test1.txt", O_RDONLY);
	int	fd2 = open("tests/test_files/test2.txt", O_RDONLY);
	int	fd3 = open("tests/test_files/test3.txt", O_RDONLY);
	int	fd1i = 1;
	int	fd2i = 1;
	int	fd3i = 1;

	if (fd1 == -1 || fd2 == -1 || fd3 == -1)
	{
		perror("Error opening files");
		return (1);
	}

	char	*line1;
	char	*line2;
	char	*line3;
	int	finished1 = 0, finished2 = 0, finished3 = 0;

	while (!finished1 || !finished2 || !finished3)
	{
		if (!finished1 && (line1 = get_next_line(fd1)))
		{
			printf("File 1, Line %d: %s", fd1i++, line1);
			free(line1);
		}
		else finished1 = 1;

		if (!finished2 && (line2 = get_next_line(fd2)))
		{
			printf("File 2, Line %d: %s", fd2i++, line2);
			free(line2);
		}
		else finished2 = 1;

		if (!finished3 && (line3 = get_next_line(fd3)))
		{
			printf("File 3, Line %d: %s", fd3i++, line3);
			free(line3);
		}
		else finished3 = 1;
	}
	close(fd1);
	close(fd2);
	close(fd3);

	int	num1 = 42;
	int	num2 = -42;
	ft_printf("[%50d]\n", num1);
	printf("[%50d]\n", num1);

	ft_printf("[%50d]\n", num2);
	printf("[%50d]\n", num2);

	char *str_test_atoibase = "0xFFFFFF";
	int res = ft_atoi_base(str_test_atoibase, 16);
	printf("ft_atoi_base: %d\n", res);
	return (0);
}
