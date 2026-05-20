/*
Experiment 1: Binary Tree Insertion
Write a program to create a Binary Tree dynamically and insert nodes into the tree as
per user input. The program should allocate memory for each node at runtime and
maintain proper parent-child relationships between nodes.
*/

// #include <iostream>
// #include <queue>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;

//         Node(int val){
//             data = val;
//             left = NULL;
//             right = NULL;
//         }
// };

// Node* BTinsert(Node* root, int val){
//     Node* newNode = new Node(val);
//     if(root == NULL){
//         return newNode;
//     }

//     queue<Node*> q;
//     q.push(root);

//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();

//         if(temp->left == NULL){
//             temp -> left = newNode;
//             return root;
//         }else{
//             q.push(temp->left);
//         }

//         if(temp -> right == NULL){
//             temp->right = newNode;
//             return root;
//         }else{
//             q.push(temp->right);
//         }
//     }

//     return root;
// }

// void levelorder(Node* root){
//     if(root == NULL) return;

//     queue<Node*> q;
//     q.push(root);
//     while(!q.empty()){
//         Node* temp =  q.front();
//         q.pop();

//         cout<<temp -> data<<" ";

//         if(temp -> left != NULL){
//             q.push(temp -> left);
//         }
//         if(temp -> right != NULL){
//             q.push(temp -> right);
//         }
//     }

// }

// int main() {
//     Node* root = NULL;
//     int n, val;

//     cout<<"Enter number of nodes: ";
//     cin>>n;

//     for(int i=0; i<n; i++){
//         cout<<"Value: ";
//         cin>>val;
//         root = BTinsert(root, val);
//     }
    
//     cout<<"Traversal : ";
//     levelorder(root);

//     return 0;
// }


/*
Experiment 2: Binary Tree Traversal
Write a program to perform inorder, preorder, and postorder traversals on a Binary
Tree. Display the sequence of nodes visited in each traversal method.
*/

// #include <iostream>
// #include <queue>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;

//         Node(int val){
//             data = val;
//             left = NULL;
//             right = NULL;
//         }

// };

// Node* insert(Node* root, int val){
//     Node* newNode = new Node(val);
//     if(root == NULL){
//         return newNode;
//     }

//     queue<Node*> q;
//     q.push(root);

//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();

//         if(temp -> left == NULL){
//             temp -> left = newNode;
//             return root;
//         }
//         else{
//             q.push(temp->left);
//         }

//         if(temp -> right == NULL){
//             temp -> right = newNode;
//             return root;
//         }
//         else{
//             q.push(temp -> right);
//         }
//     }

//     return root;
// }

// void inorder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// void preorder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }

// void postorder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }



// int main() {
//     Node* root = NULL;
//     int n, val;
//     cout<<"Enter number of nodes: ";
//     cin>>n;

//     for(int i=0; i<n; i++){
//         cout<<"Value: ";
//         cin>>val;
//         root = insert(root, val);
//     }

//     cout<<"Inrder Traversal: ";
//     inorder(root);
//     cout<<endl;

//     cout<<"preorder Traversal: ";
//     preorder(root);
//     cout<<endl;

//     cout<<"postorder Traversal: ";
//     postorder(root);
//     cout<<endl;
    

//     return 0;
// }




/*
Experiment 3: Depth of Binary Tree
Write a program to calculate and display the depth (height) of a Binary Tree. The
height of the tree should be determined based on the maximum number of levels present
in the tree.
*/

// #include <iostream>
// #include <queue>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;

//         Node(int val){
//             data = val;
//             left = NULL;
//             right = NULL;
//         }

// };

// Node* insert(Node* root, int val){
//     Node* newNode = new Node(val);
//     if(root == NULL){
//         return newNode;
//     }

//     queue<Node*> q;
//     q.push(root);

//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();

//         if(temp -> left == NULL){
//             temp -> left = newNode;
//             return root;
//         }
//         else{
//             q.push(temp->left);
//         }

//         if(temp -> right == NULL){
//             temp -> right = newNode;
//             return root;
//         }
//         else{
//             q.push(temp -> right);
//         }
//     }

//     return root;
// }

// int height(Node* root){
//     if(root == NULL )return 0;

//     int leftht = height(root -> left);
//     int rightht = height(root -> right);

//     if(leftht > rightht){
//         return leftht + 1;
//     }
//     else{
//         return rightht + 1;
//     }
// }


// int main() {
//     Node* root = NULL;
//     int n, val;
//     cout<<"Enter number of nodes: ";
//     cin>>n;

//     for(int i=0; i<n; i++){
//         cout<<"Value: ";
//         cin>>val;
//         root = insert(root, val);
//     }

//     cout<<height(root)<<endl;
    

//     return 0;
// }



/*
Experiment 4: Display Leaf Nodes
Write a program to identify and display all leaf nodes of a Binary Tree. A leaf node is a
node that does not contain any left or right child.
*/

// #include <iostream>
// #include <queue>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;

//         Node(int val){
//             data = val;
//             left = NULL;
//             right = NULL;
//         }

// };

// Node* insert(Node* root, int val){
//     Node* newNode = new Node(val);

//     if(root == NULL){
//          return newNode;
//     }

//     queue<Node*> q;
//     q.push(root);

//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();

//         if(temp -> left == NULL){
//             temp->left = newNode;
//             return root;
//         }
//         else{
//             q.push(temp->left);
//         }

//         if(temp -> right == NULL){
//             temp -> right = newNode;
//             return root;
//         }
//         else{
//             q.push(temp -> right);
//         }
//     }
//     return root;

// }

// void displayleafNode(Node* root){
//     if(root == NULL){
//         return;
//     }

//     if(root->left == NULL && root -> right == NULL){
//         cout<<root->data<<" ";
//     }

//     displayleafNode(root->left);
//     displayleafNode(root->right);
// }


// int main() {

//     Node* root = NULL;
//     int n, value;

//     cout << "Enter number of nodes: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter value: ";
//         cin >> value;

//         root = insert(root, value);
//     }

//     cout << "\nLeaf Nodes are: ";
//     displayleafNode(root);

//     return 0;
// }




/*
Experiment 5: BST Insertion
Write a program to implement insertion operation in a Binary Search Tree (BST).
Insert nodes according to BST properties where values smaller than root are placed in
left subtree and greater values in right subtree.
*/

// #include <iostream>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;

//         Node(int val){
//             data = val;
//             left = NULL;
//             right = NULL;
//         }
// };
// Node* insert(Node* root, int val){
//     if(root == NULL){
//         return new Node(val);
//     }

//     if(val < root->data){
//         root -> left = insert(root->left, val);
//     }
//     else{
//         root -> right = insert(root->right, val);

//     }
//     return root;
// }

// void inorder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// int main() {
//     Node* root = NULL;
//     int n, val;
//     cout<<"Enter number of nodes: ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cout<<"Value : ";
//         cin>>val;
//         root = insert(root,val);
//     }
    
//     cout<<"Inorder traversal: ";
//     inorder(root);

//     return 0;
// }


/*
Experiment 6: BST Searching
Write a program to search a specified key in a Binary Search Tree. Display whether the
element is found or not along with its location in the tree.
*/

// #include <iostream>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;
//         Node(int val){
//             data = val;
//             left = NULL;
//             right = NULL;
//         }
// };

// Node* insert(Node* root, int val){
//     if(root == NULL){
//         return new Node(val);
//     }

