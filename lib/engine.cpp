#include "engine.h"
#include "bitboards.h"
#include "square.h"
#include "move_generation.h"

void initializeEngine() {
    initializeBitboards();
    initializeSquares();
    initializeMoveGeneration();
}