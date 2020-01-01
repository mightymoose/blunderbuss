#ifndef BLUNDERBUSS_SQUARE_H
#define BLUNDERBUSS_SQUARE_H

#include "file.h"
#include "rank.h"

extern int maxMetricLookup[64][64];

enum Square : int {
    SquareA1, SquareB1,  SquareC1, SquareD1, SquareE1, SquareF1, SquareG1,  SquareH1,
    SquareA2, SquareB2,  SquareC2, SquareD2, SquareE2, SquareF2, SquareG2,  SquareH2,
    SquareA3, SquareB3,  SquareC3, SquareD3, SquareE3, SquareF3, SquareG3,  SquareH3,
    SquareA4, SquareB4,  SquareC4, SquareD4, SquareE4, SquareF4, SquareG4,  SquareH4,
    SquareA5, SquareB5,  SquareC5, SquareD5, SquareE5, SquareF5, SquareG5,  SquareH5,
    SquareA6, SquareB6,  SquareC6, SquareD6, SquareE6, SquareF6, SquareG6,  SquareH6,
    SquareA7, SquareB7,  SquareC7, SquareD7, SquareE7, SquareF7, SquareG7,  SquareH7,
    SquareA8, SquareB8,  SquareC8, SquareD8, SquareE8, SquareF8, SquareG8,  SquareH8
};

constexpr Square makeSquare(File file, Rank rank) {
    return Square((rank  <<  3) + file);
}

inline Square& operator++(Square& square) { return square = Square(int(square) + 1); }

inline int maxMetric(Square firstSquare, Square secondSquare) {
    return maxMetricLookup[firstSquare][secondSquare];
}

void initializeSquares();

Rank rank(Square square);

File file(Square square);

#endif //BLUNDERBUSS_SQUARE_H
