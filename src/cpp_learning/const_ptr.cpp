#include<iostream>
#include<string>

using namespace std;


int main(){

    int a = 10;
    int c = 20;
//常量指针  指针的地址可以改，地址指向的值不可以改
const int * p1 = &a;
// * p1 = 20 ; // error

 p1 = &c;

int * const p2 = &a;
* p2 = c;
// p2 = &c // error

const int * const p3 = &a;

// p3 = &c;   // error
// * p3 = c;  //error


cout << "p1 " << *p1 <<endl;

// 指针常量 

return 0;
}