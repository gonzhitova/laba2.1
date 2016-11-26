// 2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include <iostream>
 
int fib(int n)
{
    if(n < 3)
        return 1;
    return fib(n - 2) + fib(n - 1);
}
 
int main()
{
    int n = 0;
    std::cout << "vvodite";
    std::cin  >> n;
 
    std::cout << "Result: " << fib(n);
	system ("pause");
    return 0;
}

