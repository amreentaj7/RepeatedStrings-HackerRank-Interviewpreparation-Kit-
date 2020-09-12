#include <iostream>

using namespace std;

long repeatedstrings(string s,long n){
int len = s.length();
long count[len]={0};
if (s[0]=='a')
count[0]=1;

for (int i=1;i<=len;i++)
{
count[i]=count[i-1];
if (s[i]=='a')
count[i]+=1;
}
long k = n/len;
long remainder = (n%len == 0)?0:count[n%len -1];
long totalcount = k*count[len-1]+remainder;
return totalcount;
}

int main()
{
string s;
cin>>s;

long n;
cin>>n;

cout<<repeatedstrings(s,n);

return 0;
}
