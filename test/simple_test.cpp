#include <gtest/gtest.h>

TEST(SimpleTest, IntSum) {
    ASSERT_EQ(4, 2 + 2);
}

TEST(SimpleTest, StringCmp) {
    std::string s1 = "Hello";
    ASSERT_EQ(s1, "Hello");
}

TEST(SimpleTest, CStringCmp) {
    std::string s1 = "Hello";
    ASSERT_STREQ(s1.c_str(), "Hello");
}
