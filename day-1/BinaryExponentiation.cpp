#include <iostream>
using namespace std;

int power(int a, int b) {
    if (b == 0) return 1;
    if (b == 1) return a;
    int tmp = power(a, (b / 2));
    int result = tmp * tmp;
    return result;
}