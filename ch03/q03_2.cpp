#include <iostream>
using namespace std;

class OpCount{
    private: 
        int opCount[4] = {0, 0, 0, 0};

    public:
        enum operators {
            add, sub, mul, div
        };
        void addCount(void);
        void subCount(void);
        void mulCount(void);
        void divCount(void);    
        void ShowOpCount(void);  
};

void OpCount::addCount(){
    opCount[add]++;
};
void OpCount::subCount(){
    opCount[sub]++;
};
void OpCount::mulCount(){
    opCount[mul]++;
};
void OpCount::divCount(){
    opCount[div]++;
};  
void OpCount::ShowOpCount(void){
    cout << "덧셈: " << opCount[add];
    cout << " 뺄셈: " << opCount[sub];
    cout << " 곱셈: " << opCount[mul];
    cout << " 나눗셈: " << opCount[div] << endl;
}

class Calculator{
    private:
        OpCount opCount;

    public:
        float add(float, float);
        float sub(float, float);
        float mul(float, float);
        float div(float, float);
        void ShowOpCount(void);
};

float Calculator::add(float num1, float num2){
    opCount.addCount();
    return num1 + num2;
}
float Calculator::sub(float num1, float num2){
    opCount.subCount();
    return num1 - num2;
}
float Calculator::mul(float num1, float num2){
    opCount.mulCount();
    return num1 * num2;
}
float Calculator::div(float num1, float num2){
    opCount.divCount();
    return num1 / num2;
}
void Calculator::ShowOpCount(void){
    opCount.ShowOpCount();
}


int main(void){
    Calculator cal;
    cout << "4.0 + 2.0 = " << cal.add(4.0, 2.0) << endl;
    cout << "4.0 - 2.0 = " << cal.sub(4.0, 2.0) << endl;
    cout << "4.0 * 2.0 = " << cal.mul(4.0, 2.0) << endl;
    cout << "4.0 / 2.0 = " << cal.div(4.0, 2.0) << endl;
    cal.ShowOpCount();
    
    return 0;
}