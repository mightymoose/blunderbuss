#ifndef BLUNDERBUSS_MOVE_GENERATION_H
#define BLUNDERBUSS_MOVE_GENERATION_H

#include "bitboards.h"

BitBoard generateKnightMoves(Square square);
BitBoard generateKingMoves(Square square);

void initializeMoveGeneration();

#endif //BLUNDERBUSS_MOVE_GENERATION_H
