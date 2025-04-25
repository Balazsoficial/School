//
// Created by Balazsoficial on 2025. 03. 27..
//
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main() {



    double a,b,c,d,e,x,y;
    vector<double> szelsok;
    int balancer;

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
    cout <<endl;
    cout << (e*b*b-c*b*d+a*d*d)<<endl;
    if (d<0){balancer= abs(d);}
    else if (d>0){balancer= -abs(d);}

    for (int i=-abs((e*b*b-c*b*d+a*d*d)+balancer);i<=abs((e*b*b-c*b*d+a*d*d)+balancer);i++) {
        if (((e*b*b-c*b*d+a*d*d)/(b*i+d))==1||((e*b*b-c*b*d+a*d*d)/(b*i+d)==-1))
            {
                cout << "Szelso ertek x:  " << i << endl;
                szelsok.push_back(i);
                //cout << ((e*b*b-c*b*d+a*d*d)/(b*i-d)) << endl;
            }
        else if(((e*b*b-c*b*d+a*d*d)/(b*i-d))==0) {
            if (szelsok.empty())
            {x=0;
                if (((a*b*x+c*b-a*d + (e*b*b-c*b*d+a*d*d)/b*d*x)/(b*b)) == static_cast<int>(a*b*x+c*b-a*d + (e*b*b-c*b*d+a*d*d)/b*d*x)/(b*b)) {
                    cout << -(a*b*x+c*b-a*d + (e*b*b-c*b*d+a*d*d)/b*d*x)/(b*b)<<" es barmely szam kombinacioja" <<endl;
                }


            exit(0);}

        }

    }

    cout << szelsok.back()<<endl;
    for (x=szelsok[0];x<=szelsok.back();x++) {
        double eredmeny = ((a*b*x+c*b-a*d) + (e*b*b-c*b*d+a*d*d)/(b*x+d))/(b*b) ;
        cout << eredmeny<<endl;
        if (isnan(eredmeny)) {
            cout << "ez nem megoldható mivel: polinómos módon mivel végtelen megoldás lesz" << (e*b*b-c*b*d+a*d*d) <<"/" << b*x+d << "/" << (b*b)<<endl;
            cout << "és ez nem egy számot ad!";
        }

        if (eredmeny == static_cast<int>(eredmeny)){
            cout << -(a*b*x+c*b-a*d + (e*b*b-c*b*d+a*d*d)/(b*x+d))/(b*b)<<" ------- x: " <<x <<endl;
        }


    }



}