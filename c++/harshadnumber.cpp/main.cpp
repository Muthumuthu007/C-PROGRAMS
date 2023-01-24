// C++ implementation of above approach
#include<iostream>
using namespace std;

string checkHarshad(int n)
{
    
    // Converting integer to string
    string st = to_string(n);
    
    // Initialising sum to 0
    int sum = 0;
    int length = st.length();

    // Traversing through the string
    for(char i : st)
    {
        
        // Converting character to int
        sum = sum + (i - '0');
    }
    
    // Comparing number and sum
    if (n % sum == 0)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

// Driver Code
int main()
{
    int number = 44;
    
    // Passing this number to get result function
    cout << checkHarshad(number) << endl;
}

// This code is contributed by rrrtnx


