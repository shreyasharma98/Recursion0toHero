#include<iostream>
using namespace std;
void helper(int n,int idx,int opening,int closing, char* output)
{
    if(idx == 2*n)
    {
        output[idx] = '\0';
        cout<<output<<endl;
        return;
    }
    if(opening < n)
    {
        output[idx] = '(';
        helper(n,idx+1,opening+1,closing,output);
    }
    if(closing < opening)
    {
        output[idx] = ')';
        helper(n,idx+1,opening,closing+1,output);
    }
}
void printWellFormedParanthesis(int n){
   char *output = new char[100];
   helper(n,0,0,0,output);
}

int main()
{
    int n;
    cin>>n;
    printWellFormedParanthesis(n);
    return 0;
}
