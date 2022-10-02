#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char nilai ;

    cout << "Input nilai anda (1 - 8): " << endl;
    cin >> nilai;

    if(nilai == '1'){
        cout << "Freshman" << endl;
    }
    else if (nilai == '2') {
        cout << "Freshman" << endl;
    }
    else if (nilai == '3') {
        cout << "Sophomore" << endl;
    }
    else if (nilai == '4') {
        cout << "Sophomore" << endl;
    }
    else if (nilai =='5') {
        cout  << "Junior" << endl;
    }
    else if (nilai == '6') {
        cout << "Junior" << endl;
    }
    else if (nilai == '7') {
        cout << "Senior" << endl;
    }
    else if (nilai == '8') {
        cout << "Senior" << endl;
    }
    else if (nilai > '8') {
        cout << "Mahasiswa Abadi bang???" << endl;
    }
    else {
        cout << "maaf, keyword yang anda masukan salah" << endl;
    }
    return 0;
}
