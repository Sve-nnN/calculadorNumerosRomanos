#include <iostream>
#include <time.h>
using namespace std;

string unidad(int u){
	switch (u) {
	case 0:return "";
		break;
	case 1:return "I";
		break;
	case 2:return "II";
		break;
	case 3:return "III";
		break;
	case 4:return "IV";
		break;
	case 5:return "V";
		break;
	case 6:return "VI";
		break;
	case 7:return "VII";
		break;
	case 8:return "VIII";
		break;
	case 9:return "IX";
		break;
	default:"";
		break;
	}
}
string decena(int d){
	switch (d) {
	case 0:return "";
		break;
	case 1:return "X";
		break;
	case 2:return "XX";
		break;
	case 3:return "XXX";
		break;
	case 4:return "XL";
		break;
	case 5:return "L";
		break;
	case 6:return "LX";
		break;
	case 7:return "LXX";
		break;
	case 8:return "LXXX";
		break;
	case 9:return "XC";
		break;
	default:"";
		break;
	}

}
string centena(int c){
	switch (c) {
	case 1: return"C";
		break;
	case 0:return "";
		break;
  }
}
int main() {
  //hacemos que se actualice el numero random por cada milisegundo
  srand(time(NULL));
  int* numero=new int;
  //generar un numero aleatorio
  // numero inicial + numero final+1-numero inicial
  *numero = 1+rand()%(100+1-1);
  cout<<*numero<<endl;

  int cente= *numero/100;  
  int dece= (*numero%100)/10;
  int unid= ((*numero%100)%10)/1;
  cout << cente << dece << unid<<endl;
  cout << centena(cente) <<decena(dece)<<unidad(unid)<<endl;

  
  
  delete numero;
  system("pause");
}
