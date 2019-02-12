#include <gtest/gtest.h>
#include "../inc/removeExclamationMarks.hpp"

struct removeExlamationMarksTest : public ::testing::Test {
  RemoveExclamationMarks removeExlamationMarksGtest;
};

TEST_F(removeExlamationMarksTest, getResultFromRemoveExlamationMarksProcedure) {
  std::string result =
      removeExlamationMarksGtest.removeExlamationMarksProcedure(
          "Hel!! o !!str");
  ASSERT_STREQ("", result.c_str());
}
