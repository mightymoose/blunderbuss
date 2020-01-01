#include "gtest/gtest.h"
#include "../lib/file.h"

TEST(file, file_values) {
    ASSERT_EQ(0, FileA);
    ASSERT_EQ(1, FileB);
    ASSERT_EQ(2, FileC);
    ASSERT_EQ(3, FileD);
    ASSERT_EQ(4, FileE);
    ASSERT_EQ(5, FileF);
    ASSERT_EQ(6, FileG);
    ASSERT_EQ(7, FileH);
}

TEST(file, plus_plus) {
    File file = FileA;

    ASSERT_EQ(FileB, ++file);
    ASSERT_EQ(FileC, ++file);
    ASSERT_EQ(FileD, ++file);
    ASSERT_EQ(FileE, ++file);
    ASSERT_EQ(FileF, ++file);
    ASSERT_EQ(FileG, ++file);
    ASSERT_EQ(FileH, ++file);
}


