#include<iostream>
using namespace std;

class Arr {

    public : 

    void SingleDuplicate();
    void DoubleDuplicate();
};

void Arr::SingleDuplicate () {
    // Duplicate elemtents in one array 
     int size;
    cout<<"enter size pf array"<<endl;
    cin>>size;
     int no[size];
    cout<<"ENter array"<<endl;
    for (int i = 0; i<=size ; i++){
        cin>>no[i];
    }

     for (int i = 0 ; i<=size ; i++)
     {
        for (int j = i + 1 ; j<=size ; j++)
        {
            if (no[i]==no[j])
            {
                cout<<"Duplicate elements "<<no[i]<<endl;
        
            }
             
        }
        
     }
}

void Arr ::DoubleDuplicate () {
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    int arr[size];
    int arr1[size];
    cout<<"enter two array"<<endl;

    cout<<"enter 1st array"<<endl;
    for (int i = 0 ; i<= size ; i++){
        cin>>arr[i];
    }
    cout<<"enter 2nd array"<<endl;
        for (int j = 0 ; j<=size ; j++){
            cin>>arr1[j];   
        }

    for (int i = 0 ; i<=size ;i++){
        for (int j = 0 ; j <=size ; j++){
            if (arr[i]==arr1[j])
        cout<<"simliar elements are  "<<arr[i]<<""<<endl;
    }
    }
}

int main () {
    
    Arr a;
   a.SingleDuplicate();
    a.DoubleDuplicate();
     return 0;

}