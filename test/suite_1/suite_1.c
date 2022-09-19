#include <unity.h>
#include <module_a.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_AverageThreeBytes(void)
{
    TEST_ASSERT_EQUAL_HEX8(40, AverageThreeBytes(30, 40, 50));
    TEST_ASSERT_EQUAL_HEX8(40, AverageThreeBytes(10, 70, 40));
    TEST_ASSERT_EQUAL_HEX8(33, AverageThreeBytes(33, 33, 33));
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_AverageThreeBytes);

    return UNITY_END();
}
