
#include <iostream>
#include "lib.h"

using namespace std;

bool lettera(char &a){
    if (a >=65 && a <=90 )
    {
        a+= 32;
        return true;
    }
    else if(a >=97 && a<=122 )
    {
        a-=32;
        return true;
    }
    else
       return false;
    

}

