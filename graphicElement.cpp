#include "graphicElement.h"

using namespace std;

GraphicElement :: GraphicElement()
{
    this -> owner = "owner";
    this -> sizeGE = 0;
}
GraphicElement :: GraphicElement(string const &owner, unsigned int const sizeGE)
{
    this -> owner = owner;
    this -> sizeGE = sizeGE;
}

GraphicElement :: GraphicElement(const GraphicElement &GraphicElement)
{
    this -> owner = GraphicElement.owner;
    this -> sizeGE = GraphicElement.sizeGE;
}

void GraphicElement :: setOwner(string const &owner)
{
   this -> owner = owner;
}

const string& GraphicElement :: getOwner() const
{
    return owner;
}
void GraphicElement :: setSizeGE(unsigned int const sizeGE)
{
   this -> sizeGE = sizeGE;
}

const unsigned int GraphicElement :: getSizeGE() const
{
    return sizeGE;
}
