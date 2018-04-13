#include <iostream>

using namespace std;

int sum( const int x, const int y) {
    return x + y;
 }

double sum( const double x, const double y) {
    return x + y;
}

int main()
{
    cout<<sum(4,8)<<endl;
    cout<<sum(4,8);
    return 0;
}
