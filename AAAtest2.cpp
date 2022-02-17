#include <iostream>
 
using namespace std;
 
void swap(int a , int b){
 int tmp = a ;
  a = b;
  b = tmp;
}

void swap2(int *a , int *b){
    int tmp = * a ;
  *a = *b;
  *b = tmp;
}

int main ()
{
   int a = 10;
   int b = 20 ;

   swap(a , b);
   cout << "a = " << a << " b= " << b<< endl;


cout << "&a = " << &a << " &b= " << &b << endl;
   swap2(&a , &b);
      cout << "a = " << a << " b= " << b<< endl;
   cout << "&a = " << &a << " &b= " << &b<< endl;

}