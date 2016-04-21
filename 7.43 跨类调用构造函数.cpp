#include <iostream>
#include <string>

using namespace std;

class NoDefault
{
public:
    //NoDefault () = default;
    //当创建了构造函数编译器将不会生成默认构造函数了
    //如果别的类定义此类的对象将是未定义的
    NoDefault (int a) : a_(a) {  }
    int a_ = 0;
};

class C
{
public:
    //使用C的带参数构造函数参数调用NoDefaolt构造函数初始化aa
    //此时的C类也没有默认构造函数 
    C (int i = 10) : aa(i) {  }
    NoDefault aa;
};

int main ()
{
    C a;
    cout << a.aa.a_ << endl;
    return 0;
}