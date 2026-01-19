#include "Contact.hpp"

Contact::Contact()
{
    return;
}

Contact::~Contact()
{
    return;
}

void    Contact::setFirstName(std::string fn)
{
    this->_firstName = fn;
}

void    Contact::setLastName(std::string ln)
{
    this->_lastName = ln;
}

void    Contact::setNickname(std::string nn)
{
    this->_nickname = nn;
}

void Contact::setPhoneNumber(std::string fn)
{
    this->_phoneNumber = fn;
}

void    Contact::setDarkestSecret(std::string ds)
{
    this->_darkestSecret = ds;
}

std::string Contact::getFirstName() const
{
    return this->_firstName;
}

std::string Contact::getLastName() const
{
    return this->_lastName;
}

std::string Contact::getNickname() const
{
    return this->_nickname;
}

std::string Contact::getPhoneNumber() const
{
    return this->_phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
    return this->_darkestSecret;
}

void   Contact::printContact() const
{
    std::cout << "First Name: " << this->_firstName << std::endl;
    std::cout << "Last Name: " << this->_lastName << std::endl;
    std::cout << "Nickname: " << this->_nickname << std::endl;
    std::cout << "Phone Number: " << this->_phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << this->_darkestSecret <<  std::endl;
}