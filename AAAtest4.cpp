#include <iostream>
#include <string>
using namespace std;

// 成员函数为常函数， 也就意味着 this指向的成员变量无法更改。
// 相当于  const object * this

class Person
{

public:
   // 静态成员变量
   static int personCount;

   Person();
   Person(string name, int age);

   ~Person();
   //常函数
   string getName() const;
   int getAge() const;

private:
   string name;
   mutable int age;
};

Person::Person(string s, int age)
{
   this->name = s;
   this->age = age;
   Person::personCount++;
};

Person::~Person()
{
   cout << "Person is being deleted" << endl;
};

string Person::getName() const
{
   // this->name = "aaa";
   return this->name;
};

int Person::getAge() const
{
   this->age = 30;
   return this->age;
};

// 这行不能放在main中
int Person::personCount = 0;

main()
{

   Person p("abc", 10);
   cout << "Person getName is called " << p.getName() << endl;

   const Person p2 = Person("jack", 80);

   cout << "p2 name  " << p2.getName() << endl;
   cout << "p2 age  " << p2.getAge() << endl;

   cout << "personCount " << Person::personCount << endl;

   return 0;
}