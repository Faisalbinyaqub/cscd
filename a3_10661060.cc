#include <iostream>

using namespace std;

int main()
{
    int grade;
    cout << " Please enter your mark : ";
    cin >> grade;
    if(grade>=80){
     cout << "   A - Excellent";
    }else
    if(grade>=75){
    cout<<"   B+ - Very good";
    }else
    if(grade>=70){
    cout<<"   B - Good";
    }else
    if(grade>=65){
    cout<<"   C+ - Fairly good";
    }else
    if(grade>=60){
    cout<<"   C - Average";
    }else
    if(grade>=50){
    cout<<"   D - Below average";
    }else
    if(grade>=0){
    cout<<"   E - Pass";
    }else
    cout <<"   F - Failed";


    return 0;
}
