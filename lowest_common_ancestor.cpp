#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

class treenode{
    public:
        int data;
        treenode* left;
        treenode* right;

        treenode(int val){
            data =val;
            left=nullptr;
            right=nullptr;
        }
};

treenode* insertion(treenode* root, int i,int n, vector <int> vec){
    if(i<n){
        treenode* node = new treenode(vec[i]);
        root = node;

        root->left = insertion(root->left,((i*2)+1),n,vec);
        root->right = insertion(root->right,((i*2)+2),n,vec);
    }
    return root;
}

int lca(treenode* node,int p,int q){
    if(node==nullptr){
        return INT_MIN;
    }
    else if((node->data == p||(node->data ==q))){
        return node->data;
    }
    int left = lca(node->left,p,q);
    int right = lca(node->right,p,q);
    if(left!=INT_MIN&&right!=INT_MIN){
        return node->data;
    }
    if(left!=INT_MIN){
        return node->left->data;
    }
    if(right!=INT_MIN){
        return node->right->data;
    }
}

using namespace std;

int main(){
    //enter the array in the code:
    vector <int> vec;
    vec={3,5,1,6,2,0,8,NULL,NULL,7,4};
    int p,q,n;
    n=vec.size(); 
    cout<<"Array entered in the code(0 means NULL): ";
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }  
    cout<<"\nEnter the two nodes to find the lowest common ancestor: ";
    cin>>p>>q;

    treenode* root = insertion(root,0,vec.size(),vec);
    
    int ans= lca(root,p,q);
    cout<<ans;
    return 0;
}