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
    for(auto& x:a)
        product *= x;
    for(int i=0; i<a.size(); i++)
        solution.emplace_back(product/a[i]);
    for(auto& x:solution)
    cout << x << " ";
    return 0;
}