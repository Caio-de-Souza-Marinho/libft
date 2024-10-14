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

int	main(void)
{
//	MU_RUN_SUITE(ft_isalpha_test_suite);
//	MU_RUN_SUITE(ft_isdigit_test_suite);
//	MU_RUN_SUITE(ft_isalnum_test_suite);
//	MU_RUN_SUITE(ft_isascii_test_suite);
//	MU_RUN_SUITE(ft_strlen_test_suite);
//	MU_RUN_SUITE(ft_toupper_test_suite);
//	MU_RUN_SUITE(ft_tolower_test_suite);
//	MU_RUN_SUITE(ft_memset_test_suite);
//	MU_RUN_SUITE(ft_bzero_test_suite);
//	MU_RUN_SUITE(ft_memcpy_test_suite);
//	MU_RUN_SUITE(ft_memmove_test_suite);
//	MU_RUN_SUITE(ft_strlcpy_test_suite);
//	MU_RUN_SUITE(ft_strlcat_test_suite);
//	MU_RUN_SUITE(ft_strchr_test_suite);
//	MU_RUN_SUITE(ft_strrchr_test_suite);
//	MU_RUN_SUITE(ft_strncmp_test_suite);
	MU_RUN_SUITE(ft_memchr_test_suite);

	MU_REPORT();
	return MU_EXIT_CODE;
}
