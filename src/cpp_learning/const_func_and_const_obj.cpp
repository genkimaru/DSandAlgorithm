#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

/**
 * @brief  常函数 和 常对象
 * 
 * 常函数：在函数名后面接上　ｃｏｎｓｔ来表示。　
 *        其设计目的在于提示编译器，该函数不可以修改成员变量。
 * 
 * 常对象： 在对象定义的时候使用const来表示。设计目的在于常对象无意修改成员变量，
 *         因此，常对象只可以调用 常函数，不可调用 其他函数。
 * 
 */
class Person
{

public:
    int showAge() const
    {

        // 常函数内部， this被赋予了 const Person *  const this 的性质。
        // this-> age = 100 ;  error
        // this = NULL ; error
        return this->age;
    }

    string showName()
    {
        return this->name;
    }

private:
    int age;
    mutable string name;
};

int main()
{
    // 常对象可以调用常函数，但不可以访问非常函数。
    const Person *p = new Person;
    p->showAge();
    // p->showName();  error

    const Person p2;
    p2.showAge();
    // p2.showName();   error
}
