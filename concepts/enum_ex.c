#include <stdio.h>

enum Months {
    JAN = 1,  // Set JAN to 1
    FEB,      // FEB will be 2
    MAR,      // MAR will be 3
    APR,      // APR will be 4
    MAY,      // MAY will be 5
    JUN,      // JUN will be 6
    JUL,      // JUL will be 7
    AUG,      // AUG will be 8
    SEP,      // SEP will be 9
    OCT,      // OCT will be 10
    NOV,      // NOV will be 11
    DEC       // DEC will be 12
};

int main() {
    enum Months currentMonth = MAR;
    printf("The current month is %d\n", currentMonth);
    return 0;
}

