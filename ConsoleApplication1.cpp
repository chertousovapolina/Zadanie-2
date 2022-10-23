// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    int A;
    int d=1;
    cin >> A;
    int tmp = A;
    int n = 0;
    while (tmp > 0) {
        tmp /= 10;
        n++;
    }
    cout << "n = " << n << endl;
    // 10 = 1*10^1
    // 1 = 1*10^0
    //1000000 = 1*10^6;
    // 123 /100
    int r = 1;
    tmp = A;
    for (int i = 0; i < n; i++)
    {
        d *= 10;
    }
    while (tmp > 0) {
        tmp = A;
        d /= 10; // 1000 100 10 1
        
        tmp /= d;
        cout << tmp % 10 << " ";
  }
    


}

