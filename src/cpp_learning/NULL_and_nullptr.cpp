#include <iostream>
#include <string>
#include <tuple>

using namespace std;

class Test
{
public:
    // overload  func
    void func(string s)
    {
        cout << "func1" << endl;
    }

    void func(string *s)
    {
        cout << "func2" << endl;
    }
};

int main()
{
    Test test;
    test.func(NULL);
    // nullptr 是 c++ 11 添加的。
    test.func(nullptr);

// typedef 定义一个类型。
// https://www.cplusplus.com/reference/tuple/tuple/?kw=tuple
    typedef tuple<int, float> new_tuple;
    new_tuple t (1, 2.3 );
    return 0;
}