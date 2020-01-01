#include "gtest/gtest.h";
#include "../lib/move_generation.h";
#include "../lib/bitboards.h";

TEST(attacks, knight_moves) {
    BitBoard knightMovesFromA1 = generateKnightMoves(SquareA1);
    std::string prettyKnightMovesFromA1 = prettyPrint(knightMovesFromA1);
    std::string expectedKnightMovesFromA1 =
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
            std::string(" 3 |   | X |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 2 |   |   | X |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 1 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string("     A   B   C   D   E   F   G   H\n");

    ASSERT_EQ(prettyKnightMovesFromA1, expectedKnightMovesFromA1);

    BitBoard knightMovesFromD1 = generateKnightMoves(SquareD1);
    std::string prettyKnightMovesFromD1 = prettyPrint(knightMovesFromD1);
    std::string expectedKnightMovesFromD1 =
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
            std::string(" 3 |   |   | X |   | X |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 2 |   | X |   |   |   | X |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 1 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string("     A   B   C   D   E   F   G   H\n");

    ASSERT_EQ(prettyKnightMovesFromD1, expectedKnightMovesFromD1);

    BitBoard knightMovesFromH1 = generateKnightMoves(SquareH1);
    std::string prettyKnightMovesFromH1 = prettyPrint(knightMovesFromH1);
    std::string expectedKnightMovesFromH1 =
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
            std::string(" 3 |   |   |   |   |   |   | X |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 2 |   |   |   |   |   | X |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 1 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string("     A   B   C   D   E   F   G   H\n");

    ASSERT_EQ(prettyKnightMovesFromH1, expectedKnightMovesFromH1);

    BitBoard knightMovesFromA4 = generateKnightMoves(SquareA4);
    std::string prettyKnightMovesFromA4 = prettyPrint(knightMovesFromA4);
    std::string expectedKnightMovesFromA4 =
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 8 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 7 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 6 |   | X |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 5 |   |   | X |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 4 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 3 |   |   | X |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 2 |   | X |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 1 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string("     A   B   C   D   E   F   G   H\n");

    ASSERT_EQ(prettyKnightMovesFromA4, expectedKnightMovesFromA4);

    BitBoard knightMovesFromD4 = generateKnightMoves(SquareD4);
    std::string prettyKnightMovesFromD4 = prettyPrint(knightMovesFromD4);
    std::string expectedKnightMovesFromD4 =
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 8 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 7 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 6 |   |   | X |   | X |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 5 |   | X |   |   |   | X |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 4 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 3 |   | X |   |   |   | X |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 2 |   |   | X |   | X |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 1 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string("     A   B   C   D   E   F   G   H\n");

    ASSERT_EQ(prettyKnightMovesFromD4, expectedKnightMovesFromD4);

    BitBoard knightMovesFromH4 = generateKnightMoves(SquareH4);
    std::string prettyKnightMovesFromH4 = prettyPrint(knightMovesFromH4);
    std::string expectedKnightMovesFromH4 =
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 8 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 7 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 6 |   |   |   |   |   |   | X |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 5 |   |   |   |   |   | X |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 4 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 3 |   |   |   |   |   | X |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 2 |   |   |   |   |   |   | X |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 1 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string("     A   B   C   D   E   F   G   H\n");

    ASSERT_EQ(prettyKnightMovesFromH4, expectedKnightMovesFromH4);

    BitBoard knightMovesFromA8 = generateKnightMoves(SquareA8);
    std::string prettyKnightMovesFromA8 = prettyPrint(knightMovesFromA8);
    std::string expectedKnightMovesFromA8 =
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 8 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 7 |   |   | X |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 6 |   | X |   |   |   |   |   |   |\n") +
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

    ASSERT_EQ(prettyKnightMovesFromA8, expectedKnightMovesFromA8);

    BitBoard knightMovesFromD8 = generateKnightMoves(SquareD8);
    std::string prettyKnightMovesFromD8 = prettyPrint(knightMovesFromD8);
    std::string expectedKnightMovesFromD8 =
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 8 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 7 |   | X |   |   |   | X |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 6 |   |   | X |   | X |   |   |   |\n") +
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

    ASSERT_EQ(prettyKnightMovesFromD8, expectedKnightMovesFromD8);

    BitBoard knightMovesFromH8 = generateKnightMoves(SquareH8);
    std::string prettyKnightMovesFromH8 = prettyPrint(knightMovesFromH8);
    std::string expectedKnightMovesFromH8 =
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 8 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 7 |   |   |   |   |   | X |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 6 |   |   |   |   |   |   | X |   |\n") +
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

    ASSERT_EQ(prettyKnightMovesFromH8, expectedKnightMovesFromH8);
}

TEST(attacks, king_moves) {
    BitBoard kingMovesFromA1 = generateKingMoves(SquareA1);
    std::string prettyKingMovesFromA1 = prettyPrint(kingMovesFromA1);
    std::string expectedKingMovesFromA1 =
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
            std::string(" 2 | X | X |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 1 |   | X |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string("     A   B   C   D   E   F   G   H\n");

    ASSERT_EQ(prettyKingMovesFromA1, expectedKingMovesFromA1);

    BitBoard kingMovesFromD1 = generateKingMoves(SquareD1);
    std::string prettyKingMovesFromD1 = prettyPrint(kingMovesFromD1);
    std::string expectedKingMovesFromD1 =
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
            std::string(" 2 |   |   | X | X | X |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 1 |   |   | X |   | X |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string("     A   B   C   D   E   F   G   H\n");

    ASSERT_EQ(prettyKingMovesFromD1, expectedKingMovesFromD1);

    BitBoard kingMovesFromH1 = generateKingMoves(SquareH1);
    std::string prettyKingMovesFromH1 = prettyPrint(kingMovesFromH1);
    std::string expectedKingMovesFromH1 =
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
            std::string(" 2 |   |   |   |   |   |   | X | X |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 1 |   |   |   |   |   |   | X |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string("     A   B   C   D   E   F   G   H\n");

    ASSERT_EQ(prettyKingMovesFromH1, expectedKingMovesFromH1);

    BitBoard kingMovesFromA4 = generateKingMoves(SquareA4);
    std::string prettyKingMovesFromA4 = prettyPrint(kingMovesFromA4);
    std::string expectedKingMovesFromA4 =
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 8 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 7 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 6 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 5 | X | X |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 4 |   | X |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 3 | X | X |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 2 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 1 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string("     A   B   C   D   E   F   G   H\n");

    ASSERT_EQ(prettyKingMovesFromA4, expectedKingMovesFromA4);

    BitBoard kingMovesFromD4 = generateKingMoves(SquareD4);
    std::string prettyKingMovesFromD4 = prettyPrint(kingMovesFromD4);
    std::string expectedKingMovesFromD4 =
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 8 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 7 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 6 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 5 |   |   | X | X | X |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 4 |   |   | X |   | X |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 3 |   |   | X | X | X |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 2 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 1 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string("     A   B   C   D   E   F   G   H\n");

    ASSERT_EQ(prettyKingMovesFromD4, expectedKingMovesFromD4);

    BitBoard kingMovesFromH4 = generateKingMoves(SquareH4);
    std::string prettyKingMovesFromH4 = prettyPrint(kingMovesFromH4);
    std::string expectedKingMovesFromH4 =
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 8 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 7 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 6 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 5 |   |   |   |   |   |   | X | X |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 4 |   |   |   |   |   |   | X |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 3 |   |   |   |   |   |   | X | X |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 2 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 1 |   |   |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string("     A   B   C   D   E   F   G   H\n");

    ASSERT_EQ(prettyKingMovesFromH4, expectedKingMovesFromH4);

    BitBoard kingMovesFromA8 = generateKingMoves(SquareA8);
    std::string prettyKingMovesFromA8 = prettyPrint(kingMovesFromA8);
    std::string expectedKingMovesFromA8 =
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 8 |   | X |   |   |   |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 7 | X | X |   |   |   |   |   |   |\n") +
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

    ASSERT_EQ(prettyKingMovesFromA8, expectedKingMovesFromA8);

    BitBoard kingMovesFromD8 = generateKingMoves(SquareD8);
    std::string prettyKingMovesFromD8 = prettyPrint(kingMovesFromD8);
    std::string expectedKingMovesFromD8 =
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 8 |   |   | X |   | X |   |   |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 7 |   |   | X | X | X |   |   |   |\n") +
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

    ASSERT_EQ(prettyKingMovesFromD8, expectedKingMovesFromD8);

    BitBoard kingMovesFromH8 = generateKingMoves(SquareH8);
    std::string prettyKingMovesFromH8 = prettyPrint(kingMovesFromH8);
    std::string expectedKingMovesFromH8 =
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 8 |   |   |   |   |   |   | X |   |\n") +
            std::string("   +---+---+---+---+---+---+---+---+\n") +
            std::string(" 7 |   |   |   |   |   |   | X | X |\n") +
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

    ASSERT_EQ(prettyKingMovesFromH8, expectedKingMovesFromH8);
}

