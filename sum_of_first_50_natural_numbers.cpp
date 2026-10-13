//name:Muhammad zikriya muhammad farooq
//  Registration no:L1F25BSCS0986
// Assignement # 1
#include <iostream>
using namespace std;
int main()
{
    int n = 50;
    int sum = 0;
    for (int i = 1; i <= 50; i++)
    {
        sum =sum + i;
    }
    cout << "Sum of first 50 natural numbers: " << sum << endl;
    int S= n * (n + 1) / 2;

    cout << "Sum using formula n(n+1)/2: "
        << S << endl;
    return 0;
}