#include <iostream>

using namespace std;
/* I certify that I, Ishaq Sidiq wrote this code myself */
int main()
{
    int num = 2;
    int sum = 0;
    int average;
    while(num < 10000)
    {
        sum += num;
        num += 2;
    }
    average = sum / (10000 / 2);
    cout << average << endl;

    return 0;
}
