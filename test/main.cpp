#include "gtest/gtest.h"
#include "../lib/engine.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    initializeEngine();
    int ret = RUN_ALL_TESTS();
    return ret;
}

