#include "inputField.h"
#include <iostream>

using namespace std;
InputField :: InputField() : GraphicElement()
{
    this -> text = "TEXT";
}
InputField :: InputField(string const &owner, unsigned int const sizeGE, string const &text) : GraphicElement(owner, sizeGE)
{
    this -> text = text;
}
InputField :: InputField(InputField const &inputField) : GraphicElement( inputField )
{
    this -> text = inputField.text;
}

void InputField :: setText(string const &text)
{
    this -> text = text;
}
const string& InputField :: getText() const
{
    return text;
}

void InputField :: print()
{
    cout << "\nOwner: " << this -> owner << "\nSize: " << this -> sizeGE;
    cout << "\nHeader: " << this -> text;
}

InputField& InputField :: operator = (InputField const &inputField)
{
    this -> owner = inputField.owner;
    this -> sizeGE = inputField.sizeGE;
    this -> text = inputField.text;
    return *this;
}
