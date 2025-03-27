//
// Created by Balazsoficial on 2025. 03. 27..
//
#include <iostream>
#include <math.h>
using namespace std;

int main() {



    int a,b,c,d,e,x,y;

    cout << "Add meg x^2 értékét" << endl;
    cin >> a;
    cout << "Add meg xy értékét" << endl;
    cin >> b;
    cout << "Add meg x értékét" << endl;
    cin >> c;
    cout << "Add mg y értékét" << endl;
    cin >> d;
    cout << "Add meg a konstans értékét" << endl;
    cin >> e;
    cout << a<<"x^2 + " <<b<<"xy + "<<c<<"x + "<<d<<"y + "<<e<< " = 0" <<endl;
    if (a==0) {
        if ((b+c)==0) {
            cout << "A tört alja 0 tehát nem megoldhato" << endl;
        }
        else {
            {    cout << "x= " << -(d+e)/b+c<<" y" <<endl;
    cout << "elsofoku!"<<endl;}
        }

    }
    if (a!=0) {
        cout << "masodfoku" << endl;
        if (pow(b+c,2) -4*a*(d+e)>0||pow(b+c,2) -4*a*(d+e)==0) {
            cout <<"x1= " << (-(b+c)+sqrt(pow(b+c, 2) -4*a*(d+e)))/(2*a)<<" y1" <<endl;
            cout <<"x2= " << (-(b+c)-sqrt(pow(b+c, 2) -4*a*(d+e)))/(2*a)<<" y2" <<endl;
        }
        else {
            cout <<"Diszkriminált" <<   endl;
        }

    }

}