//     if(val < root -> data ){
//         root -> left = insert(root -> left , val);
//     }
//     else{
//         root ->right = insert(root -> right, val);
//     }

//     return root;
// }

// bool Searching(Node* root, int val){
//     if(root == NULL) return false;

//     if(val == root -> data ) return true;

//     if(val < root -> data){
//         return Searching(root->left, val);
//     }
//     else{
//         return Searching(root -> right, val);
//     }

//     return false;
// }

// int main() {

//     Node* root = NULL;
//     int n, val;
//     cout<<"Enter number of nodes: ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cout<<"Values: ";
//         cin>>val;
//         root = insert(root, val);
//     }

//     int key;
//     cout<<"Enter key: ";
//     cin>>key;
//     cout<<Searching(root, key)<<endl;

//     return 0;
// }



/*
Experiment 7: BST Deletion
Write a program to delete a specified node from a Binary Search Tree. Handle all
possible deletion cases including:
• Deletion of leaf node
• Deletion of node with one child
• Deletion of node with two children
*/

// #include <iostream>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;
//         Node(int val){
//             data = val;
//             left = NULL;
//             right = NULL;
//         }
// };

// Node* insert(Node* root, int val){
//     if(root == NULL) return new Node(val);

//     if(val < root->data){
//         root->left = insert(root->left, val);
//     }

//     else{
//         root -> right = insert(root->right, val);
//     }

//     return root;
// }

// void inorder(Node* root){
//     if(root == NULL) return ;

//     inorder(root -> left);
//     cout<<root->data<<" ";
//     inorder(root -> right);
// }

// Node* minVal(Node* root){
//     while(root->left != NULL){
//         root = root->left;
//     }
//     return root;
// }

// Node* deleteNode(Node* root, int key){
//     if(root == NULL) return root;

//     // search
//     if(key < root->data){
//         root -> left = deleteNode(root->left, key);
//     }

//     else if(key > root -> data){
//         root -> right = deleteNode(root->right, key);
//     }

//     else{
//         // case 1: no child
//         if(root -> left == NULL && root -> right == NULL){
//             delete root;
//             return NULL;
//         }

//         // case 2: one child
//         else if(root->left == NULL){
//             Node* temp = root -> right;
//             delete root;
//             return temp;
//         }

//         else if(root -> right == NULL){
//             Node* temp = root -> left;
//             delete root;
//             return temp;
//         }

//         // case 3: two childs
//         else{
//             Node* temp = minVal(root->right);
//             root -> data = temp -> data;
//             root -> right = deleteNode(root->right, temp ->data);
//         }
//     }

//     return root;
// }


// int main() {

//     Node* root = NULL;
//     int n, val;
//     cout<<"Enter number of nodes : ";
//     cin>>n;

//     for(int i=0; i<n; i++){
//         cout<<"Value: ";
//         cin>>val;
//         root = insert(root, val);
//     }

//     cout<<"Inorder traversal: ";
//     inorder(root);
//     cout<<endl;
    
//     int key;
//     cout<<"Enter node to delete: ";
//     cin>>key;
    
//     root = deleteNode(root, key);
//     cout<<"Inorder traversal: ";
//     inorder(root);
//     cout<<endl;    

//     return 0;
// }



/*
Experiment 8: BST Level Wise Traversal
Write a program to perform Breadth First Search (Level Order Traversal) on a Binary
Search Tree and display nodes level by level from root to leaf nodes.
*/

// #include <iostream>
// #include <queue>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;
//         Node(int val){
//             data = val;
//             left = NULL;
//             right = NULL;
//         }
// };

// Node* insert(Node* root, int val){
//     if(root == NULL) return new Node(val);

//     if(val < root->data){
//         root->left = insert(root->left, val);
//     }

//     else{
//         root -> right = insert(root->right, val);
//     }

//     return root;
// }

// void levelwise(Node* root){
//     if(root == NULL) return;

//     queue<Node*> q;
//     q.push(root);

//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();
        
//         cout<<temp->data<<" ";

//         if(temp -> left != NULL){
//             q.push(temp->left);
//         }
//         if(temp -> right != NULL){
//             q.push(temp->right);
//         }
//     }
// }

// int main() {

//     Node* root = NULL;
//     int n, val;
//     cout<<"Enter number of nodes : ";
//     cin>>n;

//     for(int i=0; i<n; i++){
//         cout<<"Value: ";
//         cin>>val;
//         root = insert(root, val);
//     }   

//     cout<<"Level wise traversal: ";
//     levelwise(root);
    

//     return 0;
// }



/*
Experiment 9: Recursive BST Traversals
Write a program to perform recursive inorder, preorder, and postorder traversals on a
Binary Search Tree and display the traversal sequence.
*/


// #include <iostream>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;
//         Node(int val){
//             data = val;
//             left = NULL;
//             right = NULL;
//         }
// };

// Node* insert(Node* root, int val){
//     if(root == NULL) return new Node(val);

//     if(val < root->data){
//         root->left = insert(root->left, val);
//     }

//     else{
//         root -> right = insert(root->right, val);
//     }

//     return root;
// }

// void inorder(Node* root){
//     if(root == NULL) return ;

//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);

// }

// void preorder(Node* root){
//     if( root == NULL) return;

//     cout<<root -> data <<" ";
//     preorder(root->left);
//     preorder(root -> right);
// }

// void postorder(Node* root){
//     if( root == NULL) return;

//     postorder(root->left);
//     postorder(root -> right);
//     cout<<root -> data <<" ";
// }

// int main() {

//     Node* root = NULL;
//     int n, val;
//     cout<<"Enter number of nodes : ";
//     cin>>n;

//     for(int i=0; i<n; i++){
//         cout<<"Value: ";
//         cin>>val;
//         root = insert(root, val);
//     }   

//     cout<<"\ninorder traversal: ";
//     inorder(root);
//     cout<<"\npreorder traversal: ";
//     preorder(root);
//     cout<<"\npostorder traversal: ";
//     postorder(root);

//     return 0;
// }


/*
Experiment 10: Iterative BST Traversals
Write a program to perform iterative inorder, preorder, and postorder traversals on a
Binary Search Tree using stack data structure.
*/

// #include <iostream>
// #include <stack>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;
//         Node(int val){
//             data = val;
//             left = NULL;
//             right = NULL;
//         }
// };

// Node* insert(Node* root, int val){
//     if(root == NULL) return new Node(val);

//     if(val < root->data){
//         root->left = insert(root->left, val);
//     }

//     else{
//         root -> right = insert(root->right, val);
//     }

//     return root;
// }

// void inorder(Node* root){
//     if(root == NULL) return ;

//     stack<Node*> s;
//     Node* current = root;

//     while(current != NULL || !s.empty()){
//         while(current != NULL){
//             s.push(current);
//             current = current -> left;
//         }

//         current = s.top();
//         s.pop();

//         cout<<current -> data<< " ";
//         current = current -> right;

//     }
// }


// void preorder(Node* root){
//     if(root == NULL) return;

//     stack<Node*> s;
//     s.push(root);
//     while(!s.empty()){
//         Node* temp = s.top();
//         s.pop();

//         cout<<temp->data<<" ";
//         if(temp -> right != NULL){
//             s.push(temp->right);
//         }
//         if(temp -> left != NULL){
//             s.push(temp -> left);
//         }
//     }
// }

// void postorder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     stack<Node*> s1;
//     stack<Node*> s2;

//     s1.push(root);

