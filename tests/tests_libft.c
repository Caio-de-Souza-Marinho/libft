#include <fcntl.h>
#include "minunit.h"

#include "tests_ft_isalpha.c"
#include "tests_ft_isdigit.c"
#include "tests_ft_isalnum.c"
#include "tests_ft_isascii.c"
#include "tests_ft_strlen.c"
#include "tests_ft_toupper.c"
#include "tests_ft_tolower.c"
#include "tests_ft_memset.c"
#include "tests_ft_bzero.c"
#include "tests_ft_memcpy.c"
#include "tests_ft_memmove.c"
#include "tests_ft_strlcpy.c"
#include "tests_ft_strlcat.c"
#include "tests_ft_strchr.c"
#include "tests_ft_strrchr.c"
#include "tests_ft_strncmp.c"
#include "tests_ft_memchr.c"
#include "tests_ft_memcmp.c"
#include "tests_ft_strnstr.c"
#include "tests_ft_atoi.c"
#include "tests_ft_calloc.c"
#include "tests_ft_strdup.c"
#include "tests_ft_substr.c"
#include "tests_ft_strjoin.c"
#include "tests_ft_strtrim.c"
#include "tests_ft_split.c"
#include "tests_ft_itoa.c"
#include "tests_ft_strmapi.c"
#include "tests_ft_striteri.c"
#include "tests_ft_putchar_fd.c"
#include "tests_ft_putstr_fd.c"
#include "tests_ft_putendl_fd.c"
#include "tests_ft_putnbr_fd.c"
#include "tests_ft_lstnew.c"
#include "tests_ft_lstadd_front.c"
#include "tests_ft_lstsize.c"
#include "tests_ft_lstlast.c"
#include "tests_ft_lstadd_back.c"
#include "tests_ft_lstdelone.c"
#include "tests_ft_lstclear.c"
#include "tests_ft_lstiter.c"
#include "tests_ft_lstmap.c"

int	main(void)
{
	MU_RUN_SUITE(ft_isalpha_test_suite);
	MU_RUN_SUITE(ft_isdigit_test_suite);
	MU_RUN_SUITE(ft_isalnum_test_suite);
	MU_RUN_SUITE(ft_isascii_test_suite);
	MU_RUN_SUITE(ft_strlen_test_suite);
	MU_RUN_SUITE(ft_toupper_test_suite);
	MU_RUN_SUITE(ft_tolower_test_suite);
	MU_RUN_SUITE(ft_memset_test_suite);
	MU_RUN_SUITE(ft_bzero_test_suite);
	MU_RUN_SUITE(ft_memcpy_test_suite);
	MU_RUN_SUITE(ft_memmove_test_suite);
	MU_RUN_SUITE(ft_strlcpy_test_suite);
	MU_RUN_SUITE(ft_strlcat_test_suite);
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
	MU_RUN_SUITE(ft_lstnew_test_suite);
	MU_RUN_SUITE(ft_lstadd_front_test_suite);
	MU_RUN_SUITE(ft_lstsize_test_suite);
	MU_RUN_SUITE(ft_lstlast_test_suite);
	MU_RUN_SUITE(ft_lstadd_back_test_suite);
	MU_RUN_SUITE(ft_lstdelone_test_suite);
	MU_RUN_SUITE(ft_lstclear_test_suite);
	MU_RUN_SUITE(ft_lstiter_test_suite);
	MU_RUN_SUITE(ft_lstmap_test_suite);

	MU_REPORT();
	return MU_EXIT_CODE;
}
