#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{


    bitset<1>set1;   //First bitset
    bitset<2>set2;   //Second "
    set2[1]=1;
    bitset<3>set3;   //Third "
    set3[1]=1;
    set3[2]=1;
    bitset<4>set4;    //fourth "
    set4[1]=1;
    set4[2]=1;
    set4[3]=1;
    bitset<5>set5;    //Fifth "
    set5[1]=1;
    set5[2]=1;
    set5[3]=1;
    set5[4]=1;
    bitset<6>set6;     //Sixth "
    set6[1]=1;
    set6[2]=1;
    set6[3]=1;
    set6[4]=1;
    set6[5]=1;


     int t,i;
    string str;
    char arr[10];
    getline(cin,str);
    int fre[26];
    for(int i=0;i<26;i++)
    {
        fre[i]=0;
    }
    for(int j=0;j<str.length();j++)
    {
        if(str[j]>'a' && str[j]<'z')
        {
            fre[str[j]-97]++;
        }
    }

 /*   cout<<"Frequency of each character:"<<endl;
    for(int i=0;i<26;i++)
    {
        if(fre[i] !=0)
        {
            printf("%c=%d\n",(i+97),fre[i]);
        }
    }
*/
for(t=0;t<10;t++)
{
    int m=0;
  for(i=0;i<26;i++)
   {
     if(m<fre[i])
       m=fre[i];
    }
   for(i=0;i<26;i++)
    {
     if(fre[i]==m)
        {
          arr[t]=i+97;
          fre[i]=NULL;
         }
     }
}
/*for(t=0;t<10;t++)
cout<<arr[t]<<endl;
*/
for(int S=0;S<str.length();S++)
{
    if(str[S]==arr[0])
     cout<<set1;
     else if(str[S]==arr[1])
     cout<<set2;
      else if(str[S]==arr[2])
     cout<<set3;
      else if(str[S]==arr[3])
     cout<<set4;
      else if(str[S]==arr[4])
      cout<<set5;
      else if(str[S]==arr[5])
      cout<<set6;
      else
      cout<<str[S];
}
    return 0;
}






















