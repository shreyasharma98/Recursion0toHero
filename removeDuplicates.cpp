/*
Remove Duplicates
Level EASY
Given a string S, remove consecutive duplicates from it recursively.

Sample Input 1 :
aabccba
Sample Output 1 :
abcba
*/
#include<iostream>
using namespace std;
void removeConsecutiveDuplicates(char *input) {
    if(input[0] == '\0')
        return;

    removeConsecutiveDuplicates(input+1);
    if(input[0] == input[1])
    {
        for(int i = 0;input[i]!='\0';i++)
        {
            input[i]=input[i+1];
        }
    }

}
int main()
{
    char *input = new char[100];
    cin.getline(input,100);
    removeConsecutiveDuplicates(input);
    cout<<input;
    return 0;
}
