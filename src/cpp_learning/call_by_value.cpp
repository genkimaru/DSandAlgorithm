
#include<iostream>
#include<string>

using namespace std;


// 通过这两个函数，可以看出参数名称和类型中间加入一个& 的用处。
// 如果加入了一个& ，在值传递的过程中， 实参和形参是同一份
int fun( int & input){
   cout << "&input = " << & input  << endl;
   input = 0;
   return input;
}

int fun2(const int & input){
   cout << "&input = " << & input  << endl;
//    input = 0;     // error
   return input;
}



int main(){
    int a = 10;
    cout << "&a = " << & a  << endl;
    int r = fun(a);
    cout << "a = " << a  << endl;
}