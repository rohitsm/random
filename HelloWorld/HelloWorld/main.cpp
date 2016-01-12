//
//  main.cpp
//  HelloWorld
//
//  Created by Rohit Menon on 19/9/15.
//  Copyright © 2015 Rohit Menon. All rights reserved.
//

#include <iostream>
using namespace std;

int countOccurences(char ch, string s);

int main() {
    
    int count = countOccurences('c', "character");
    cout << "count: " << count <<  endl;
    
}

int countOccurences(char ch, string s){
    int count = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == ch){
            count++;
        }
    }
    return count;
}