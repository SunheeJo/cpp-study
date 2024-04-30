#ifndef __POINT_H_
#define __POINT_H_

class Point
{
    private:
    int x;
    int y;

    public:
    Point(const int &xpos, const int &ypos); /* 참조자 활용으로 메모리 절약 */
    int GetX() const;
    int GetY() const;
    bool SetX(const int &xpos);
    bool SetY(const int &ypos);
};

#endif