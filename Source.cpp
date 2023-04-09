/*You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?*/
#include<iostream>
using namespace std;


class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2)
            return n;
        int x = 1, y = 2;
        for (int i = 3; i < n; i++)
        {
            int temp = y;
            y += x;
            x = temp;
        }
        return (x + y);



    }
};

int main()
{
    Solution x;
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << x.climbStairs(num) << endl;
    return 0;
}