//     while(!s1.empty()){
//         Node* temp = s1.top();
//         s1.pop();

//         s2.push(temp);

//         if(temp -> left != NULL){
//             s1.push(temp->left);
//         }
//         if(temp -> right != NULL){
//             s1.push(temp -> right);
//         }
//     }

//     while(!s2.empty()){
//         cout<<s2.top()->data<<" ";
//         s2.pop();
//     }

// }

// int main(){

//     Node* root = NULL;
//     int n, val;
//     cout<<"Enter number of nodes : ";
//     cin>>n;

//     for(int i=0; i<n; i++){
//         cout<<"Value: ";
//         cin>>val;
//         root = insert(root, val);
//     }   

//     cout<<"\nInorder traversal: ";
//     inorder(root);

//     cout<<"\npreorder traversal: ";
//     preorder(root);

//     cout<<"\npostorder traversal: ";
//     postorder(root);
//     return 0;
// }


/*
Experiment 11: Height Balanced BST
Write a program to determine whether a Binary Search Tree is height balanced or not.
A tree is considered height balanced if the difference between heights of left and right
subtrees for every node is not more than one.
*/

// #include <iostream>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;
//         Node(int val){
//             data = val;
//             left = NULL;
//             right = NULL;
//         }
// };

// Node* insert(Node* root, int val){
//     if(root == NULL) return new Node(val);

//     if(val < root->data){
//         root->left = insert(root->left, val);
//     }

//     else{
//         root -> right = insert(root->right, val);
//     }

//     return root;
// }

// int height(Node* root){
//     if(root == NULL){
//         return 0;
//     }

//     int leftht = height(root->left);
//     int rightht = height(root -> right);

//     if(leftht > rightht){
//         return leftht + 1;
//     }
//     else{
//         return rightht + 1;
//     }

// }

// bool isBalanced(Node* root){
//     if(root == NULL) return true;

//     int leftht = height(root->left);
//     int rightht = height(root->right);

//     int diff;

//     if(leftht > rightht){
//         diff = leftht - rightht;
//     }
//     else{
//         diff = rightht - leftht;
//     }

//     if(diff <= 1 && isBalanced(root->left) && isBalanced(root->right)) return true;

//     return false;
// }


// int main() {
//     Node* root = NULL;
//     int n, val;
//     cout<<"Enter number of nodes : ";
//     cin>>n;

//     for(int i=0; i<n; i++){
//         cout<<"Value: ";
//         cin>>val;
//         root = insert(root, val);
//     }   

//     string ans = isBalanced(root)?"true":"false";
//     cout<<ans<<endl;
    
//     return 0;
// }



/*
Experiment 12: Expression Tree Construction
Write a program to construct an Expression Tree from a given postfix expression
containing operators and operands. Store operators as internal nodes and operands as
leaf nodes.
*/

// #include <iostream>
// #include <stack>
// using namespace std;

// class Node{
//     public:
//         char data;
//         Node* left;
//         Node* right;
//         Node(char val){
//             data = val;
//             left = NULL;
//             right = NULL;
//         }
// };

// bool isOperator(char ch){
//     if(ch =='+' || ch =='-' || ch == '/' || ch == '*' || ch == '^') return true;
//     return false;
// }


// Node* constructTree(string postfix){
//     stack<Node*> s;
//     for(int i=0; i<postfix.length(); i++){

//         char ch = postfix[i];

//         if(ch == ' ') continue;

//         if(!isOperator(ch)){
//             Node* newNode = new Node(ch);
//             s.push(newNode);
//         }

//         else{
//             Node* newNode = new Node(ch);

//             Node* rightNode = s.top();
//             s.pop();

//             Node* leftNode = s.top();
//             s.pop();

//             newNode -> right = rightNode;
//             newNode -> left = leftNode;

//             s.push(newNode);
//         }

//     }

//     return s.top();

// }


// void inorder(Node* root){
//     if(root == NULL) return;

//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// int main() {
//     string postfix = "abc*+";

//     Node* root = constructTree(postfix);

//     cout<<"inorder Traversal: ";
//     inorder(root);
    

//     return 0;
// }

/*
Experiment 13: Recursive Expression Tree Traversal
Write a program to perform recursive inorder, preorder, and postorder traversals on an
Expression Tree and display the corresponding expressions.
*/

// #include<iostream>
// #include<stack>

// using namespace std;

// class Node{
//     public: 
//         char data;
//         Node* left;
//         Node* right;

//         Node(char val){
//             data = val;
//             left = NULL;
//             right = NULL;
//         }
// };

// bool isOperator(char ch){
//     if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^') return true;
//     return false;
// }

// Node* constructTree(string postfix){
//     stack<Node*> s;

//     for(int i=0; i<postfix.length(); i++){
//         char ch = postfix[i];

//         if(ch == ' ') continue;
//         if(!isOperator(ch)){
//             Node* newNode = new Node(ch);
//             s.push(newNode);
//         }
//         else{
//             Node* newNode = new Node(ch);

//             Node* rightNode = s.top();
//             s.pop();

//             Node* leftNode = s.top();
//             s.pop();

//             newNode->right = rightNode;
//             newNode->left = leftNode;

//             s.push(newNode);
//         }
//     }
//     return s.top();
// }

// void inorder(Node* root){
//     if(root == NULL) return;

//     inorder(root ->left);
//     cout<<root->data<<" ";
//     inorder(root -> right);
// }

// void preorder(Node* root){
//     if(root == NULL) return;

//     cout<<root->data<<" ";
//     preorder(root -> left);
//     preorder(root -> right);   
// }

// void postorder(Node* root){
//     if(root == NULL) return;

//     postorder(root -> left);
//     postorder(root -> right);   
//     cout<<root->data<<" ";
// }

// int main(){
//     string s = "ab+c*";

//     Node* root = constructTree(s);

//     cout<<"\nInorder Traversal :";
//     inorder(root);
//     cout<<"\npreorder Traversal :";
//     preorder(root);
//     cout<<"\npostorder Traversal :";
//     postorder(root);
//     cout<<endl;

//     return 0;
// }


/*
Experiment 14: Non-Recursive Expression Tree Traversal
Write a program to perform non-recursive traversals on an Expression Tree using stack
data structure.
*/

// #include<iostream>
// #include<stack>

// using namespace std;

// class Node{
//     public: 
//         char data;
//         Node* left;
//         Node* right;

//         Node(char val){
//             data = val;
//             left = NULL;
//             right = NULL;
//         }
// };

// bool isOperator(char ch){
//     if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^') return true;
//     return false;
// }

// Node* constructTree(string postfix){
//     stack<Node*> s;

//     for(int i=0; i<postfix.length(); i++){
//         char ch = postfix[i];

//         if(ch == ' ') continue;
//         if(!isOperator(ch)){
//             Node* newNode = new Node(ch);
//             s.push(newNode);
//         }
//         else{
//             Node* newNode = new Node(ch);

//             Node* rightNode = s.top();
//             s.pop();

//             Node* leftNode = s.top();
//             s.pop();

//             newNode->right = rightNode;
//             newNode->left = leftNode;

//             s.push(newNode);
//         }
//     }
//     return s.top();
// }


// void inorder(Node* root){
//     stack<Node*> s;
//     Node* current = root;

//     while(current != NULL || !s.empty()){
//         while(current != NULL){
//             s.push(current);
//             current = current -> left;
//         }

//         current = s.top();
//         s.pop();

