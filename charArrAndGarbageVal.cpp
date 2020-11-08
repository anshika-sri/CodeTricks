#include <iostream>
using namespace std;

int main() {

    //warning: character constant too long for its type
    
    // char name1 = 'anshika1';
    
    // char name2[2];
    // name2 = 'anshika2';
    
    //error: initializer-string for array of chars is too long
    
    // char name3[8] = "anshika3";
    // cout<<name3;
    
    //positive scenarios
    
    char name3[9] = "anshika3";
    cout<<"never read with garbage: "<<name3<<endl;
    
    char name4[] = "anshika4"; //includes the '\0'
    cout<<"never read with garbage: "<<name4<<endl; 
    
    char name5[] = {'a', 'n', 'Z'}; //doesnot includes the '\0' and may read //garbage
    cout<<"may read with garbage: "<<name5<<endl; 
    
    char name6[] = {'a', 'n', 'Z', '\0'};
    cout<<"may read with garbage: "<<name5<<endl; 
    cout<<"never read with garbage: "<<name6<<endl; 

    return 0;
}

*******IO*********
never read with garbage: anshika3
never read with garbage: anshika4
may read with garbage: anZ
may read with garbage: anZanZ
never read with garbage: anZ
