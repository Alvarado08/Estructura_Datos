#include <iostream>
#include "Pila.h"
#include "Cola.h"
#include "stdlib.h"

using namespace std;

int a,b,c,d,e;

void pila()
{
int cant;
    cout << "ingrese la cantidad de datos: "<<endl;
    cin >> cant;

        for(int i;i<cant;i++){
            cout<< "ingrese el dato: ";
        }


    Pila p1;

    p1.insertar(a);
    p1.insertar(b);
    p1.insertar(c);
    p1.insertar(d);
    p1.insertar(e);

    cout<<"\n*****CIMA*****\n\n";
    cout<<"\t"<<p1.mostrar()<<"\n\n";
    cout<<"\t"<<p1.mostrar()<<"\n\n";
    cout<<"\t"<<p1.mostrar()<<"\n\n";
    cout<<"\t"<<p1.mostrar()<<"\n\n";
    cout<<"\t"<<p1.mostrar()<<"\n";
    cout<<"\n*****BASE*****\n\n";


}

void cola()
{
    Cola c1;

    c1.insertar(a);
    c1.insertar(b);
    c1.insertar(c);
    c1.insertar(d);
    c1.insertar(e);

    cout<<"\n\nINICIO->\t";
    cout<<c1.mostrar()<<"\t";
    cout<<c1.mostrar()<<"\t";
    cout<<c1.mostrar()<<"\t";
    cout<<c1.mostrar()<<"\t";
    cout<<c1.mostrar()<<"\t";
    cout<<"\t<-FIN\n\n";


}


int main()
{
    cout<<"DAME 5 NUMEROS ENTEROS, LUEGO PRESIONA CULAQUIER TECLA PARA PROCESAR:\n";
    cin>>a>>b>>c>>d>>e;
    system("pause");
    system("cls");
    cout<<"LOS DATOS:\t"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<"\t"<<e<<"\t"<<"FUERON APILADOS:\n";
    pila();
    cout<<"\nDATOS SE ENCOLAN A PARTIR DEL ULTIMO NUMERO APILADO ---> "<<(e)<<":\n";
    cola();

    return 0;
}

