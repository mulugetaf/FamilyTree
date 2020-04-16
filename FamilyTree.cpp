
#include "FamilyTree.hpp"
#include <string>
#include <iostream>
using namespace std;

using namespace family;
Node& findNode(Node& root, string child_name){
    
     if (root.name.compare(child_name) != 0)
    {
        cout<<root.name<<">>>A"<<endl;
        return findNode(*root.father, child_name);     
    }
    else if(root.name.compare(child_name) == 0)
    {
        cout<<root.name<<">>>B"<<endl;
        return root;  
    }
    else
    {
            cout<<"not found!!!"<<endl;
      
        string s = "";
    Node * n = new Node(s);
    return *n;      
      }
    
      string s = "";
    Node * n = new Node(s);
    return *n;      
}

family::Tree& Tree::addFather(string child, string father){
    Node& child_found = findNode(*root, child);

    //cout<<"child_found.name:"<<child_found.name<<endl;
    child_found.father = new Node(father);
    return *this;
    };

//Node constructor
family::Node::Node(string Node_name){
    name = Node_name;
    father = nullptr;
    mother = nullptr;
};

// Tree C‫‪onstructor‬‬
family::Tree::Tree(string name){
    root = new Node(name);
};

family::Tree& Tree::addMother(string name1, string name2){return *this;};
void family::Tree::display(){};
string family::Tree::relation(string name){return "null";};
string family::Tree::find(string name){return "null";};
void family::Tree::remove(string name){};
