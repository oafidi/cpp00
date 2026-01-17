#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _contactCount(0)
{
    return;
}

PhoneBook::~PhoneBook()
{
    return;
}

void PhoneBook::addContact(Contact contact)
{
    _contactCount %= 8;
    _contacts[_contactCount] = contact;
    _contactCount++;
}

void PhoneBook::search(void) const
{
    std::string index;

	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     index|first name| last Name|  nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
    for (int i = 0; i < 8 && !_contacts[i].getFirstName().empty(); i++)
    {
        std::cout << "|         " << i + 1 << "|";
        std::string firstName = _contacts[i].getFirstName();
        std::string lastName = _contacts[i].getLastName();
        std::string nickname = _contacts[i].getNickname();

        if (firstName.length() > 10)
            firstName = firstName.substr(0, 9) + ".";
        if (lastName.length() > 10)
            lastName = lastName.substr(0, 9) + ".";
        if (nickname.length() > 10)
            nickname = nickname.substr(0, 9) + ".";

        std::cout << std::setw(10) << firstName << "|";
        std::cout << std::setw(10) << lastName << "|";
        std::cout << std::setw(10) << nickname << "|" << std::endl;
    }
    std::cout << "|___________________________________________|" << std::endl;

    std::cout << "Enter index to view details: ";
    std::getline(std::cin, index);
    if (std::cin.eof())
    {
        std::cout << std::endl;
        exit(0);
    }
    if (index.length() == 1 && index[0] >= '1' && index[0] <= '8')
    {
        int idx = index[0] - '1';
        if (!_contacts[idx].getFirstName().empty())
			_contacts[idx].printContact();
		else
			std::cout << "No contact with that index" << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
}