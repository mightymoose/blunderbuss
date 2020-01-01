#include "bitboards.h"
#include "rank.h"
#include "file.h"
#include "square.h"
#include <string>

BitBoard squareBitBoard[64];

void initializeBitboards() {
    for(Square currentSquare = SquareA1; currentSquare <= SquareH8; ++currentSquare) {
        squareBitBoard[currentSquare] = 1ULL << currentSquare;
    }
}

const std::string prettyPrint(BitBoard bitBoard) {

    std::string board = "   +---+---+---+---+---+---+---+---+\n";

    for (Rank currentRank = Rank8; currentRank >= Rank1; --currentRank) {

        board += " " + std::to_string(currentRank  + 1) + " ";

        for (File currentFile = FileA; currentFile <= FileH; ++currentFile) {
            board += bitBoard & makeSquare(currentFile, currentRank) ? "| X " : "|   ";
        }
        board += "|\n   +---+---+---+---+---+---+---+---+\n";
    }

    board += "     A   B   C   D   E   F   G   H\n";

    return board;
}