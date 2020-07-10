/*
Generate all parenthesis
Level HARD
Given n pairs of parentheses, write a function to generate and print all combinations of well-formed parentheses. That is, you need to generate all possible valid set of parenthesis that can be formed with given number of pairs.
Input format :
Integer n
Output format :
Print all possible valid parenthesis in different lines
Note: Order in which different combinations of well-formed parentheses are printed in different lines doesn't matter.
Constraints :
1 <= n <= 10
Sample Input :
3
Sample Output :
((()))
(()())
(())()
()(())
()()()

*/

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
