#include<iostream>
using namespace std;

//TO CHECK WHETHER STRING IS ROTATED TWO TIMES OR NOT ?

//Function to rotate string clockwise 
void rotateClockwise(string &s){

char c=s[s.size()-1];
int index=s.size()-2;

while(index>0){
    s[index+1]=s[index];
    index--;
}
s[0]=c;

}


//Function to rotate string Anticlockwise 
void rotateAnticlockwise(string &s){
    char c=s[0];
    int index=1;

    while(index<s.size()-1){
      s[index-1]=s[index];
      index++;
    }
s[s.size()-1]=c;

}


int main(){

string str1="amazon";      //ORIGINAL STRING
string str2="azonam";      //ROTATED STRING

string clockwise,anticlockwise;

//To Rotate string clockwise
clockwise=str1;

rotateClockwise(clockwise);
rotateClockwise(clockwise);

if(clockwise==str2){
cout<<"yes";
return 0;
}


anticlockwise=str1;

rotateAnticlockwise(anticlockwise);
rotateAnticlockwise(anticlockwise);


if(anticlockwise==str2){
    cout<<"Yes";
    return 0;
}
else
cout<<"No";

    return 0;
}