#include "Node.h"

node ::node()
{
    string name = "";
    parent = nullptr;
}
node ::node(string nname, node *&nparent)
{
    name = nname;
    parent = nparent;
}