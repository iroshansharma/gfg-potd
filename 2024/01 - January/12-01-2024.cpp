/*

Author : Roshan Sharma
Date : 12/01/2024
Problem : Reverse First K elements of Queue
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1


*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// User function Template for C++

class Solution
{
    public:
    
    void reverse_k_elements(queue<int> &q ,int k){
        if(k==0)
            return;
        
        int num = q.front();
        q.pop();
        reverse_k_elements(q,k-1);
        
        q.push(num);
    }
    
    queue<int> modifyQueue(queue<int> q, int k) {
        reverse_k_elements(q,k);    
        int rem = q.size()-k;       
        
        while(rem--){               
            int num = q.front();
            q.pop();
            q.push(num);           
        }
        return q;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends
