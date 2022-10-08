#include <iostream>
#include <Job.h>
#include <cstdlib>
#include <funciones.h>
using namespace std;

int main()
{
    int cont=0,cont2=0,cont3=0,opc,i;
    float tiempo,rafaga;

    Job Q1[10]; // R-R q=3
    Job Q2[10]; // R-R q=8
    Job Q3[10]; // FCFS

    cout <<"*******************BIENVENIDO*******************"<< endl;
    cout <<"LAB 01/ SISTEMAS OPERATIVOS \n\n\tINTEGRANTES\n\t-Paulo Hernandez\n\t-Martin Hurtado"<< endl;
    cout <<"\nPara la implementacion del MLQ usaremos 3 Queue que son con los algoritmos de R-R, R-R y FCFS"<< endl;
    cout <<"para esto necesitamos que el usuario ingrese los tiempos de llegada y rafagas para cada proceso"<< endl;
    system("pause");
    system("cls");
    cout <<"\nCola 1 con algortimo R-R q = 3 (recomendacion que sean procesos con rafagas menores o iguales a 3)"<< endl;
    while(cont<10){

            cout <<"Para el proceso P"<<cont<<" Ingrese:"<< endl;
            cout <<"  -Tiempo de llegada: ";
            cin >>tiempo;
            cout <<"  -Rafaga: ";
            cin >>rafaga;
            Q1[cont].setid(cont);
            Q1[cont].setllegada(tiempo);
            Q1[cont].setrafaga(rafaga);
            cont++;
            cout <<"Desea continuar? si=1 / no=0: ";
            cin >> opc;
            if(opc==0)
                break;
            system("cls");


    }
    ordenar_procesos(Q1,cont);
    rrq1(Q1,cont,3);
    system("pause");
    system("cls");
    cout <<"\nCola 2 con algortimo R-R q = 8 (recomendacion que sean procesos con rafagas menores o iguales a 8)"<< endl;
    while(cont2<10){

            cout <<"Para el proceso P"<<cont2<<" Ingrese:"<< endl;
            cout <<"  -Tiempo de llegada: ";
            cin >>tiempo;
            cout <<"  -Rafaga: ";
            cin >>rafaga;
            Q2[cont2].setid(cont2);
            Q2[cont2].setllegada(tiempo);
            Q2[cont2].setrafaga(rafaga);
            cont2++;
            cout <<"Desea continuar? si=1 / no=0: ";
            cin >> opc;
            if(opc==0)
                break;
            system("cls");


    }
    ordenar_procesos(Q2,cont2);
    rrq1(Q2,cont2,8);
    system("pause");
    system("cls");

    cout <<"\nCola 3 con algortimo FCFS "<< endl;
    while(cont3<10){

            cout <<"Para el proceso P"<<cont3<<" Ingrese:"<< endl;
            cout <<"  -Tiempo de llegada: ";
            cin >>tiempo;
            cout <<"  -Rafaga: ";
            cin >>rafaga;
            Q3[cont3].setid(cont3);
            Q3[cont3].setllegada(tiempo);
            Q3[cont3].setrafaga(rafaga);
            cont3++;
            cout <<"Desea continuar? si=1 / no=0: ";
            cin >> opc;
            if(opc==0)
                break;
            system("cls");

    }
    ordenar_procesos(Q3,cont3);
    fcfs(Q3,cont3);
    system("pause");
    system("cls");


    return 0;
}
