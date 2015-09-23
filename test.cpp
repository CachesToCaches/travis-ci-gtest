#include <gtest/gtest.h>

TEST(foo,bar) {
  ASSERT_TRUE(true);
}

TEST(foo,fail) {
  ASSERT_TRUE(false);
}
