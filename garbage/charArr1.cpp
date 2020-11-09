
#include <iostream>
using namespace std;

void stringTestArr(char add[]) {
    cout<<add<<endl;
}

void stringTestPtr(char *add) {
    cout<<add<<endl;
}


int main() {

  char ch[1];
  cin>>ch;
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


iam>8bits
ch: iף���
&ch: 0x7ffff6c4a3d7
ptr: iף���
&ptr: 0x7ffff6c4a3d8
*ptr: i
ptr[0]: i
iף���
iף���

iam8bits
ch: i�����
&ch: 0x7ffefef8a7e7
ptr: i�����
&ptr: 0x7ffefef8a7e8
*ptr: i
ptr[0]: i
i�����
i�����


\n
ch: \���I�
&ch: 0x7ffe49ccf0e7
ptr: \���I�
&ptr: 0x7ffe49ccf0e8
*ptr: \
ptr[0]: \
\���I�
\���I�





