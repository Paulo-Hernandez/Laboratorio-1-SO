#include "Job.h"

Job::Job()
{
    //ctor
}

Job::~Job()
{
    //dtor
}
Job::Job(int _id,float _llegada,float _rafaga)
{
    this -> setid(_id);
    this -> setllegada(_llegada);
    this -> setrafaga(_rafaga);
}

void Job::setid(int n){
    this->id=n;
}
void Job::setllegada(float l){
    this->llegada=l;
}
void Job::setrafaga(float r){
    this->rafaga=r;
}
int Job::getid(){
    return this->id;
}
float Job::getllegada(){
    return this->llegada;
}
float Job::getrafaga(){
    return this->rafaga;
}
void Job::mostrar(){

    cout<<"\nProceso:"<<id<<"\nTiempo de llegada: "<<llegada<<"\nRafaga: "<<rafaga;

}
