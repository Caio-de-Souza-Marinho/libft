#include "minunit.h"
#include "../include/libft.h"

MU_TEST(test_atoi_base_convert_hex_0xFFFFFF_to_int)
{
	// ARRANGE
	char *str = "0xFFFFFF";
	int base = 16;
	int expected_result = 16777215;

	// ACT
	int actual_result = ft_atoi_base(str, base);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_atoi_base_convert_hex_0x1A3F_to_int)
{
	// ARRANGE
	char *str = "0x1A3F";
	int base = 16;
	int expected_result = 6719;

	// ACT
	int actual_result = ft_atoi_base(str, base);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_atoi_base_convert_hex_1A3F_to_int)
{
	// ARRANGE
	char *str = "1A3F";
	int base = 16;
	int expected_result = 6719;

	// ACT
	int actual_result = ft_atoi_base(str, base);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_atoi_base_convert_hex_FFFFFF_to_int)
{
	// ARRANGE
	char *str = "FFFFFF";
	int base = 16;
	int expected_result = 16777215;

	// ACT
	int actual_result = ft_atoi_base(str, base);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_atoi_base_convert_zero_to_int)
{
	// ARRANGE
	char *str = "0";
	int base = 16;
	int expected_result = 0;

	// ACT
	int actual_result = ft_atoi_base(str, base);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_atoi_base_invalid_0x_minus_1A)
{
	// ARRANGE
	char *str = "0x-1A";
	int base = 16;
	int expected_result = 0; // Invalid, so expect 0

	// ACT
	int actual_result = ft_atoi_base(str, base);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_atoi_base_convert_negative_1A_to_int)
{
	// ARRANGE
	char *str = "-1A";
	int base = 16;
	int expected_result = -26;

	// ACT
	int actual_result = ft_atoi_base(str, base);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_atoi_base_invalid_123G45_to_int)
{
	// ARRANGE
	char *str = "123G45";
	int base = 16;
	int expected_result = 291; // Stops at '123'

	// ACT
	int actual_result = ft_atoi_base(str, base);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_atoi_base_convert_hex_7F_to_int_with_spaces)
{
	// ARRANGE
	char *str = "   7F";
	int base = 16;
	int expected_result = 127;

	// ACT
	int actual_result = ft_atoi_base(str, base);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_atoi_base_test_suite) 
{
	MU_RUN_TEST(test_atoi_base_convert_hex_0xFFFFFF_to_int);
	MU_RUN_TEST(test_atoi_base_convert_hex_0x1A3F_to_int);
	MU_RUN_TEST(test_atoi_base_convert_hex_1A3F_to_int);
	MU_RUN_TEST(test_atoi_base_convert_hex_FFFFFF_to_int);
	MU_RUN_TEST(test_atoi_base_convert_zero_to_int);
	MU_RUN_TEST(test_atoi_base_invalid_0x_minus_1A);
	MU_RUN_TEST(test_atoi_base_convert_negative_1A_to_int);
	MU_RUN_TEST(test_atoi_base_invalid_123G45_to_int);
	MU_RUN_TEST(test_atoi_base_convert_hex_7F_to_int_with_spaces);
}
