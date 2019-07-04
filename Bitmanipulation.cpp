//
//  main.cpp
//  CheckYourLoveStatus
//
//  Created by Emmanuel Idehen on 6/8/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    
    int x, y = 0;

    cout << "Enter a number"<<endl;
    cin >> x;
    cout <<"Enter a second number";
    cin >> y;
    if (!(!x)&y <= 10)
    {
        cout << "here i am  ";
        
    }else if(x & (!y) >= 11)
    {
        cout << "Not right value ";
    }else
    {
        cout <<"Thank u!";
    }
    
    
    
    
    return 0;
}
