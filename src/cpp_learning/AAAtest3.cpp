#include <iostream>
 
using namespace std;
 

int a = 123;

int fun1(){
return a;
}


// 在函数前加入一个& ， 可以用 &函数名（） 的方式获取返回值地址。
int & fun2(){
return a;
}

//指针函数，返回指针类型，所以返回值需要是一个引用，也就是地址。
int  * fun3(){
   return &a;
}



// 通过这两个函数，可以看出参数名称和类型中间加入一个& 的用处。
// 如果加入了一个& ，在值传递的过程中， 实参和形参是同一份
int fun4(int & input){
   cout << "input = " << & input  << endl;
   input = 0;
   return input;
}


int  fun5(int input){
   cout << "input = " << & input  << endl;
   return input;
}


const int *  fun6(){
   return &a;
}

int main ()
{

   cout << "&a = " << &a <<  endl;
   int r1 = fun1();
   cout << "fun1 = " << &r1 << endl;
   // cout << "fun1 = " << &fun1() << endl;
   cout << "fun2 = " << fun2() << endl;
   cout << "fun2 = " << &fun2() << endl;


   cout << "fun3 = " << fun3() << endl;
   cout << "fun3 = " << *fun3() << endl;

   int input = 321;
   cout << "input = " << & input  << endl;
    cout << "fun4 = " << fun4(input) << endl;
    cout << "input = " <<  input  << endl;

   //  cout << "fun5 = " << fun5(input) << endl;

   // 不可变的指针， 常量指针。
   const int * p ;
   p =  fun6();
   int d = 100;
   // * p = d ; // error
   p =  &d;

   cout << "fun6 = " << * p << endl;


}