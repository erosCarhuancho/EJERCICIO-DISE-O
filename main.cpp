#include <iostream>
#include <string>
using namespace std;
#define SIZE 10


bool RIC(string fechaNacimiento, string fechaConsulta) {
  if((fechaNacimiento.size() != SIZE) && (fechaConsulta.size()!= SIZE) ) throw "mal formato";
   int sz=fechaNacimiento.size();
   int añoNacimiento = stoi(fechaNacimiento.substr(sz-4,4));
   int añoConsulta = stoi(fechaConsulta.substr(sz-4,4));
   int mesNacimiento = stoi(fechaNacimiento.substr(sz-7,2));
   int mesConsulta = stoi(fechaConsulta.substr(sz-7,2));
   int diaNacimiento = stoi(fechaNacimiento.substr(0,2));
   int diaConsulta = stoi(fechaConsulta.substr(0,2));
   if ((añoConsulta - añoNacimiento) >= 18) return true;
   if((añoConsulta - añoNacimiento) < 18 && (añoConsulta - añoNacimiento) > 0 )
      return false;
  if (añoConsulta - añoNacimiento < 0) throw "error";
  
 }
int main(){

  cout<<RIC("29/03/2001","30/03/2050");
  cout<<RIC("30/03/2001","29/03/2001");
  return 0;
}