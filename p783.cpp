#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x) ,left(NULL),right(NULL){}
};
/*
my algo sttrrategy:
since this is a bst ..the min diff that can happen is between an node and its left andd right child 
so everytime i am traversing the tree and taking the int diff and pushing it 
to the vector and sorting the vector to see the result 
*/
int minDiffInBST(TreeNode* root) {
        vector<int> arr;
        while(root!=NULL)
        {
            int diff;
           if(root->left!=NULL)
           {
               diff=abs(root->val-(root->left)->val);
               arr.push_back(diff);
           }
            if(root->right!=NULL)
            {
                diff=abs(root->val -(root->right)->val);
                arr.push_back(diff);
            }
            //now either traverse to find min element O(N) time or sort it and return the first eleemnt --O(logn) time
            sort(arr.begin(),arr.end());
            
        }
        return arr[0];
    }
//PROBELM : TLE ...try to optimise it more 


int main()
{
    //fill this up later 
}