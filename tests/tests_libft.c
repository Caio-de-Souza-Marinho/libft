#include <fcntl.h>
#include "minunit.h"
#include "includes.h"

int	main(void)
{
	// libft
	MU_RUN_SUITE(ft_isalpha_test_suite);
	MU_RUN_SUITE(ft_isdigit_test_suite);
	MU_RUN_SUITE(ft_isalnum_test_suite);
	MU_RUN_SUITE(ft_isascii_test_suite);
	MU_RUN_SUITE(ft_isprint_test_suite);
	MU_RUN_SUITE(ft_strlen_test_suite);
	MU_RUN_SUITE(ft_memset_test_suite);
	MU_RUN_SUITE(ft_bzero_test_suite);
	MU_RUN_SUITE(ft_memcpy_test_suite);
	MU_RUN_SUITE(ft_memmove_test_suite);
	MU_RUN_SUITE(ft_strlcpy_test_suite);
	MU_RUN_SUITE(ft_strlcat_test_suite);
	MU_RUN_SUITE(ft_toupper_test_suite);
	MU_RUN_SUITE(ft_tolower_test_suite);
	MU_RUN_SUITE(ft_strchr_test_suite);
	MU_RUN_SUITE(ft_strrchr_test_suite);
	MU_RUN_SUITE(ft_strncmp_test_suite);
	MU_RUN_SUITE(ft_memchr_test_suite);
	MU_RUN_SUITE(ft_memcmp_test_suite);
	MU_RUN_SUITE(ft_strnstr_test_suite);
	MU_RUN_SUITE(ft_atoi_test_suite);
	MU_RUN_SUITE(ft_calloc_test_suite);
	MU_RUN_SUITE(ft_strdup_test_suite);
	MU_RUN_SUITE(ft_substr_test_suite);
	MU_RUN_SUITE(ft_strjoin_test_suite);
	MU_RUN_SUITE(ft_strtrim_test_suite);
	MU_RUN_SUITE(ft_split_test_suite);
	MU_RUN_SUITE(ft_itoa_test_suite);
	MU_RUN_SUITE(ft_strmapi_test_suite);
	MU_RUN_SUITE(ft_striteri_test_suite);
	MU_RUN_SUITE(ft_putchar_fd_test_suite);
	MU_RUN_SUITE(ft_putstr_fd_test_suite);
	MU_RUN_SUITE(ft_putendl_fd_test_suite);
	MU_RUN_SUITE(ft_putnbr_fd_test_suite);
	// bonus
	MU_RUN_SUITE(ft_lstnew_test_suite);
	MU_RUN_SUITE(ft_lstadd_front_test_suite);
	MU_RUN_SUITE(ft_lstsize_test_suite);
	MU_RUN_SUITE(ft_lstlast_test_suite);
	MU_RUN_SUITE(ft_lstadd_back_test_suite);
	MU_RUN_SUITE(ft_lstdelone_test_suite);
	MU_RUN_SUITE(ft_lstclear_test_suite);
	MU_RUN_SUITE(ft_lstiter_test_suite);
	MU_RUN_SUITE(ft_lstmap_test_suite);
	// gnl
	MU_RUN_SUITE(get_next_line_test_suite);
	// printf
	MU_RUN_SUITE(ft_printf_test_suite);
	MU_RUN_SUITE(ft_printf_c_and_percent_sign_test_suite);
	MU_RUN_SUITE(ft_printf_s_test_suite);
	MU_RUN_SUITE(ft_printf_p_test_suite);
	MU_RUN_SUITE(ft_printf_d_and_i_test_suite);
	MU_RUN_SUITE(ft_printf_u_test_suite);
	MU_RUN_SUITE(ft_printf_x_and_X_test_suite);
	// additional
	MU_RUN_SUITE(ft_isspace_test_suite);
	MU_RUN_SUITE(ft_atol_test_suite);
	MU_RUN_SUITE(ft_strjoin3_test_suite);
	MU_RUN_SUITE(ft_atoi_base_test_suite);
	MU_RUN_SUITE(ft_word_count_test_suite);

	MU_REPORT();
	return MU_EXIT_CODE;
}
