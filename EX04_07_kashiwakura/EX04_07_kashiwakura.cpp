#include <iostream>
using namespace std;

void VolumeSurface(double,double,double,double&,double&);

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

void VolumeSurface(double width, double height, double depth, double &volume, double &surface) {
    volume = (width * height + width * depth + height * depth) * 2;
    surface = width * height * depth;
}


