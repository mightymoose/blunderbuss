#include "gtest/gtest.h"
#include "../lib/bitboards.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    initializeBitboards();
    int ret = RUN_ALL_TESTS();
    return ret;
}

