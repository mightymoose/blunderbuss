#include <iostream>
#include "lib/bitboards.h"
#include "lib/engine.h"

int main() {
    initializeEngine();

    BitBoard b = squareBitBoard[SquareD4] | squareBitBoard[SquareA2] | squareBitBoard[SquareH8];
    std::cout << prettyPrint(b) << std::endl;
}
