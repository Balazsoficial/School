//
// Created by Balazsoficial on 2026. 01. 14..
//
#include <iostream>
#include <chrono>
using namespace std;
int Levelg =0;
int Nums[100];
int Taken[100];

bool Is_Taken(int num) {
    if (Taken[num]) {
        return true;
    }
    else {
        return false;
    }
}
int Calc_Sum(int Start,int Step) {
    int Sum =0;
    for (size_t i = Start+1; i <= Start+Step; i++) {
        Sum+=Nums[i];
        }
    return Sum;
}
bool jo(int Level) {
    if (Level >2) {
        int Step =2;
        for (int Start =0;Start+Step <= Level ;Start++) {
            if (Calc_Sum(Start,Step) % Step == 0) {
                return false;
            }
            if (Start+Step==Level && Step !=Level) {
                Start  =-1;
                Step ++;
            }
        }
    }
    return true;
    }
void PrintSolution() {
    for (size_t i  = 1; i <= Levelg; i++) {
        cout << Nums[i] << " ";
    }
    cout << endl;

}
void Rek( int Level) {

    if (Level== Levelg+1 /*&& jo()*/  ) {
        PrintSolution();
    }
    else {
        for (int i = 1; i <= Levelg; i++) {
            if (!Is_Taken(i)) {
                Nums[Level] = i;
                Taken[i] = 1;
                if (jo(Level)) {
                    Rek( Level+1);
                }
                    Taken[i] = 0;
                    Nums[Level] = 0;
            }
        }
    }
}

int main() {
    cin >> Levelg;
    auto start = std::chrono::high_resolution_clock::now();
    Rek( 1);
    auto stop = std::chrono::high_resolution_clock::now();

    cout <<"Time in Nanoseconds:   "<< duration_cast<std::chrono::nanoseconds>(stop - start)  << endl;
    cout << "Time in milliseconds: "<< chrono::duration_cast<chrono::milliseconds>(stop-start)<<endl;
    cout <<"Time in Seconds:       "<< duration_cast<std::chrono::seconds>(stop - start) << endl;


}
