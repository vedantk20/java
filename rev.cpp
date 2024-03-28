#include<iostream> 
#include<cstring>
using namespace std;
class Reverse {

public :

void revnum(); 
void revstr();

};

void Reverse :: revnum() {
 int num;
    cout<<"Enter Number to reverse "<<endl;
    cin>> num;   
    int rem, sum=0;
    while (num != 0) {
        rem = num % 10;
        num = num/10;
        sum = sum*10+rem;
    }
    cout<<"reverse numebrs are :- "<<sum<<endl;
}

void Reverse :: revstr () {
    char str[20];
    int len, length=0;
    cout<<"Enter string to reverse :- "<<endl;
   
    gets(str);
    len = strlen(str);
    cout<<"you entered :- "<<str<<endl;
    for (int i = len-1 ; i >=0 ; i--){
      cout<<str[i];
    }
}

int main () {
    Reverse r;
    r.revstr();
    cout<<endl;
    r.revnum();

    return 0;
}