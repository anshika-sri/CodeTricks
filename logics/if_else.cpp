/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


using namespace std;

int main()
{
    cout<<"Hello World";
        unordered_map<string, int> map;
    
    string str;
    getline(cin, str, '.');
    
    string token = "";
         for(char c : str) {
            if(isalpha(c)) {
                token += tolower(c);
            }
            if(token  != "") { //THIS IS NOT ELSE IF, THEN WORD COUNT IS NOT MAINTAINED, BUT CHAR COUNT MAINTAINED :/
               if(map.count(token)  == 0) {
                    map[token] = 1; }
                else { map[token]++; }
                
                token = "";
            }
        }

for(auto i : map) {
    cout<<i.first<<" "<<i.second;
}


    return 0;
}


****IO*****

input:

ans , ANs , : sri sri ans
. anshi


output:

i 2r 2s 5a 3n 3


