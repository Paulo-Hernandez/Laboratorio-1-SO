#ifndef JOB_H
#define JOB_H
#include <iostream>

using namespace std;

class Job
{
    public:
        Job();
        Job(int,float,float);
        virtual ~Job();
        void setid(int);
        void setllegada(float);
        void setrafaga(float);
        int getid();
        float getllegada();
        float getrafaga();
        void mostrar();

    protected:

    private:
        int id;
        float llegada;
        float rafaga;


};

#endif // JOB_H
