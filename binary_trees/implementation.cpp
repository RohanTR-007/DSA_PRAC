#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left=NULL;
        right=NULL;
    }
};
void tree(Node *root, vector<int> &arr, int ind)
{
    if (ind >= arr.size())
    {
        return;
    }
    int l = ind * 2 + 1;
    if (l < arr.size())
    {
        Node *left = new Node(arr[l]);
        root->left = left;
        tree(root->left, arr, l);
    }
    int r = ind * 2 + 2;
    if (r < arr.size())
    {
        Node *right = new Node(arr[r]);
        root->right = right;
        tree(root->right, arr, r);
    }
}
Node *createTree_Recursive(vector<int> &arr)
{
    Node *root = new Node(arr[0]);
    Node *tmp = root;
    tree(tmp, arr, 0);
    return root;
}

Node* createTree_Iterative(vector<int> &arr)
{
    queue<Node*>q;
    int n=arr.size();
    Node *root = new Node(arr[0]);
    q.push(root);
    for(int i=0;i<n;++i)
    {
        int l  = 2*i+1;
        int r = 2*i+2;
        Node *tmp = q.front();
        q.pop();
        if(l<n)
        {
            Node *left = new Node(arr[l]);
            q.push(left);
            tmp->left=left;
        }
        if(r < n)
        {
            Node *right = new Node(arr[r]);
            q.push(right);
            tmp->right=right;
        }
    }
    return root;
}

void preorder(Node *root)
{
    if(root == NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


int main()
{
    vector<int>v={1,2,3,4,8,5};
    Node* root = createTree_Iterative(v);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout << endl;
    postorder(root);
    return 0;
}