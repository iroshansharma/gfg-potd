"""

Author : Roshan Sharma
Date : 16/01/2024
Problem : Sequence of Sequence
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/sequence-of-sequence1155/1


"""

#User function Template for python3

class Solution:
    def numberSequence(self, m, n):
        # code here
        dp = [[0] * (m + 1) for _ in range(n + 1)]

        # Base case: there is 1 way to create a sequence of length 0
        for i in range(m + 1):
            dp[0][i] = 1

        # Dynamic Programming to compute the number of sequences
        for i in range(1, n + 1):
            for j in range(1, m + 1):
                # For each position (i, j), we have two options:
                # 1. Include the current number (j) in the sequence
                # 2. Exclude the current number and consider the possibilities from the previous position (i-1, k) where k is any number such that k <= j // 2
                dp[i][j] = dp[i][j - 1] + dp[i - 1][j // 2]

        # The total number of sequences is the sum of all possibilities for a sequence of length n
        total_sequences = dp[n][m]

        return total_sequences




#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range (t):
        arr = input().split()
        m = int(arr[0])
        n = int(arr[1])
        
        ob = Solution()
        print(ob.numberSequence(m, n))
# } Driver Code Ends