#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//function to check for pair
int HasPairSum(vector<int> a,int sum)
{
    //sort the vector first
    sort(a.begin(),a.end());
    int l,r;
    l=0;
    r=a.size()-1;
    while(l<r)
    {
        if(a[l]+a[r] == sum) //if pair found
            return 1;
        else if(a[l] + a[r] < sum)// pair sum is less than required
            l++;
        else//pair sum is more than required
            r--;
    }
    return 0;
}

int main() {
    int sum;
    cin >> sum;
    vector<int> a;
    int input;
    while(cin >> input)
        a.emplace_back(input);
    if(HasPairSum(a,sum)==1)
        cout << "yes";
    else
        cout << "no";
    return 0;
}