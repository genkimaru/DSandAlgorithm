#include <iostream>
using namespace std;
 
class Distance
{
   private:
      int feet;             // 0 到无穷
      int inches;           // 0 到 12
   public:
      // 所需的构造函数
      Distance(){
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i){
         feet = f;
         inches = i;
      }

      //编译器默认的赋值操作。
    //   void operator=(const Distance &D )
    //   { 
    //      feet = D.feet;
    //      inches = D.inches;
    //   }

// 自己复写的赋值操作
    void operator=(const Distance &D )
      { 
        
      }
      // 显示距离的方法
      void displayDistance()
      {
         cout << "F: " << feet <<  " I:" <<  inches << endl;
         cout << "&F: " << &feet <<  " &I:" <<  &inches << endl;
      }
      
};




int main()
{
   Distance D1(11, 10), D2(5, 11);
 
   cout << "First Distance : "; 
   D1.displayDistance();
   cout << "Second Distance :"; 
   D2.displayDistance();
 
   // 使用赋值运算符
   D1 = D2;
   cout << "First Distance :"; 
   D1.displayDistance();
 
   return 0;
}