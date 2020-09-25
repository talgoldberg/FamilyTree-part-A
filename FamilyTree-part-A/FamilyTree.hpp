//
// Created by tal goldberg.
//

/*#ifndef CPPMATALA_FAMILYTREE_HPP
#define CPPMATALA_FAMILYTREE_HPP

#endif //CPPMATALA_FAMILYTREE_HPP*/

#include <iostream>

namespace family{

class Node{
public:
    std::string name;
    Node* mother;
    Node* father;


};

class Tree{

public:
    Node* root;


    Tree& addFather(std::string son,std::string father);
    Tree& addMother(std::string son,std::string mother);
    void display();
    std::string relation(std::string name);
    std::string find(std::string relation);
    void remove(std::string name);

//constractor+destractor

Tree (std::string root);
~Tree();

};
};
