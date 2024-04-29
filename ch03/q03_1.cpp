#include <iostream>
using namespace std;

struct Point {
    int xpos;
    int ypos;

    void MovePos(const int x, const int y){
        xpos += x;
        ypos += y;
    }

    void MovePos(Point& point){
        xpos += point.xpos;
        ypos += point.ypos;
    }

    void AddPos(const Point& pos){
        xpos += pos.xpos;
        ypos += pos.ypos;
    }

    void ShowPosition(void){
        cout << "x, y = " << xpos << ", " << ypos << endl;
    }

    
};

int main(void) {
    Point pos1 = {12, 4};
    Point pos2 = {20, 30};

    pos1.MovePos(-7, 10);
    pos1.ShowPosition();

    pos1.MovePos(pos2);
    pos1.ShowPosition();

    return 0;
}