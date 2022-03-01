#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 函数对象，复写函数operator()
class MyPrint
{
public:
    void operator()(int s)
    {
        cout << "myprint: " << s << endl;
    }
};
// 将函数对象作为引用参数传递过去，
void myprint_for_vector(vector<int> v, MyPrint &myprint)
{
    vector<int>::iterator bg = v.begin();
    vector<int>::iterator ed = v.end();
    for (; bg != ed; bg++)
    {
        myprint(*bg);
    }
}

// 一元谓词 返回bool的函数对象

class IsEven
{
public:
    bool operator()(int i)
    {
        if (i % 2 == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    MyPrint myprint;
    int s = 100;
    myprint(s);

    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    myprint_for_vector(v, myprint);
    

    vector<int>::iterator it = find_if(v.begin(), v.end(), IsEven());

    if (it == v.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << *it << endl;
    }

    return 0;
}