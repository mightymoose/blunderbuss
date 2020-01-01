#include "gtest/gtest.h"
#include "../lib/bitboards.h"
#include "../lib/rank.h"
#include "../lib/file.h"
#include "../lib/square.h"

TEST(pretty_print, empty_bitboard) {
    const std::string result = prettyPrint(0);

    const std::string expectedResult =
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 8 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 7 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 6 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 5 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 4 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 3 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 2 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 1 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string("     A   B   C   D   E   F   G   H\n");
    ASSERT_EQ(expectedResult, result);
}

TEST(pretty_print, populated_bitboard) {
    const  BitBoard bitBoard =
            squareBitBoard[SquareA1] |
            squareBitBoard[SquareB3] |
            squareBitBoard[SquareD4] |
            squareBitBoard[SquareE5] |
            squareBitBoard[SquareH8];
    const std::string result = prettyPrint(bitBoard);

    const std::string expectedResult =
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 8 |   |   |   |   |   |   |   | X |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 7 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 6 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 5 |   |   |   |   | X |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 4 |   |   |   | X |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 3 |   | X |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 2 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 1 | X |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string("     A   B   C   D   E   F   G   H\n");
    ASSERT_EQ(expectedResult, result);
}

TEST(bitboard, bitwise_and_with_square) {
    BitBoard bitBoard = 1ULL << SquareA1;
    ASSERT_TRUE(bitBoard & makeSquare(FileA, Rank1));
    ASSERT_FALSE(bitBoard & makeSquare(FileA, Rank2));
}

