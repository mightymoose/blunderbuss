//
// Created by Mathew Morris on 12/31/19.
//

#ifndef BLUNDERBUSS_RANK_H
#define BLUNDERBUSS_RANK_H

enum Rank : int {
    Rank1, Rank2, Rank3, Rank4, Rank5, Rank6, Rank7,  Rank8
};

inline Rank& operator--(Rank& rank) { return rank = Rank(int(rank) - 1); }

#endif //BLUNDERBUSS_RANK_H
