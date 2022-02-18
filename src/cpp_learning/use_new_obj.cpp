#include <iostream>
#include <string>
using namespace std;


class Person{

public:
Person(){
    cout<<"无参构造函数 is called"<<endl;
}


Person(string name){
    m_Name = name;
    cout<< this->m_Name <<"构造函数 is called"<<endl;
}

~Person(){

    cout<< this->m_Name <<"析构函数 is called"<<endl;
}


string getName(){
return this->m_Name;

}

private:

string  m_Name;

};

int main(){


// new 出来的对象需要一个指针类型的来接收。 
// new出来需要手动显式delete来删除对象释放内存
Person * person = new Person("Jack");

delete person;


// 这种方式生成的对象不是一个指针。不使用后自动删除释放内存。
Person p2("kevin");

Person * p3 ;
p3 = &p2;


cout << p2.getName() << endl;
cout << p3->getName() << endl;



}