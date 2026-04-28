#include "Folder.h"
#include <iostream>
#include <string>

folder::folder(string nname, node *nparent, int nnum) : node(nname, nparent)
{
    num = nnum;
    size = 0;
    folders = new node *[num];
    for (int i = 0; i < num; i++)
    {
        folders[i] = nullptr;
    }
}
folder::~folder()
{
    delete[] parent;
}
void folder::addnode()
{
    cout << "Enter the size of the folder you want to create: ";
    cin >> size;
}
void folder::opennode()
{
}
void folder::deletenode()
{
}
void folder::setname(string nname)
{
}
void folder::setnode(node *parent)
{
}
string folder::getname()
{
    return name;
}
node *folder::getnode()
{
    return parent;
}