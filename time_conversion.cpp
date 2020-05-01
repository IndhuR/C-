#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;char n,m;
    int hour;
    getline(cin,s);
    hour=((int)s[0]-48)*10+((int)s[1]-48);
    if(s[8]=='P'&&hour!=12){
    hour+=12;
    s[0]=(char)(hour/10+48);
    s[1]=(char)(hour%10+48);
  }
  if(hour==12&&s[8]=='A'){
      s[0]='0';
      s[1]='0';
  }
  for(int i=0;i<8;i++)
  cout<<s[i];
  return 0;

}
