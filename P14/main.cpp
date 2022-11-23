#include <iostream>

using namespace std;

int main()
{
    int uang = 5000;
    int permen;
    int x;
    int y;
    cout << "uang dito = 5000" <<endl;
    cout << endl;
    cout << "harga permen:" << endl;
    cout << "permen 1 : 500" << endl;
    cout << "permen 2 : 1000" < endl;
    cout << "permen 3 : 300" << endl;
    cout << endl;

    cout <<"Pilihan = Permen";
    cin>>y;
    cout<<endl;
    if (y==1){
    cout<< "Dito hanya mau membeli 5 permen dengan harga 500" <<endl;
     }
        else if(y==2){
        permen=uang/s1000;
        cout <<"Dito hanya bisa membeli "<<permen<<" permen dengan harga 1000"
         <<endl;
        }

    else if(y==3){
    cout<<"Dito Menghitung Uangnya dengen kelipatan 300..."<<endl;
    cout<<endl;
    for( int x = 300 ; x <= 5000 ; x += 300 ){
    cout<<x<<endl;
    }
    permen = uang / 300;
    cout<<endl;
    cout<< "Dito bisa membeli " << permen <<" permen dengan harga 300"<< endl;
     }
    else{
    cout<<"Stok permen "<<y<<" habis"<<endl;
     }
    return 0;
}
