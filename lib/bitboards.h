#ifndef BLUNDERBUSS_BITBOARDS_H
#define BLUNDERBUSS_BITBOARDS_H

#include <cstdint>
#include <string>
#include "square.h"

typedef uint64_t BitBoard;

extern BitBoard squareBitBoard[64];

const std::string prettyPrint(BitBoard bitBoard);
void initializeBitboards();

inline BitBoard operator&(BitBoard bitBoard, Square square) {
    return bitBoard & squareBitBoard[square];
}

#endif //BLUNDERBUSS_BITBOARDS_H
