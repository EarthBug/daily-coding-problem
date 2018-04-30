#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    bool flag = false;
    int input;
    while(cin >> input)
        if(input>0)
            s.insert(input);
    int i;int k;
    set<int> :: iterator it;
    int cont=1;
    for(it=s.begin(); it!=s.end();it++)
    {
        int p=*it;
        if(p!=cont)
        {
            flag=true;
            break;
        }
        cont++;
    }
    cout<<cont<<endl;
    return 0;
}