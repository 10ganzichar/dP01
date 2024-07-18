#include <iostream>

struct S_POINT
{
    int nX{};
    int nY{};

    void MovePosition(int x, int y);
    void AddPoint(const S_POINT &pos);
    void showPosition();
};

void S_POINT::MovePosition(int x, int y)
{
    nX+=x;
    nY+=y;
}

void S_POINT::AddPoint(const S_POINT &pos)
{
    nX+=pos.nX;
    nY+=pos.nY;
}

void S_POINT::showPosition()
{
    printf("[%d, %d]\n",nX,nY);
}

int main()
{
    S_POINT pos1={12,4};
    S_POINT pos2={20,30};

    pos1.MovePosition(-7,10);
    pos1.showPosition();

    pos1.AddPoint(pos2);
    pos1.showPosition();
    return 0;
}
