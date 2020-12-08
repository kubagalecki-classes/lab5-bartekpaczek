#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{   
       std::vector< char > lubi;
    auto it = people.rbegin();
    for(it; it!=people.rend(); ++it){
        it->birthday();
        
        if(it->isMonster()){
            lubi.push_back('y');
        }else{
           lubi.push_back('n');
        }
        
    };
    return lubi;
}
