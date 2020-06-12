#pragma once
#include <string>

using namespace std;
class GraphicElement
{
protected:
    string owner;
    unsigned int sizeGE;
public:
    GraphicElement();
    GraphicElement(string const &owner, unsigned int const sizeGE);
    //unsigned так как нам не нужны отрицательные значения
    GraphicElement(GraphicElement const &graphicElement);
    virtual void print() = 0;
    void setOwner(string const &owner);
    void setSizeGE(unsigned int const sizeGE);
    const string& getOwner() const;
    const unsigned int getSizeGE() const;
};
