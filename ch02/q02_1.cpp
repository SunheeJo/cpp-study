#include <iostream>
using namespace std;

void increase(int& num){
    num++;
}

int main(void) {
    int num = 0;
    increase(num);
    cout << num;

    return 0;
}