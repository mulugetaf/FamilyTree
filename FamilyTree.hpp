#include <string>
#include <iostream>
using namespace std;

namespace family{
    class Node{
        public:
        Node(string name);
        string name;
        Node* mother;
        Node* father;
    };

    class Tree{
        public:
        Tree(string name);
        Node* root;
        Tree& addFather(string name1, string name2);
        Tree& addMother(string name1, string name2);
        void display();
        string relation(string name);
        string find(string name);
        void remove(string name);
    };

};
