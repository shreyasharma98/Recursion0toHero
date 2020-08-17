#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string>* helper(int n,int idx,int open,int close,vector<string>* arr,char* output)
{
    if(idx == 2*n)
    {
        output[idx] = '\0';
        arr->push_back(output);
        return arr;
    }

    if(open < n)
    {
        output[idx] = '(';
        helper(n,idx+1,open+1,close,arr,output);
    }
    if(close < open)
    {
        output[idx] = ')';
        helper(n,idx+1,open,close+1,arr,output);
    }
    return arr;
}
vector<string>* findParenthesis(int n)
{
    vector<string>* V = new vector<string>();
    char *output = new char[100];
    return helper(n,0,0,0,V,output);
}
int main()
{
    int n;
    cin>>n;
    vector<string>* V = findParanthesis(n);
    for(int i =0;i<V->size();i++)
    {
        cout<<V->at(i)<<endl;
    }
    return 0;
}
