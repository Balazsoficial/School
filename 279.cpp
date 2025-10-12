//
// Created by Balazsoficial on 2025. 09. 05..
//
#include <iostream>
#include <bo>
using namespace std;
int main() {
    for (long long i =5; i<=9223372036854775807;i=i+10){
       long long   solution = i * 297;
       // cout << "a" << endl;
        if (((solution - 1995)%10000 )==0 && (solution - 1995)>10000) {
            cout <<"Megoldas: " << solution  ;
            cout << "   eredeti: " << i << endl;
        }
        //Megoldas: 841995   eredeti: 2835
       // Megoldas: 3811995   eredeti: 12835
       // Megoldas: 6781995   eredeti: 22835



    }

}