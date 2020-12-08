#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{   
    std::vector< char > lubi;
    std::list<Human>::reverse_iterator it;
    for(it;it<people.rbegin();it++){
        *it.birthday();
        if(*it.isMonster()){
            lubi.push_back('y');
        }else
        {
           lubi.push_back('n');
        }
        
    };

}
