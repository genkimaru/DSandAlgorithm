#include <iostream>
#include <string>

using namespace std;

/**
 * @brief 常量指针  和 指针常量。
 * 
 * const <type> * 
 * <type> * const 
 * 
 * @return int 
 */
int main()
{

    int a = 10;
    int c = 20;

    //常量指针  指针指向的值不可以改
    const int *p1 = &a;
    // * p1 = 20 ; // error

    p1 = &c;

    //指针常量   指针地址不可以改
    int *const p2 = &a;
    *p2 = c;
    // p2 = &c // error

    const int * const p3 = &a;

    // p3 = &c;   // error
    // * p3 = c;  //error

    return 0;
}