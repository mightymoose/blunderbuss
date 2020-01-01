#include <algorithm>
#include "square.h";
#include "rank.h";
#include "file.h";

int maxMetricLookup[64][64];

void initializeSquares() {
    for (Square currentFromSquare = SquareA1; currentFromSquare <= SquareH8 ; ++currentFromSquare) {
        for (Square currentToSquare = SquareA1; currentToSquare <= SquareH8 ; ++currentToSquare) {
            const int rankDifference = rank(currentFromSquare) - rank(currentToSquare);
            const int fileDifference = file(currentFromSquare) - file(currentToSquare);

            maxMetricLookup[currentFromSquare][currentToSquare] = std::max(
                    abs(rankDifference),
                    abs(fileDifference)
                    );
        }
    }
}

Rank rank(Square square) {
    return Rank(square >> 3);
}

File file(Square square) {
    return File(square & 7);
}