//
// Created by Balazsoficial on 2025. 09. 29..
//
#include  <iostream>
#include <boost/multiprecision/cpp_dec_float.hpp>


using namespace  std;


int main() {

    int n;
    cin>>n;
     using cpp_dec_float_1000 = boost::multiprecision::number<boost::multiprecision::cpp_dec_float<100000>>;
    cpp_dec_float_1000 guess = n/2;

    //heron
    for (int i=1; i<=100; i++) //i-1 a precosion

   guess = 0.5 *(guess + n/guess);
    cout.precision(100000);
    cout<< std::fixed << guess;
    // cout << guess << endl;



}