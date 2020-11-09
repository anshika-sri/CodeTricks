#include <iostream>
using namespace std;

void stringTestArr(char add[]) {
    cout<<add<<endl;
}

void stringTestPtr(char *add) {
    cout<<add<<endl;
}


int main() {

  char ch[] = "CharacterArray";
  char *c = ch;

  cout<<"ch: "<<ch<<endl;
  cout<<"&ch: "<<&ch<<endl;
  
  cout<<"ptr: "<<c<<endl;
  cout<<"&ptr: "<<&c<<endl;
  cout<<"*ptr: "<<*c<<endl;
  cout<<"ptr[0]: "<<c[0]<<endl;
  
  stringTestArr(ch);
  stringTestPtr(c);

  return 0;
}

********IO**************
ch: CharacterArray
&ch: 0x7ffda26bc7a9
ptr: CharacterArray
&ptr: 0x7ffda26bc7a0
*ptr: C
ptr[0]: C
CharacterArray
CharacterArray
