#include <iostream>
#include "lib/bitboards.h"

int main() {
    initializeBitboards();
    BitBoard b = squareBitBoard[SquareD4] | squareBitBoard[SquareA2] | squareBitBoard[SquareH8];

    std::cout << prettyPrint(b) << std::endl;
}
