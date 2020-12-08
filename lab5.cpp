#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;
    cout<<"Size: "<<a.size()<<"\nCapacity: "<<a.capacity();
    for(int i=0;i<100;i++){
        a.emplace_back(i);
        cout<<"\n\nSize: "<<a.size()<<"\nCapacity: "<<a.capacity();
        cout<<"\nAddress: "<<&a[0];
    }
}
