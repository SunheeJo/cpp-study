#include <iostream>
using namespace std;

int main(void) {
    const int num = 12;
    const int* ptrNum = &num;

    const int& refNum = *ptrNum;

    cout << refNum;

    return 0;
}