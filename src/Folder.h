#ifndef FOLDER_H
#define FOLDER_H

#include <string>
#include <iostream>
#include "Node.h"
using namespace std;

class folder : public node
{

    int size;
    int num;
    node **folders;

public:
    folder(string nname, node *nparent, int num) : node(nname, nparent)
    {
    }
    ~folder()
    {
    }
    void addnode()
    {
    }
    void opennode()
    {
    }
    void deletenode()
    {
    }
    void setname(string nname)
    {
    }
    void setnode(node *parent)
    {
    }
    string getname()
    {
    }
    node *getnode()
    {
    }
};

#endif