#ifndef NODE_H
#define NODE_H

#include <string>
#include <iostream>
using namespace std;

class node
{
protected:
    string name;
    node *parent;

public:
    node()
    {
    }
    node(string nname, node *&nparent)
    {
    }
    virtual ~node()
    {
    }
    virtual void create() = 0;
    virtual void open() = 0;
    virtual void del() = 0;
    virtual void setname(string nname) = 0;
    virtual void setnode(node *&parent) = 0;
    virtual string getname() = 0;
    virtual node *&getnode() = 0;
};

#endif
