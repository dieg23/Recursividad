#include <iostream>
#include <stdlib.h>

using namespace std;

int factorial(int);
void nombre(int, int, int);

int main()
{
	int opcion;
	do
	{
		cout<<"Que desea realizar?\n"<<endl;
		cout<<"1.- Digitar nombre"<<endl;
		cout<<"2.- Obtener factorial"<<endl;
		cout<<"3.- Salir"<<endl;
		cout<<"Su opcion es: ";
		cin>>opcion;
		
		switch(opcion)
		{
			case 1:
				{
					system("cls");
					int a=0, b=0, c=0;
					nombre(a, b, c);
					system("pause");
					system("cls");
				}
				break;
			case 2:
				{
					system("cls");
					int NumFacto, Factorial = 0;
					cout<<"Digite el numero a obtener su factorial: ";
					cin>>NumFacto;
					Factorial=factorial(NumFacto);
					cout<<"\nEl factorial del numero "<<NumFacto<<" es: "<<Factorial<<endl;
					system("pause");
					system("cls");
				}
				break;
			case 3:
				{
				}
				break;
		}
	} while(opcion!=3);
	
	return 0;
}

int factorial(int a)
{
	int conteo;
	if(a==1 || a==0){
		return 1;
	} else if(a!=0 && a!=1){
		return a*factorial(a-1);
	}
}

void nombre(int a, int b, int c)
{
	a=a;
	b=b;
	c=c;
	char Nombre[20], ApellidoPaterno[20], ApellidoMaterno[20];
	if(a==0 && b==0 && c==0){
		cout<<"Digite su Nombre: ";
		cin.getline(Nombre, 20, '\n');
		cin.getline(Nombre, 20, '\n');
		a=1;
		nombre(a, b, c);
	} else if(a==1 && b==0 && c==0){
		cout<<"Digite su Apellido Paterno: ";
		cin.getline(ApellidoPaterno, 20, '\n');
		b=1;
		nombre(a, b, c);
	} else if(a==1 && b==1 && c==0){
		cout<<"Digite su Apellido Paterno: ";
		cin.getline(ApellidoMaterno, 20, '\n');
		c=1;
		nombre(a, b, c);
	}
	cout<<"\nSu nombre es: "<<Nombre<<" "<<ApellidoPaterno<<" "<<ApellidoMaterno<<endl;
	return;
}

