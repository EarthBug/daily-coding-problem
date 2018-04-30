#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    vector<int> solution;
    int input;
    while (cin >> input)
        a.emplace_back(input);
    int product = 1;
    for(int i = 0; i < a.size(); i++)
    {
        solution[i] = product;
        product *= a[i];
    }
    for(int i = a.size()-1; i >= 0; i--)
    {
        solution[i] *= product;
        product *= a[i];
    }
    for(auto& x:solution)
    cout << x << " ";
    return 0;
}