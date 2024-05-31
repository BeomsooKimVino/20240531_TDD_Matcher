#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../20240531_TDD_Matcher/matcher.cpp"


TEST(TestCaseName, TestName) {
  EXPECT_THAT(1, testing::Eq(1));
}