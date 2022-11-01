#include <iostream>
#include "getVolumeSurface.h"
using namespace std;

int main()
{
    double width, height, depth, volume, surface;
    cout << "幅を入力して下さい" << endl;
    cin >> width;
    cout << "高さを入力して下さい" << endl;
    cin >> height;
    cout << "奥行きを入力して下さい" << endl;
    cin >> depth;
    VolumeSurface(width, height, depth, volume, surface);
    cout << "表面積 = " << surface << endl << "体積 = " << volume << endl;
    string e;
    cin >> e;
    return 0;
}


