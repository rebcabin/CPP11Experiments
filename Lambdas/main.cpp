//
//  main.cpp
//  Lambdas
//
//  Created by Reb Cabin on 2/18/13.
//  Copyright (c) 2013 Reb Cabin. All rights reserved.
//

// even_lambda.cpp
// compile with: cl /EHsc /nologo /W4 /MTd

#include <algorithm>
#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

int main()
{
    // Create a vector object that contains 10 elements.
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }
    
    // Count the number of even numbers in the vector by
    // the for_each function and a lambda.
    int evenCount = 0;
    for_each
    (  v.begin()
     , v.end()
     , [&evenCount] (int n) {
            cout << n;
            if (n % 2 == 0) {
                cout << " is even " << endl;
                ++evenCount;
            } else {
                cout << " is odd " << endl;
            }
        });
    
    // Print the count of even numbers to the console.
    cout << "There are " << evenCount
         << " even numbers in the vector." << endl;
    
    auto myTup = make_tuple(1, "a");
    cout << get<0>(myTup) << get<1>(myTup);
}