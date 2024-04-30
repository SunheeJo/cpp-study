#include <iostream>
using namespace std;

class Point{
    private:
        int xpos, ypos;
    public:
        void Init(int x, int y){
            xpos = x;
            ypos = y;
        }

        void ShowPointInfo() const{
            cout << "[" << xpos << ", " << ypos << "]" << endl;
        }
};

class Circle{
    private:
        Point center;
        int radius;
    public:
        void Init(int x, int y, int radius){
            center.Init(x, y);
            this->radius = radius;
        }
        void ShowCircleInfo() const{
            cout << "radius: " << radius << endl;
            center.ShowPointInfo();
        }
};

class Ring{
    private:
        Circle innerCircle;
        Circle outterCircle;
    public:
        void Init(int innerX, int innerY, int innerRadius, int outterX, int outterY, int outterRadius){
            innerCircle.Init(innerX, innerY, innerRadius);
            outterCircle.Init(outterX, outterY, outterRadius);
        }
        void ShowRingInfo(){
            cout << "Inner Circle Info..." << endl;
            innerCircle.ShowCircleInfo();
            cout << "Outter Circle Info..." << endl;
            outterCircle.ShowCircleInfo();
        }
};

int main(void){
    Ring ring;
    ring.Init(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
    
    return 0;
}
