#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;
string linea;
string texto;
int main(int argc, char** argv) {

	string Nombres[3] = {"programacion", "algoritmos ", "logica de sistemas"};
	int opc;
	float n1,n2,n3,prome,resultado;
	do
	{
		cout<<"ingrese una opcion, 0 para terminar" <<endl;
		cout<<"******* 1.--programacion*******"<<endl;
		cout<<"******* 2.--algoritmos *******"<<endl;
		cout<<"******* 3.--logica de sistemas *******"<<endl;
		cout<<"******* 4.--Promedio *******"<<endl;
	  cout<<"******* 5.--Notas de los cursos  *******"<<endl;

		cin>>opc;
	switch(opc)	
	{
		break;
		
		
			case 4:
			cout<<"Promedio"<<endl;
			cin>>n1;cin>>n2;cin>>n3;
			
			prome=(n1+n2+n3)/3;
				
				if (prome<=61){
					cout<<"el alumno reprobo  "<<prome<<endl;
				}
			else{
				cout<<"el alumno aprobo  "<<prome<<endl;
			}
			break;	
			
			
			case 5:
			cout<<"Nota de los cursos "<<endl;
						cout<<"Nota programacion"<<endl;
						cin>>n1;
						
						cout<<"Nota algoritmos"<<endl;
						cin>>n2;
						
						cout<<"Nota logica de sistemas"<<endl;
						cin>>n3;
						
						if ((n1>n2)&&(n2>n3))
						cout<<"Nota mas alta es "<<n1<<endl;
				else if((n2>n1)&&(n2>n3))
									cout<<"Nota mas alta es "<<n2<<endl;

	                 else if ((n3>n2)&&(n3>n2))
					cout<<"Nota mas alta es "<<n3<<endl;
					
         cout<<"Promedio"<<endl;
         prome=(n1+n2+n3)/3;
         		if (prome<=61){
					cout<<"el alumno reprobo  "<<prome<<endl;
				}
			else{
				cout<<"el alumno aprobo  "<<prome<<endl;
			}
    
			break;
			
	}
	} while(opc!= 0);
	ifstream archivo("documento.txt");
	while(getline(archivo, linea)){
		texto=texto+linea+"\n";
	}
	archivo.close();
	cout<<texto<<endl;
	ofstream archivo2(" documento.txt ");
	archivo2<<texto << " Programacion " <<n1;
	archivo2<<texto << " algoritmo " <<n2;
	archivo2<<texto << " logica " <<n3;
	archivo2<<texto << " promedio " <<prome;


			
	cout<<"Termino el programa"<<endl;
	system("pause");
	return 0;

}
