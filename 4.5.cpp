#include <iostream>

using namespace std;

int sum(const int numbers[], const int numbersLen)
{
    int sum=0;
    for (int i=0; i<numbersLen; ++i)
    {
        sum+= numbers[i];
    }
    return sum;
}

int main()
{
    const int numbers []={1,2,3,4,5};
    cout <<sum(numbers,5)<< endl;
    return 0;
}
