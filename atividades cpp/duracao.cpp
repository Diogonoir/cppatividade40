#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
int duracao, horas, minutos, segundos, resto;

   cout<<"Digite a duracao em segundos: ";
   cin>>duracao;
   
   horas = duracao / 3600;
   resto = duracao % 3600;
   
   minutos = resto / 60;
   segundos = resto % 60;
   
   cout<<horas<< ":" << minutos<<":"<< segundos;
}
