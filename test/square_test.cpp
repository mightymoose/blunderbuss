#include "gtest/gtest.h"
#include "../lib/square.h"
#include "../lib/rank.h"
#include "../lib/file.h"

TEST(square, make_square) {
    ASSERT_EQ(SquareA1,makeSquare(FileA,  Rank1));
    ASSERT_EQ(SquareB2,makeSquare(FileB,  Rank2));
    ASSERT_EQ(SquareC3,makeSquare(FileC,  Rank3));
    ASSERT_EQ(SquareD4,makeSquare(FileD,  Rank4));
    ASSERT_EQ(SquareE5,makeSquare(FileE,  Rank5));
    ASSERT_EQ(SquareF6,makeSquare(FileF,  Rank6));
    ASSERT_EQ(SquareG7,makeSquare(FileG,  Rank7));
    ASSERT_EQ(SquareH8,makeSquare(FileH,  Rank8));
}

TEST(square, square_values) {
    ASSERT_EQ(0, SquareA1);
    ASSERT_EQ(1, SquareB1);
    ASSERT_EQ(2, SquareC1);
    ASSERT_EQ(3, SquareD1);
    ASSERT_EQ(4, SquareE1);
    ASSERT_EQ(5, SquareF1);
    ASSERT_EQ(6, SquareG1);
    ASSERT_EQ(7, SquareH1);

    ASSERT_EQ(0, SquareA1);
    ASSERT_EQ(8, SquareA2);
    ASSERT_EQ(16, SquareA3);
    ASSERT_EQ(24, SquareA4);
    ASSERT_EQ(32, SquareA5);
    ASSERT_EQ(40, SquareA6);
    ASSERT_EQ(48, SquareA7);
    ASSERT_EQ(56, SquareA8);
}

TEST(square, plus_plus) {
    Square square = SquareA1;
    ASSERT_EQ(SquareB1,  ++square);
    ASSERT_EQ(SquareC1,  ++square);
    ASSERT_EQ(SquareD1,  ++square);
    ASSERT_EQ(SquareE1,  ++square);
    ASSERT_EQ(SquareF1,  ++square);
    ASSERT_EQ(SquareG1,  ++square);
    ASSERT_EQ(SquareH1,  ++square);
    ASSERT_EQ(SquareA2,  ++square);
}