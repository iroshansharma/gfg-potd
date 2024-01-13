/*

Author : Roshan Sharma
Date : 12/01/2024
Problem : Insertion Sort for Singly Linked List
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/insertion-sort-for-singly-linked-list/1


*/

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




// } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/
class Solution
{
    public:
    Node* insertionSort(struct Node* head_ref)
    {
        vector<int> v;
        while(head_ref->next!=NULL){
            v.push_back(head_ref->data);
            head_ref = head_ref->next;
        }
        v.push_back(head_ref->data);
        
        sort(v.begin(), v.end());
        Node* p = new Node(0);
        head_ref = p;
        for(int i = 0; i < v.size()-1; i++){
            head_ref->data = v.at(i);
            head_ref->next = new Node(0);
            head_ref = head_ref->next;
        }
        head_ref->data = v.at(v.size()-1);
        return p;
    }
    
};

//{ Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}
// } Driver Code Ends
