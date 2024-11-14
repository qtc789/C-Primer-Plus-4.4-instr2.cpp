// C++ Primer Plus 4.4 instr2.cpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name;\n";
    cin.getline(name,ArSize);
    cout << "Enter your favorite dessert;\n";
    cin.getline(dessert,ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you," << name << " .\n";

    return 0;
}
