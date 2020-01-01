#ifndef BLUNDERBUSS_FILE_H
#define BLUNDERBUSS_FILE_H

enum  File : int {
    FileA, FileB, FileC, FileD,  FileE, FileF, FileG, FileH
};

inline File& operator++(File& file) { return file = File(int(file) + 1); }

#endif //BLUNDERBUSS_FILE_H
