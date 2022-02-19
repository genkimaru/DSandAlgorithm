#include <iostream>
#include <string>
using namespace std;


class NameType{
public:
NameType(){

     cout << "NameType 构造函数 " << endl;
}

~NameType(){

     cout << "NameType 析构函数 " << endl;
}
}
;

class Animal
{
public:
    Animal()
    {
        cout << "animal 构造函数 " << endl;
    }

   virtual ~Animal() = 0;
};


Animal :: ~Animal(){

      cout << "animal 析构函数 " << endl;
}


class Cat : public Animal
{

public:


    Cat()
    {
        this->m_Name = new NameType;
        cout << "cat 构造函数 " << endl;
    }

    ~Cat()
    {
        delete this->m_Name;     // 在析构函数中释放堆内存中的成员变量。
        cout << "cat 析构函数 " << endl;
    }

private:
    NameType *  m_Name;
};



int main()
{
Animal * animal = new Cat();

delete animal;


}