//         cout<< current -> data <<" ";
//         current = current -> right;
//     }
// }

// void preorder(Node* root){
//     if(root == NULL) return;

//     stack<Node*> s;
//     s.push(root);

//     while(!s.empty()){
//         Node* temp = s.top();
//         s.pop();
//         cout<<temp->data<<" ";
//         if(temp -> right != NULL){
//             s.push(temp->right);
//         }
//         if(temp -> left != NULL){
//             s.push(temp->left);
//         }
//     }
// }

// void postorder(Node* root){
//     stack<Node*> s1;
//     stack<Node*> s2;

//     s1.push(root);

//     while(!s1.empty()){
//         Node* temp = s1.top();
//         s1.pop();

//         s2.push(temp);

//         if(temp->left != NULL){
//             s1.push(temp->left);
//         }
//         if(temp -> right != NULL){
//             s1.push(temp->right);
//         }
//     }

//     while(!s2.empty()){
//         cout<<s2.top()->data<<" ";
//         s2.pop();
//     }
// }

// int main(){
//     string s = "ab+c*";

//     Node* root = constructTree(s);

//     cout<<"\nInorder Traversal (infix Expression) :";
//     inorder(root);
//     cout<<"\npreorder Traversal (prefix Expression):";
//     preorder(root);
//     cout<<"\npostorder Traversal (postfix Expression):";
//     postorder(root);
//     cout<<endl;

//     return 0;
// }


/*
Experiment 15: AVL Tree Insertion
Write a program to insert nodes into an AVL Tree and automatically balance the tree
after each insertion operation using appropriate rotations such as LL, RR, LR, and RL
rotations.
*/

// #include <iostream>
// using namespace std;

// class Node{
//     public:
//         int data;
//         int height;
//         Node* left;
//         Node* right;
//         Node(int val){
//             data = val;
//             height = 1;
//             left = NULL;
//             right = NULL;
//         }
// };

// int getHeight(Node* root){
//     if(root == NULL) return 0;

//     return root -> height;
// }

// int maxVal(int a, int b){
//     return a>b?a:b;
// }

// int getBalanced(Node* root){
//     if(root == NULL) return 0;

//     return getHeight(root->left) - getHeight(root -> right);
// }



// // Right Rotation (LL Rotation)
// Node* rightRotation(Node* y){
//     Node* x = y -> left;
//     Node* T2 = x -> right;

//     x -> right = y;
//     y -> left = T2;

//     y -> height = maxVal(getHeight(y->left), getHeight(y -> right)) + 1;
//     x -> height = maxVal(getHeight(x->left), getHeight(x->right)) + 1;

//     return x;
// }


// // Left Rotation (RR Rotation)
// Node* leftRotation(Node* x){
//     Node* y = x->right;
//     Node* T2 = y -> left;

//     y -> left = x;
//     x -> right = T2;

//     x->height = maxVal(getHeight(x->left), getHeight(x->right)) + 1;
//     y->height = maxVal(getHeight(y->left), getHeight(y->right)) + 1;

//     return y;
// }



// Node* insert(Node* root, int val){
//     if(root == NULL){
//         return new Node(val);
//     }

//     if(val < root -> data){
//         root -> left = insert(root->left, val);
//     }
//     else if (val > root -> data){
//         root -> right = insert(root -> right, val);
//     }
//     else{
//         return root;
//     }

//     // update height
//     root -> height = 1 + maxVal(getHeight(root->left), getHeight(root -> right));

//     // get balance factor
//     int balance = getBalanced(root);

//     // LL Rotation
//     if(balance > 1 && val < root->left->data){
//         return rightRotation(root);
//     }

//     // RR Rotation
//     if(balance <-1 && val > root->right -> data){
//         return leftRotation(root);
//     }

//     // LR Rotation
//     if(balance>1 && val > root -> left -> data){
//         root -> left = leftRotation(root->left);
//         return rightRotation(root);
//     }

//     // RL Rotation
//     if(balance<-1 && val < root -> right->data){
//         root -> right = rightRotation(root->right);
//         return leftRotation(root);
//     }

//     return root;

// }

// void inorder(Node* root)
// {
//     if (root == NULL)
//     {
//         return;
//     }

//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }


// int main() {
//     Node* root = NULL;
//     int n, value;

//     cout << "Enter number of nodes: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter value: ";
//         cin >> value;

//         root = insert(root, value);
//     }

//     cout << "\nInorder Traversal of AVL Tree: ";
//     inorder(root);

//     return 0;
// }
// 6 10 20 30 40 50 25


/*
Experiment 16: DFS Traversal on Graph
Write a program to represent a graph using adjacency list and perform Depth First
Search (DFS) traversal starting from a specified vertex.
*/

// #include <iostream>
// #include <vector>
// using namespace std;

// void dfs(int vertex, vector<int> adj[], bool visited[]){
    
//     visited[vertex] = true;

//     cout<<vertex<<" ";

//     for(int i=0; i< adj[vertex].size(); i++){
//         int adjacentVertex = adj[vertex][i];
        
//         if(!visited[adjacentVertex]){
//             dfs(adjacentVertex, adj, visited);
//         }
//     }
// }


// int main() {
//     int vertex, edge;

//     cout<<"Enter number of vertex : ";
//     cin>>vertex;

//     cout<<"Enter number of edges : ";
//     cin>>edge;
    
//     vector<int> adj[vertex];

//     int u, v;

//     for(int i=0; i<edge; i++){
//         cout<<"Enter edge (u,v) : ";
//         cin>>u>>v;

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     bool visited[vertex];

//     for(int i =0; i<vertex; i++){
//         visited[i] = false;
//     }

//     int startingvertex;
//     cout<<"Enter the starting vetex: ";
//     cin>>startingvertex;

//     dfs(startingvertex,adj, visited);

//     return 0;
// }

// 5 5 0 1 0 2 1 3 1 4 2 4


/*
Experiment 17: BFS Traversal on Graph
Write a program to represent a graph using adjacency list and perform Breadth First
Search (BFS) traversal starting from a specified vertex.
*/

// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// void bfs(int startingvertex, vector<int> adj[], bool visited[]){
//     queue<int> q;

//     visited[startingvertex] = true;

//     q.push(startingvertex);

//     while(!q.empty()){

//         int vertex = q.front();
//         q.pop();

//         cout<<vertex<<" ";

//         for(int i=0 ; i<adj[vertex].size(); i++){
            
//             int adjacentVertex = adj[vertex][i];
//             if(!visited[adjacentVertex]){
//                 visited[adjacentVertex] = true;
//                 q.push(adjacentVertex);
//             }
//         }
//     }
// }

// int main() {
//     int vertex, edge;
//     cout<<"Enter number of vertex: ";
//     cin>>vertex;

//     cout<<"Enter number of edges: ";
//     cin>>edge;

//     vector<int> adj[vertex];
//     bool visited[vertex];

//     int u, v;

