#include <iostream>


using namespace std;
const float e = 0.0001;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Ukrainian");
    float y;
    float x;
    cout << "Введiть х = ";
    cin >> x;
    y = x;
    do 
    {
        y = (1.0/3.0)*((2*y)+(x/y));
    }     
    while (fabs(pow(y, 3) - x) < e);
    cout << "y = " << y << endl;
    return 0;
}
