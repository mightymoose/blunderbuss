#include "gtest/gtest.h"
#include "../lib/greeting.h"

TEST(greeting, correct_greeting) {
    ASSERT_STREQ("Hello World!",  greeting);
}