//     for(int i=0; i<edge; i++){
//         cout<<"Edge (u,v): ";
//         cin>>u>>v;

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     for(int i=0; i<vertex; i++){
//         visited[i] = false;
//     }

//     int startingVertex;
//     cout<<"Enter starting vertex: ";
//     cin>>startingVertex;

//     bfs(startingVertex, adj, visited);
//     cout<<endl;

//     return 0;
// }


/*
Experiment 18: Maximum Friends in Social Network
Write a program to represent a social network using graph data structure and
determine the user having maximum number of friends (maximum degree node).
*/

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {

//     int users, friendships;
//     cout<<"Enter number of users: ";
//     cin>>users;

//     cout<<"Enter number of friendships: ";
//     cin>>friendships;

//     vector<int> adj[users];

//     int u,v;

//     for(int i=0; i<friendships; i++){
//         cout<<"friendships (u,v): ";
//         cin>>u>>v;

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     // adjacent list
//     for(int i=0; i<users; i++){
//         cout<<"user "<<i<<" -> ";
//         for(int j=0; j<adj[i].size(); j++){
//             cout<<adj[i][j]<<",";
//         }
//         cout<<endl;
//     }

//     // max friend
//     int maxFriends = 0;
//     int userWithmaxFriend = 0;

//     for(int i=0; i<users; i++){
//         int degree = adj[i].size();
//         if(degree > maxFriends){
//             maxFriends = degree;
//             userWithmaxFriend = i;
//         }
//     }

//     cout<<"User : "<<userWithmaxFriend<<endl;
//     cout<<"friendships : "<<maxFriends<<endl;

//     return 0;
// }

// 5 6 0 1 0 2 1 2 1 3 1 4 3 4


/*
Experiment 19: Maximum and Minimum Comments
Write a program to store user information in a social network graph and identify users
having maximum and minimum number of comments.
*/

// #include <iostream>
// using namespace std;

// class User{
//     public:
//         string name;
//         int comment;
// };

// int main() {

//     int n;
//     cout<<"Enter number of user: ";
//     cin>>n;

//     User users[n];

//     for(int i=0; i<n; i++){
//         cout<<"User name: ";
//         cin>>users[i].name;

//         cout<<"Number of comments: ";
//         cin>>users[i].comment;
//     }

//     int maxComments = users[0].comment;
//     int minComments = users[0].comment;

//     string maxUsername = users[0].name;
//     string minUsername = users[0].name;

//     for(int i=0; i< n; i++){
//         if(users[i].comment > maxComments){
//             maxComments = users[i].comment;
//             maxUsername = users[i].name;
//         }

//         if(users[i].comment < minComments){
//             minComments = users[i].comment;
//             minUsername = users[i].name;
//         }
//     }

//     cout<<"\n\nUser with max Comments: \n";
//     cout<<"Name: "<<maxUsername<<endl;
//     cout<<"Comments: "<<maxComments<<endl;

//     cout<<"\n\nUser with min Comments: \n";
//     cout<<"Name: "<<minUsername<<endl;
//     cout<<"Comments: "<<minComments<<endl;

//     return 0;
// }
// 4 Alice 25 Bob 10 Charlie 40 David 5


/*
Experiment 22: Prim’s Algorithm
Write a program to find the Minimum Spanning Tree (MST) of a weighted undirected
graph using Prim’s Algorithm and display total minimum cost.
*/

// #include <iostream>
// using namespace std;

// const int inf = 9999;

// int main() {

//     int vertices;
//     cout<<"Enter number of vertices: ";
//     cin>> vertices;

//     int adj[vertices][vertices];
//     bool selected[vertices];

//     cout<<"Enter adjacency matrix: \n";

//     for(int i=0; i<vertices; i++){
//         for(int j=0; j<vertices; j++){
//             cin>>adj[i][j];

//             if(adj[i][j]==0 && i!=j){
//                 adj[i][j] = inf;
//             }
//         }
//     }

//     for(int i=0; i< vertices; i++){
//         selected[i] = false;
//     }

//     selected[0] = true;
//     int edge = 0;
//     int totalCost = 0;

//     cout << "\nEdges in Minimum Spanning Tree:\n";

//     while(edge < vertices-1){

//         int min = inf;
//         int x=0;
//         int y=0;
    
//         for(int i=0; i<vertices; i++){
//             if(selected[i]){
//                 for(int j=0; j<vertices; j++){
//                     if(!selected[j] && adj[i][j]<min){
//                         min = adj[i][j];
//                         x = i;
//                         y = j;
//                     }
//                 }
//             }
//         }

//         cout<<x<<" - "<<y<<" : " << adj[x][y]<<endl;
//         totalCost += adj[x][y];
//         selected[y] = true;
//         edge++;
//     }

//     cout<<"Total Min cost: "<<totalCost;

//     return 0;
// }

// 5 0 2 0 6 0 2 0 3 8 5 0 3 0 0 7 6 8 0 0 9 0 5 7 9 0


/*
Experiment 23: Kruskal’s Algorithm
Write a program to find the Minimum Spanning Tree (MST) of a weighted undirected
graph using Kruskal’s Algorithm and display selected edges with minimum cost.
*/


// #include <iostream>
// using namespace std;

// class Edge{
//     public:
//         int src;
//         int dst;
//         int wt;
// };

// int findParents(int parent[], int vertex){
//     while(parent[vertex] != vertex){
//         vertex = parent[vertex];
//     }
//     return vertex;
// }

// void sortEdge(Edge edges[], int edgeCount){
//     for(int i=0; i<edgeCount-1; i++){
//         for(int j=0; j<edgeCount-i-1; j++){
//             if(edges[j].wt > edges[j+1].wt ){
//                 Edge temp = edges[j];
//                 edges[j] = edges[j+1];
//                 edges[j+1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int vertice, edgeCount;
//     cout<<"Enter number of vertice: ";
//     cin>>vertice;

//     cout<<"enter number of Edges: ";
//     cin>>edgeCount;

//     Edge edges[edgeCount];
//     cout<<"Enter src, dst, wt: ";

//     for(int i=0; i<edgeCount; i++){
//         cin>>edges[i].src>>edges[i].dst>>edges[i].wt;
//     }

//     sortEdge(edges, edgeCount);

//     int parent[vertice];
//     for(int i=0; i<vertice; i++){
//         parent[i] = i;
//     }

//     int totalCost = 0;
//     int selectedEdge = 0;

//     int i=0;

//     while(selectedEdge < vertice-1){
        
//         Edge currentEdge = edges[i];

//         int sourceParent = findParents(parent, currentEdge.src);
//         int destinationParent = findParents(parent, currentEdge.dst);

//         // no cycle
//         if(sourceParent != destinationParent){
//             cout<<currentEdge.src<<" - "<<currentEdge.dst<<" : "<<currentEdge.wt<<endl;
//             totalCost += currentEdge.wt;

//             // union
//             parent[sourceParent] = destinationParent;
//             selectedEdge++;
//         }

//         i++;
//     }
    
//     cout<<totalCost<<endl;

//     return 0;
// }

// 4 5 0 1 10 0 2 6 0 3 5 1 3 15 2 3 4

// 5 0 10 0 30 100 10 0 50 0 0 0 50 0 20 10 30 0 20 0 60 100 0 10 60 0

/*
Experiment 24: Dijkstra Algorithm
Write a program to find the shortest path from a given source vertex to all other
vertices in a weighted graph using Dijkstra Algorithm.
*/

// #include <iostream>
// using namespace std;

// int minDist(int dist[], bool visited[], int n){
//     int min = INT_MAX;
//     int minindex = -1;
//     for(int i=0; i<n; i++){
//         if(!visited[i] && dist[i]<=min){
//             min = dist[i];
//             minindex = i;
//         }
//     }
//     return minindex;
// }




// int main() {

//     int vertice;
//     cout<<"Enter number of vertices: ";
//     cin>>vertice;

//     int adj[vertice][vertice];
//     int dist[vertice];
//     bool visited[vertice];

//     //initializing data
//     cout<<"Enter adjancy matrix: "<<endl;
//     for(int i=0; i<vertice; i++){
//         for(int j=0; j<vertice; j++){
//             cin>>adj[i][j];

//             if(adj[i][j]==0 && i!=j){
//                 adj[i][j] = INT_MAX;
//             }
//         }
//     }

//     for(int i=0; i<vertice; i++){
//         dist[i] = INT_MAX;
//         visited[i] = false;
//     }

//     int src;
//     cout<<"Source: ";
//     cin>>src;

//     dist[src] = 0;

//     for(int i=0; i< vertice-1; i++){

//         int u = minDist(dist,visited,vertice);
//         visited[u] = true;

//         for(int v = 0; v<vertice; v++){
//             if(!visited[v] && 
//                 adj[u][v]!=INT_MAX
//                 && dist[u]!=INT_MAX 
//                 && dist[u]+adj[u][v] < dist[v]){
//                 dist[v] = dist[u] + adj[u][v];
//             }
//         }
//     }

//     cout<<"\nMin Distance: \n";
//     for(int i=0; i<vertice; i++){
//         cout<<"vertice: "<<i<<" -> "<<dist[i]<<endl;
//     }

//     return 0;
// }


/*
Experiment 25: Bellman-Ford Algorithm
Write a program to find shortest paths from a source vertex using Bellman-Ford
Algorithm and detect the presence of negative weight cycles in the graph.
*/

// #include <iostream>
// using namespace std;

// class Edge{
//     public:
//         int src;
//         int dst;
//         int wt;
// };

// int main() {
//     int vertice, edges;

//     cout<<"Enter number of vertice: ";
//     cin>>vertice;

//     cout<<"Enter number of edges: ";
//     cin>>edges;

//     Edge graph[edges];

//     for(int i=0; i<edges; i++){
//         cin>>graph[i].src>>graph[i].dst>>graph[i].wt;
//     }

//     int dist[vertice];

//     for(int i=0; i<vertice; i++){
//         dist[i] = INT_MAX;
//     }

//     int starting;
//     cout<<"Enter starting vertex: ";
//     cin>>starting;

//     dist[starting] = 0;

//     for(int i=0; i<vertice-1; i++){
//         for(int j=0; j<edges; j++){
            
//             int u = graph[j].src;
//             int v = graph[j].dst;
//             int w = graph[j].wt;

//             if(dist[u] != INT_MAX &&
//             dist[u] + w < dist[v]){
//                 dist[v]= dist[u] + w;
//             }
//         }
//     }

//     bool negativeCycle = false;

//     for(int i=0; i<edges; i++){
//         int u = graph[i].src;
//         int v = graph[i].dst;
//         int w = graph[i].wt;

//         if(dist[u] != INT_MAX &&
//             dist[u] + w < dist[v]){
//                 negativeCycle = true;
//                 break;
//             }
//     }

//     if(negativeCycle){
//         cout<<"Negative cycle exists!!"<<endl;
//     }
//     else{
//         cout<<"No negative Cycle!!!"<<endl;
//     }

//     return 0;
// }

// 5 8 0 1 -1 0 2 4 1 2 3 1 3 2 1 4 2 3 2 5 3 1 1 4 3 -3
// 4 5 0 1 1 1 2 -1 2 3 -1 3 1 -1 0 3 4

/*
Experiment 26: Floyd-Warshall Algorithm
Write a program to find shortest paths between all pairs of vertices in a weighted graph
using Floyd-Warshall Algorithm.
*/

// #include <iostream>
// using namespace std;

// int main() {

//     int vertice;
//     cout<<"enter number of vertice: ";
//     cin>>vertice;

//     int adj[vertice][vertice];

//     // initialize
//     cout<<"Enter adjancy matrix: \n";
//     for(int i=0; i<vertice; i++){
//         for(int j=0; j<vertice; j++){
//             cin>>adj[i][j];

//             if(adj[i][j]==0 && i!=j){
//                 adj[i][j] = INT_MAX;
//             }
//         }
//     }

//     // floyd warshall
//     for(int k=0; k<vertice; k++){
//         for(int i=0; i<vertice; i++){
//             for(int j=0; j<vertice; j++){
//                 if(adj[i][k] != INT_MAX &&
//                    adj[k][j] != INT_MAX && 
//                    adj[i][k] + adj[k][j] < adj[i][j]){
//                     adj[i][j] = adj[i][k] + adj[k][j];
//                    }
//             }
//         }
//     }


//     // output
//     for(int i=0; i<vertice; i++){
//         for(int j=0; j<vertice; j++){
//             if(adj[i][j] == INT_MAX){
//                 cout<<"INF"<<" ";
//             }
//             else{
//                 cout<<adj[i][j]<<" ";
//             }
//         }cout<<endl;
//     }

//     return 0;
// }

// 4 0 5 0 10 0 0 3 0 0 0 0 1 0 0 0 0


/*
Experiment 27: Maximum Marks using Heap
Write a program to read marks of students and construct a Max Heap to determine the
maximum marks obtained in the class.
*/


// #include <iostream>
// using namespace std;

// void heapify(int arr[], int n, int i){

//     int largest = i;
//     int left = 2*i + 1;
//     int right = 2*i + 2;

//     if(left < n && arr[left] > arr[largest]){
//         largest = left;
//     }

//     if(right < n && arr[right]> arr[largest]){
//         largest = right;
//     }

//     // swap
//     if(largest != i){
//         int temp = arr[i];
//         arr[i] = arr[largest];
//         arr[largest] = temp;

//         heapify(arr, n, largest);
//     }

// }

// void buildMaxHeap(int arr[], int n){
//     for(int i=n/2-1; i>=0; i--){
//         heapify(arr,n,i);
//     }
// }

// int main() {

//     int n;
//     cout<<"Enter number of students : ";
//     cin>>n;

//     int marks[n];
//     cout<<"Enter marks: \n";
//     for(int i=0; i<n; i++){
//         cin>>marks[i];
//     }

//     // max heap build
//     buildMaxHeap(marks,n);

//     for(int i=0; i<n; i++){
//         cout<<marks[i]<<" ";
//     }cout<<endl;

//     cout<<"Max marks: "<<marks[0]<<endl;
    

//     return 0;
// }

// 7 45 90 76 88 60 95 72

/*
Experiment 28: Minimum Marks using Heap
Write a program to read marks of students and construct a Min Heap to determine the
minimum marks obtained in the class.
*/

// #include <iostream>
// using namespace std;

// void heapify(int arr[], int n, int i){

//     int smallest = i;
//     int left = 2*i + 1;
//     int right = 2*i + 2;

//     if(left < n && arr[left]<arr[smallest]){
//         smallest = left;
//     }

//     if(right < n && arr[right] < arr[smallest]){
//         smallest = right;
//     }

//     // swap
//     if(smallest != i){
//         int temp = arr[i];
//         arr[i] = arr[smallest];
//         arr[smallest] = temp;

//         // affect subtree
//         heapify(arr, n, smallest);
//     }
// }

// void buildMinHeap(int arr[], int n){
//     for(int i=n/2-1; i>=0; i--){
//         heapify(arr,n,i);
//     }
// }

// int main() {

//     int n;
//     cout<<"Number of students : ";
//     cin>>n;

//     int marks[n];
//     cout<<"Enter marks: ";
//     for(int i=0; i<n; i++){
//         cin>>marks[i];
//     }

//     // build heap
//     buildMinHeap(marks, n);

//     for(int i=0; i<n; i++){
//         cout<<marks[i]<<" ";
//     }cout<<endl;

//     cout<<"Min Marks; "<<marks[0];

//     return 0;
// }


/*
Experiment 29: Hash Table using Linear Probing
Write a program to implement a Telephone Book Database using Hash Table with
Linear Probing collision handling technique for storing and searching telephone
numbers efficiently.
*/

// #include <iostream>
// using namespace std;

// const int SIZE = 10;

// class Record{
//     public:
//         string name;
//         long long phone;
//         bool occupied;
//         Record(){
//             name = "";
//             phone = 0;
//             occupied = false;
//         }
// };


// int main() {

//     int n;
//     cout<<"Enter number of records: ";
//     cin>>n;

//     Record table[SIZE];

//     // insert

//     for(int i=0; i<n; i++){
//         string name;
//         long long phone;

//         cout<<"Enter name : ";
//         cin>>name;

//         cout<<"Enter phone no.: ";
//         cin>>phone;

//         int index = phone % SIZE;

//         while(table[index].occupied){
//             index = (index + 1) % SIZE;
//         }

//         table[index].name = name;
//         table[index].phone = phone;
//         table[index].occupied = true;
//     }

//     // display
//     for(int i=0; i<SIZE; i++){
//         if(table[i].occupied){
//             cout<<table[i].name<<" : "<<table[i].phone<<endl;
//         }
//         else{
//             cout<<"Empty\n";
//         }
//     }

//     // search
//     long long search;
//     cout<<"Enter phone no. to be search : ";
//     cin>>search;
//     bool found = false;

//     int index = search % SIZE;
//     int start = index;
//     while(table[index].occupied){
//         if(table[index].phone == search){
//             found = true;

//             cout<<"Found"<<endl;
//             break;
//         }
        
//         index = (index + 1) % SIZE;

//         if(index == start){
//             break;
//         }
//     }

//     if(!found){
//         cout<<"Record not found !!!"<<endl;
//     }


//     return 0;
// }

// 5 Amit 9876543210 Rahul 9123456780 Neha 9988776655 Priya 9876501234 Karan 9012345678


/*
Experiment 30: Hash Table using Chaining
Write a program to implement a Telephone Book Database using Hash Table with
Chaining collision handling technique and compare search efficiency.
*/

// #include <iostream>
// using namespace std;

// const int SIZE = 10;

// class Node{
//     public:
//         string name;
//         long long phone;
//         Node* next;

//         Node(string n, long long p){
//             name = n;
//             phone = p;
//             next = NULL;
//         }
// };

// int main() {

//     Node* table[SIZE];

//     for(int i=0; i<SIZE; i++){
//         table[i] = NULL;
//     }

//     int n;
//     cout<<"Enter number of record: ";
//     cin>>n;

//     // insert;
//     for(int i=0; i<n; i++){
//         string name;
//         long long phone;

//         cout<<"Enter name : ";
//         cin>>name;

//         cout<<"Enter phone : ";
//         cin>>phone;

//         int index = phone % SIZE;

//         Node* newNode = new Node(name, phone);
//         newNode -> next = table[index];
//         table[index] = newNode;
//     }

//     // display
//     for(int i=0; i<SIZE; i++){
//         Node* temp = table[i];
//         while(temp != NULL){
//             cout<<temp->name<<" : "<<temp->phone<<endl;
//             temp = temp->next;
//         }
//         cout<<"Empty"<<endl;
//     }

//     // search
//     long long search;
//     cout<<"Enter phone no. to search : ";
//     cin>>search;

//     int index = search % SIZE;
//     Node* temp = table[index];
//     bool found = false;
//     while(temp != NULL){
//         if(temp->phone == search){
//             found = true;
//             cout<<"found"<<endl;
//             break;
//         }
//         temp = temp ->next;
//     }

//     if(!found){
//         cout<<"Not found \n";
//     }
//     return 0;
// }



/*
Experiment 31: Merge Sort
Write a program to sort student credit records using Merge Sort technique and display
the sorted list in ascending order.
*/

// #include <iostream>
// #include <vector>
// using namespace std;

// // Merge Function
// void merge(vector<int> &arr, int s, int e) {
//     int mid = s + (e - s) / 2;

//     int l1 = mid - s + 1;
//     int l2 = e - mid;
//     int *first = new int[l1];
//     int *second = new int[l2];

//     int pt = s;
//     for (int i = 0; i < l1; i++) {
//         first[i] = arr[pt++];
//     }

//     pt = mid + 1;
//     for (int i = 0; i < l2; i++) {
//         second[i] = arr[pt++];
//     }

//     int index1 = 0;
//     int index2 = 0;
//     int i = s;
//     while (index1 < l1 && index2 < l2) {
//         if (first[index1] <= second[index2]) {
//             arr[i++] = first[index1++];
//         } else {
//             arr[i++] = second[index2++];
//         }
//     }

//     while (index1 < l1) {
//         arr[i++] = first[index1++];
//     }

//     while (index2 < l2) {
//         arr[i++] = second[index2++];
//     }

//     delete[] first;
//     delete[] second;
// }


// void mergeSort(vector<int> &arr, int s, int e) {
//     if (s >= e) return;

//     int mid = s + (e - s) / 2;
//     mergeSort(arr, s, mid);
//     mergeSort(arr, mid + 1, e);
//     merge(arr, s, e);
// }

// int main()
// {
//     int n;

//     cout << "Enter number of students: ";
//     cin >> n;

//     vector<int> credits(n);

//     cout << "Enter student credits:\n";

//     for (int i = 0; i < n; i++)
//     {
//         cin >> credits[i];
//     }

//     mergeSort(credits, 0, n - 1);

//     cout << "\nSorted Credit Records:\n";

//     for (int i = 0; i < n; i++)
//     {
//         cout << credits[i] << " ";
//     }

//     return 0;
// }

/*
Experiment 32: Quick Sort
Write a program to sort student credit records using Quick Sort technique and display
the sorted output.
*/

// #include <iostream>
// #include <vector>
// using namespace std;


// int partitionArray(vector<int> &arr, int s, int e) {
//     int pivot = arr[e];
//     int i = s - 1;

//     for (int j = s; j < e; j++) {
//         if (arr[j] <= pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[e]);
//     return i + 1;
// }

// void quickSort(vector<int> &arr, int s, int e) {
//     if (s >= e) return;

//     int p = partitionArray(arr, s, e);
//     quickSort(arr, s, p - 1);
//     quickSort(arr, p + 1, e);
// }

// int main()
// {
//     int n;

//     cout << "Enter number of students: ";
//     cin >> n;

//     vector<int> credits(n);

//     cout << "Enter student credits:\n";

//     for (int i = 0; i < n; i++)
//     {
//         cin >> credits[i];
//     }

//     quickSort(credits, 0, n - 1);

//     cout << "\nSorted Credit Records:\n";

//     for (int i = 0; i < n; i++)
//     {
//         cout << credits[i] << " ";
//     }

//     return 0;
// }


/*
Experiment 33: Fractional Knapsack Problem
Write a program to solve Fractional Knapsack Problem using Greedy Method and
determine the maximum profit obtained by selecting suitable fractions of items.
*/

// #include <iostream>
// using namespace std;

// class item{
//     public:
//         int profit;
//         int weight;
//         float ratio;
// };


// int main() {
//     int n;
//     cout<<"Enter number of items: ";
//     cin>>n;

//     item items[n];
//     // insert
//     cout<<"Enter items profit and weight: \n";

//     for(int i=0; i<n; i++){
//         cout<<"item no. : "<<i+1<<" : ";
//         cin>>items[i].profit>>items[i].weight;

//         items[i].ratio = (float) items[i].profit/items[i].weight;
//     }

//     // sort by ratio is descending order
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(items[j].ratio < items[j+1].ratio){
//                 item temp = items[j];
//                 items[j] = items[j+1];
//                 items[j+1] = temp;
//             }
//         }
//     }

//     int capacity;
//     cout<<"Enter knapsack capacity: ";
//     cin>>capacity;

//     int totalProfit = 0;

//     for(int i=0; i<n; i++){
//         if(items[i].weight <= capacity){
//             cout<<"item : "<<i+1<< " taken compelete"<<endl;
//             totalProfit += items[i].profit;
//             capacity = capacity - items[i].weight;
//         }

//         else{
//             float fraction = (float)capacity/items[i].weight;

//             cout<<"item : "<<i+1<< " fraction : "<<fraction*100<<endl;
//             totalProfit = totalProfit + (items[i].profit * fraction);

//             capacity =0;
//             break;

//         }
//     }

//     cout<<"Max profit : "<<totalProfit<<endl;
    

//     return 0;
// }

// 3 60 10 100 20 120 30 50

/*
Experiment 34: Job Sequencing with Deadlines
Write a program to schedule jobs with given deadlines and profits using Greedy
Technique to maximize total profit without violating deadlines.
*/

// #include <iostream>
// using namespace std;

// class Job
// {
// public:
//     char id;
//     int deadline;
//     int profit;
// };

// int main()
// {
//     int n;

//     cout << "Enter number of jobs: ";
//     cin >> n;

//     Job jobs[n];

//     // Input jobs
//     for (int i = 0; i < n; i++)
//     {
//         cout << "\nEnter Job ID: ";
//         cin >> jobs[i].id;

//         cout << "Enter Deadline: ";
//         cin >> jobs[i].deadline;

//         cout << "Enter Profit: ";
//         cin >> jobs[i].profit;
//     }

//     // Sort jobs by profit in descending order
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (jobs[j].profit < jobs[j + 1].profit)
//             {
//                 Job temp = jobs[j];
//                 jobs[j] = jobs[j + 1];
//                 jobs[j + 1] = temp;
//             }
//         }
//     }

//     // Find maximum deadline
//     int maxDeadline = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (jobs[i].deadline > maxDeadline)
//         {
//             maxDeadline = jobs[i].deadline;
//         }
//     }

//     char schedule[maxDeadline];
//     bool slot[maxDeadline];

//     // Initialize slots
//     for (int i = 0; i < maxDeadline; i++)
//     {
//         slot[i] = false;
//     }

//     int totalProfit = 0;

//     // Schedule jobs
//     for (int i = 0; i < n; i++)
//     {
//         // Find free slot before deadline
//         for (int j = jobs[i].deadline - 1; j >= 0; j--)
//         {
//             if (!slot[j])
//             {
//                 slot[j] = true;

//                 schedule[j] = jobs[i].id;

//                 totalProfit =
//                     totalProfit + jobs[i].profit;

//                 break;
//             }
//         }
//     }

//     cout << "\nSelected Jobs:\n";

//     for (int i = 0; i < maxDeadline; i++)
//     {
//         if (slot[i])
//         {
//             cout << schedule[i] << " ";
//         }
//     }

//     cout << "\n\nMaximum Profit = "
//          << totalProfit;

//     return 0;
// }

// 5 A 2 100 B 1 19 C 2 27 D 1 25 E 3 15

/*
Experiment 35: Travelling Salesman Problem
Write a program to determine the minimum cost Hamiltonian cycle for Travelling
Salesman Problem using suitable optimization technique.
*/

// #include <iostream>
// #include <climits>
// using namespace std;

// const int MAX = 10;

// int graph[MAX][MAX];
// bool visited[MAX];

// int vertices;

// int minCost = INT_MAX;

// // Recursive TSP function
// void tsp(int currentCity,int count,int cost,int startCity){
//     // All cities visited
//     if (count == vertices &&
//         graph[currentCity][startCity] != 0)
//     {
//         int totalCost =
//             cost + graph[currentCity][startCity];

//         if (totalCost < minCost)
//         {
//             minCost = totalCost;
//         }

//         return;
//     }

//     // Visit unvisited cities
//     for (int i = 0; i < vertices; i++)
//     {
//         if (!visited[i] &&
//             graph[currentCity][i] != 0)
//         {
//             visited[i] = true;

//             tsp(i,count + 1,cost + graph[currentCity][i],startCity);

//             // Backtrack
//             visited[i] = false;
//         }
//     }
// }

// int main()
// {
//     cout << "Enter number of cities: ";
//     cin >> vertices;

//     cout << "Enter cost adjacency matrix:\n";

//     for (int i = 0; i < vertices; i++)
//     {
//         for (int j = 0; j < vertices; j++)
//         {
//             cin >> graph[i][j];
//         }
//     }

//     int startCity = 0;

//     // Start from city 0
//     visited[startCity] = true;

//     tsp(startCity, 1, 0, startCity);

//     cout << "\nMinimum Travelling Cost = "<< minCost;

//     return 0;
// }

// 4 0 10 15 20 10 0 35 25 15 35 0 30 20 25 30 0


/*
Experiment 36: N-Queen Problem
Write a program to solve the N-Queen Problem using Backtracking technique such that
no two queens attack each other on the chessboard.
*/

// #include <iostream>
// using namespace std;

// const int MAX = 10;

// int board[MAX][MAX];
// int n;

// // Check whether queen can be placed
// bool isSafe(int row, int col)
// {
//     // Check left side of row
//     for (int i = 0; i < col; i++)
//     {
//         if (board[row][i] == 1)
//         {
//             return false;
//         }
//     }

//     // Check upper diagonal
//     for (int i = row, j = col;
//          i >= 0 && j >= 0;
//          i--, j--)
//     {
//         if (board[i][j] == 1)
//         {
//             return false;
//         }
//     }

//     // Check lower diagonal
//     for (int i = row, j = col;
//          i < n && j >= 0;
//          i++, j--)
//     {
//         if (board[i][j] == 1)
//         {
//             return false;
//         }
//     }

//     return true;
// }

// // Solve N-Queen using backtracking
// bool solveNQueen(int col)
// {
//     // All queens placed
//     if (col >= n)
//     {
//         return true;
//     }

//     // Try placing queen in each row
//     for (int row = 0; row < n; row++)
//     {
//         if (isSafe(row, col))
//         {
//             // Place queen
//             board[row][col] = 1;

//             // Recur for next column
//             if (solveNQueen(col + 1))
//             {
//                 return true;
//             }

//             // Backtrack
//             board[row][col] = 0;
//         }
//     }

//     return false;
// }

// int main()
// {
//     cout << "Enter value of N: ";
//     cin >> n;

//     // Initialize board with 0
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             board[i][j] = 0;
//         }
//     }

//     if (solveNQueen(0))
//     {
//         cout << "\nSolution:\n";

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout << board[i][j] << " ";
//             }

//             cout << endl;
//         }
//     }
//     else
//     {
//         cout << "\nNo Solution Exists";
//     }

//     return 0;
// }
