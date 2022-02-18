#include <iostream>
 
using namespace std;
 

/**
 * 函数返回值的类型后面 加入&   ， 返回 返回值的引用
 * 函数的形式参数的类型后面加入 &   传入 传入参数的引用
 * 
 * 函数返回值类型后面加入 * ， 返回指针的情况，返回的需要是个地址值。
 */
int a = 123;

int fun1(){
return a;
}


// 在函数前加入一个& ， 可以用 &函数名（） 的方式获取返回值地址。
int & fun2(){
return a;
}

// 通过这两个函数，可以看出参数名称和类型中间加入一个& 的用处。
// 如果加入了一个& ，在值传递的过程中， 实参和形参是同一份
int fun4(int & input){
   cout << "input = " << & input  << endl;
   input = 0;
   return input;
}



//指针函数，返回指针类型，所以返回值需要是一个引用，也就是地址。
int  * fun3(){
   return &a;
}

int main ()
{

// 实参的地址
   cout << "实参的地址 &a = " << &a <<  endl;

   // 经过普通函数的处理返回，返回的是一个拷贝
   int r1 = fun1();
   cout << "经过 fun1后的返回值地址 " << &r1 << endl;

   //经过 int & func2()处理后 ， 返回的是原来实参
   int r2 = fun2();
   cout << "fun2 = " << r2 << endl;
   cout << "&fun2（） = " << &fun2() << endl;

// 经过  int * func3()处理后，返回原来实参的地址。
   int * r3 = fun3();
   cout << "fun3返回值 " << r3 << endl;
   cout << "* fun3() " << * r3 << endl;

}