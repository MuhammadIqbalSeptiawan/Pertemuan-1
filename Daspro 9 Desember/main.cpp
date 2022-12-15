#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 1, c = 0, d = 2;
    int i [3][2][2];
    float rata_rata;
    for(int x = 0; x < 3; x++){
        for (int y = 0; y < 2; y++){
            for ( int z = 0; z < 2; z++){
                i[x][y][z] = d;
                d +=2;
                cout << d << " ";
                c += d;
                a += b;
                rata_rata = (float)c / a;
            }
        }
    }
    cout << "/n";
    cout << "sum kelipatan 4 = " << c << endl;
    cout << "rata-rata sum kelipatan 4 = " << rata_rata << endl;
    return 0;
}
