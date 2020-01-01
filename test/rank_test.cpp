#include "gtest/gtest.h"
#include "../lib/rank.h"

TEST(rank, rank_values) {
    ASSERT_EQ(0, Rank1);
    ASSERT_EQ(1, Rank2);
    ASSERT_EQ(2, Rank3);
    ASSERT_EQ(3, Rank4);
    ASSERT_EQ(4, Rank5);
    ASSERT_EQ(5, Rank6);
    ASSERT_EQ(6, Rank7);
    ASSERT_EQ(7, Rank8);
}

TEST(rank, minus_minus) {
    Rank rank = Rank8;

    ASSERT_EQ(Rank7, --rank);
    ASSERT_EQ(Rank6, --rank);
    ASSERT_EQ(Rank5, --rank);
    ASSERT_EQ(Rank4, --rank);
    ASSERT_EQ(Rank3, --rank);
    ASSERT_EQ(Rank2, --rank);
    ASSERT_EQ(Rank1, --rank);
}
