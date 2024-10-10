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

int	main(void)
{
//	MU_RUN_SUITE(ft_isalpha_test_suite);
//	MU_RUN_SUITE(ft_isdigit_test_suite);
//	MU_RUN_SUITE(ft_isalnum_test_suite);
//	MU_RUN_SUITE(ft_isascii_test_suite);
//	MU_RUN_SUITE(ft_strlen_test_suite);
//	MU_RUN_SUITE(ft_toupper_test_suite);
//	MU_RUN_SUITE(ft_tolower_test_suite);
	MU_RUN_SUITE(ft_memset_test_suite);

	MU_REPORT();
	return MU_EXIT_CODE;
}
