//BONUS : do it in one pass
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int HasPairSum(vector<int> a,int sum)
{
    unordered_set<int> s;
    for(auto& x: a)
    {
        int temp = sum - x;
        if(temp >=0 && s.find(temp) != s.end())
            return 1;
        s.insert(x);
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
}