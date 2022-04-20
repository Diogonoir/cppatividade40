#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
    int N;
  float  C, F ;
   

cout<<"Quantos vezes voce vai digitar? "; cin>>N;

  
     for(int i = 0; i < N; i++){

      cout<<"Digite a temperatura em Celsius: ";
      cin>>C;
      F = 9.0 * (C / 5.0) + 32.0;
      cout<<"Equivalente em Fahrenheit: "<< F << endl;
    
     

    cout<<"voce tem mais uma tentativa"<<endl;
     

     }
}