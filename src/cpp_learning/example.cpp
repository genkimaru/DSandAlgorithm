#include <iostream>
#include <string>
using namespace std;

class CPU
{

public:
    virtual CPU get_cpu() {};

    string m_Name;

};

class INTEL_CPU : public CPU
{

public:
    INTEL_CPU(string name){
        this->m_Name = name;
        cout << "CPU Name is " << this->m_Name << endl;
    };

    


    CPU get_cpu() {

        return * this;
    };

};



class MEMORY
{
    public:
 virtual  MEMORY get_mem() {};
 string m_Name;
    
};


class MEM_16G : public MEMORY
{

    public:

    MEM_16G(string name){
        this->m_Name = name;
    cout << "Memory Name is " << m_Name << endl;
    }

    MEMORY  get_mem() {
        return *this;
    };

};




class Computer
{

    public :

    void set_cpu(CPU * cpu){
        this->cpu = cpu;
    }

    void set_mem(MEMORY *  mem){
        this->mem = mem;
    }

    CPU * get_cpu(){
        return this->cpu;
    }

    MEMORY * get_mem(){
        return this->mem;
    }

    private:
    CPU * cpu;
    MEMORY *  mem;


};

class MyComputer : public Computer
{

    string display_info(){
        string info = "CPU is " + get_cpu()->m_Name + " , " + "memory is " + get_mem()->m_Name;
    }
};

int main(){

    Computer c;

    CPU * cpu = new INTEL_CPU("intel i7 core") ;
    MEMORY * mem = new MEM_16G("16G Sdisk");
    c.set_cpu(cpu);
    c.set_mem(mem);

}