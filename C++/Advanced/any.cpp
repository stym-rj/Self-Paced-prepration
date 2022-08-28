#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr{3,5,3,6,4,3,1,6};
    // int na[]={3,6,2,6,4,2,1,8};
    sort(arr.begin(), arr.end(), 
            [](int a, int b)
                {return a>b; }
            );
}