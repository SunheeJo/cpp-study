#include <iostream>
using namespace std;

int main(void){
    int sum = 0;
    int operand = 0;
    for(int i = 0; i < 5; i++){
        cout << i << "th integer: ";

        cin >> operand;
        sum += operand;
    }
    cout << "합계: " << sum << endl; 

    return 0;
}