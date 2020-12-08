#include <iostream>
#include<vector>
#include<list>
#include<string>
#include"Human.hpp"

using namespace std;

int main()
{   //Zad6
    //string name;
    //vector<Human> grupa;
    //while(1){
    //    cout<<"Podaj imie:";
    //    cin>>name;
    //    
    //    if(name.compare("pop")!=0){
    //        Human osoba{name, 20, true, true};
    //        grupa.emplace_back(move(osoba));
    //        cout<<"dodano osobe do grupy.\n";
    //        
    //    } else if(name.compare("pop")==0 && grupa.size()!=0) {
    //        grupa.pop_back();
    //        cout<<"Usunieto osobe z grupy.\n";
    //    };
    //    
    //    for(int i=0;i<grupa.size();i++){
    //        cout<<grupa[i].getName()<<"\n";
    //    };
//
    //}
    list<int> dupa;

    dupa.push_back(1);
    dupa.push_back(2);
    cout<<&dupa.front()<<"\n";
    cout<<&dupa.back();

}
