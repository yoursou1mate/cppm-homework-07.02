//
//  main.cpp
//  cppm-homework-07.02
//
//  Created by a1ex on 11/24/23.
//

#include <iostream>

#define SUB (a,b) ((a) - (b))

int main(int argc, const char * argv[])
{
   
        int a = 6;
        int b = 5;
        int c = 2;
        std::cout << SUB (a, b) << std::endl;
        std::cout << SUB (a, b) * c << std::endl;
        std::cout << SUB (a, b + c) * c << std::endl;
    
    return 0;
}
