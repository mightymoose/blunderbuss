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

TEST(square, max_matric) {
    ASSERT_EQ(0, maxMetric(SquareA1, SquareA1));
    ASSERT_EQ(0, maxMetric(SquareH8, SquareH8));

    ASSERT_EQ(1, maxMetric(SquareA1, SquareA2));
    ASSERT_EQ(1, maxMetric(SquareA1, SquareB1));

    ASSERT_EQ(1, maxMetric(SquareA1, SquareB2));
    ASSERT_EQ(2, maxMetric(SquareA1, SquareC3));
    ASSERT_EQ(3, maxMetric(SquareA1, SquareD4));
    ASSERT_EQ(4, maxMetric(SquareA1, SquareE5));
    ASSERT_EQ(5, maxMetric(SquareA1, SquareF6));
    ASSERT_EQ(6, maxMetric(SquareA1, SquareG7));
    ASSERT_EQ(7, maxMetric(SquareA1, SquareH8));
}

TEST(square, rank) {
    ASSERT_EQ(Rank1, rank(SquareA1));
    ASSERT_EQ(Rank1, rank(SquareB1));
    ASSERT_EQ(Rank2, rank(SquareB2));
    ASSERT_EQ(Rank3, rank(SquareC3));
    ASSERT_EQ(Rank4, rank(SquareD4));
    ASSERT_EQ(Rank5, rank(SquareE5));
    ASSERT_EQ(Rank6, rank(SquareF6));
    ASSERT_EQ(Rank7, rank(SquareG7));
    ASSERT_EQ(Rank8, rank(SquareH8));
}

TEST(square, file) {
    ASSERT_EQ(FileA, file(SquareA1));
    ASSERT_EQ(FileB, file(SquareB1));
    ASSERT_EQ(FileB, file(SquareB2));
    ASSERT_EQ(FileC, file(SquareC3));
    ASSERT_EQ(FileD, file(SquareD4));
    ASSERT_EQ(FileE, file(SquareE5));
    ASSERT_EQ(FileF, file(SquareF6));
    ASSERT_EQ(FileG, file(SquareG7));
    ASSERT_EQ(FileH, file(SquareH8));
}