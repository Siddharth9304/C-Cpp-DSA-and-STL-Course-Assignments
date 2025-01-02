#include<iostream>
#define DUPLICATE_VALUE 2
using namespace std;

struct node 
{
    node *left;
    int item;
    node *right;

    node(int data):item(data),left(nullptr),right(nullptr){}
};

class BST
{
    private:
        node *root;
    protected:
        void preOrderTraverse(node *);
        void inOrderTraverse(node *);
        void postOrderTraverse(node *);
    public:
        BST();
        bool isEmpty();
        void insert(int);
        void preOrderTraverse();
        void inOrderTraverse();
        void postOrderTraverse();
        void del(int);
        node* search(int);
        ~BST();
};
BST::BST()
{
    root = nullptr;
}
bool BST::isEmpty()
{
    return !root;
}
void BST::insert(int data)
{
    if(root)
    {
        node *temp = root;
        while(true)
            if(data == temp->item)
                throw DUPLICATE_VALUE;
            else if(data < temp->item)  
                if(temp->left)
                    temp = temp->left;
                else
                {
                    temp->left = new node(data);
                    break;
                }
            else
                if(temp->right)
                    temp = temp->right;
                else
                {
                    temp->right = new node(data);
                    break;
                } 
    }
    else
        root = new node(data);
}
void BST::postOrderTraverse()
{
    if(root)
    {
        if(root->left)
            postOrderTraverse(root->left);
        if(root->right)
            postOrderTraverse(root->right);
        cout << root->item << " ";
    }
}
void BST::postOrderTraverse(node *temp)
{
    if(temp->left)
        postOrderTraverse(temp->left);
    if(temp->right)
        postOrderTraverse(temp->right);
    cout << temp->item << " ";
}
void BST::preOrderTraverse()
{
    if(root)
    {
        cout << root->item << " ";
        if(root->left)
            preOrderTraverse(root->left);
        if(root->right)
            preOrderTraverse(root->right);
    }
}
void BST::preOrderTraverse(node *temp)
{
    cout << temp->item << " ";
    if(temp->left)
        preOrderTraverse(temp->left);
    if(temp->right)
        preOrderTraverse(temp->right);
}
void BST::inOrderTraverse()
{
    if(root)
    {
        if(root->left)
            inOrderTraverse(root->left);
        cout << root->item << " ";
        if(root->right)
            inOrderTraverse(root->right);
    }
}
void BST::inOrderTraverse(node *temp)
{
    if(temp->left)
        inOrderTraverse(temp->left);
    cout << temp->item << " ";
    if(temp->right)
        inOrderTraverse(temp->right);
}
node* BST::search(int val)
{
    node *temp = root;
    while(temp)
        if(val == temp->item)
            return temp;
        else if(val < temp->item)
            temp = temp->left;
        else
            temp = temp->right;
    return nullptr;
}
void BST::del(int val)
{
    node *temp1 = nullptr;
    node *temp2 = root;  
    while(temp2)
        if(val == temp2->item)
        {
            if(temp2->left)
                if(temp2->right)
                {
                    node *prePar = temp2;
                    node *pre = temp2->left;
                    while(pre->right)
                    {
                        prePar = pre;
                        pre = pre->right;
                    }
                    temp2->item = pre->item;
                    if(pre->left)
                    {
                        if(prePar != temp2)
                            prePar->right = pre->left;
                        else
                            prePar->left = pre->left;
                        delete pre;
                    }
                    else
                    {
                        delete pre;
                        if(prePar != temp2)
                            prePar->right = nullptr;
                        else
                            prePar->left = nullptr;
                    }
                }
                else
                {
                    if(temp1)
                        if(val < temp1->item)
                            temp1->left = temp2->left;
                        else
                            temp1->right = temp2->left;
                    else
                        root = root->left;
                    delete temp2;
                }
            else 
                if(temp2->right)
                {
                    if(temp1)
                        if(val < temp1->item)
                            temp1->left = temp2->right;
                        else
                            temp1->right = temp2->right;
                    else
                        root = root->right;
                    delete temp2;
                }
                else
                {
                    delete temp2;
                    if(temp1)
                        if(val < temp1->item)
                            temp1->left = nullptr;
                        else
                            temp1->right = nullptr;
                    else
                        root = nullptr;
                }
            break;
        }
        else if(val < temp2->item)
        {
            temp1 = temp2;
            temp2 = temp2->left;
        }
        else
        {
            temp1 = temp2;
            temp2 = temp2->right;
        }
}
BST::~BST()
{
    while(root)
        del(root->item);
}



int main()
{
    BST T;
    T.insert(10);
    T.insert(15);
    T.insert(25);
    T.insert(12);
    T.insert(70);
    T.insert(40);
    T.insert(36);
    T.insert(90);
    T.insert(7);
    T.insert(5);
    T.insert(6);
    T.insert(20);
    T.insert(13);
    T.insert(11);
    T.postOrderTraverse();
    T.del(70);
    T.del(25);
    T.del(5);
    cout << endl;
    T.postOrderTraverse();

}