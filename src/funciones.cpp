#include "funciones.h"
#include <iostream>
#include <Job.h>
#include <cstdlib>
using namespace std;

void ordenar_procesos(Job Q[],int largo){

    int mini,i,j,p;

    Job aux;

    for(i=0;i<largo-1;i++){
            mini = i;
        for(j=i+1;j<largo;j++){
            if(Q[j].getllegada()<Q[mini].getllegada()){
                mini = j;
            }
        }

        aux.setid(Q[i].getid());
        aux.setllegada(Q[i].getllegada());
        aux.setrafaga(Q[i].getrafaga());

        Q[i].setid(Q[mini].getid());
        Q[i].setllegada(Q[mini].getllegada());
        Q[i].setrafaga(Q[mini].getrafaga());

        Q[mini].setid(aux.getid());
        Q[mini].setllegada(aux.getllegada());
        Q[mini].setrafaga(aux.getrafaga());

    }

}
void rrq1(Job Q[],int largo,int q){

    cout<<"\nLA SECUENCIA SERA"<<endl;
    int i,terminados=0;
    float remanente,tmp = Q[i].getllegada();
    while(terminados<largo){
          for(i=0;i<largo;i++){
            if(Q[i].getrafaga()>0){
                cout<<tmp<<" || P:"<< Q[i].getid()<<" || ";
                if(Q[i].getrafaga()>q){
                  tmp = tmp + q;
                  remanente = Q[i].getrafaga() - q;
                }
                if(Q[i].getrafaga()<=q){
                  tmp = tmp + Q[i].getrafaga();
                  remanente = 0;
                }
                if(tmp < Q[i+1].getllegada()){
                   tmp = Q[i+1].getllegada();
                }
            Q[i].setrafaga(remanente);

            }
            else
              terminados++;
              if(terminados==largo)
                cout<<tmp;
            }
    }
}
void fcfs(Job Q[],int largo){
    int i;
    float tmp=Q[0].getllegada();
    for(i=0;i<largo;i++){
        cout<<tmp<<" || P:"<< Q[i].getid()<<" || ";
        tmp = tmp + Q[i].getrafaga();
        if(tmp < Q[i+1].getllegada()){
            tmp = Q[i+1].getllegada();
        }
        if(i+1==largo)
                cout<<tmp;
    }

}
