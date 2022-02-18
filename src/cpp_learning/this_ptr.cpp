#include<iostream>
#include<string>

using namespace std;


class Person{
public :

Person(int age){
this->age = age;
}

Person & addAge(int num){
this->age += num;
return *this;  // 如果没有加这个，默认就返回自身对象
}

int getAge(){

    return this->age;
}

private:
int age;


} ;


int main(){


Person p(50);

p.addAge(10).addAge(10).addAge(10);
cout<< "p age : "<<  p.getAge() <<endl;
}