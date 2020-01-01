#include "move_generation.h"

BitBoard knightMoves[64];
BitBoard kingMoves[64];

BitBoard generateKnightMoves(Square square) {
    return  knightMoves[square];
}

BitBoard generateKingMoves(Square square) {
    return kingMoves[square];
}

void initializeKnightMoves() {
    int knightMoveOffsets[8] = {-17, -15, -10, -6, 6, 10, 15, 17};

    for(Square currentFromSquare = SquareA1; currentFromSquare <= SquareH8; ++currentFromSquare) {
        knightMoves[currentFromSquare] = 0;

        for(int currentKnightMoveOffsetIndex = 0; currentKnightMoveOffsetIndex < 8; currentKnightMoveOffsetIndex++) {
            Square potentialToSquare = Square(currentFromSquare + knightMoveOffsets[currentKnightMoveOffsetIndex]);

            if (
                    (potentialToSquare >= SquareA1) &&
                    (potentialToSquare <= SquareH8) &&
                    (maxMetric(currentFromSquare, potentialToSquare) < 3)) {
                knightMoves[currentFromSquare] |= squareBitBoard[potentialToSquare];
            }
        }
    }
}

void initializeKingMoves() {
    int kingMoveOffsets[8] = {-9, -8, -7, -1, 1, 7, 8, 9};

    for(Square currentFromSquare = SquareA1; currentFromSquare <= SquareH8; ++currentFromSquare) {
        kingMoves[currentFromSquare] = 0;

        for(int currentKingMoveOffsetIndex = 0; currentKingMoveOffsetIndex < 8; currentKingMoveOffsetIndex++) {
            Square potentialToSquare = Square(currentFromSquare + kingMoveOffsets[currentKingMoveOffsetIndex]);

            if (
                    (potentialToSquare >= SquareA1) &&
                    (potentialToSquare <= SquareH8) &&
                    (maxMetric(currentFromSquare, potentialToSquare) < 3)) {
                kingMoves[currentFromSquare] |= squareBitBoard[potentialToSquare];
            }
        }
    }
}

void initializeMoveGeneration() {
  initializeKnightMoves();
  initializeKingMoves();
}