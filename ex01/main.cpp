#include "PhoneBook.hpp"

bool is_printable(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!isprint(str[i]))
            return false;
    }
    return true;
}

bool is_digits(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}

std::string getInput(std::string prompt)
{
    std::string input;

    while (true)
    {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            exit(0);
        }
        if (prompt.compare("Enter Phone Number: ") == 0)
        {
            if (!input.empty() && is_digits(input))
                return input;
        }
        else
        {
            if (!input.empty() && is_printable(input))
                return input;
        }
    }
}

Contact getContact(void)
{
    Contact contact;

    contact.setFirstName(getInput("Enter First Name: "));
    contact.setLastName(getInput("Enter Last Name: "));
    contact.setNickname(getInput("Enter Nickname: "));
    contact.setPhoneNumber(getInput("Enter Phone Number: "));
    contact.setDarkestSecret(getInput("Enter Darkest Secret: "));
    return contact;
}

int main()
{
    PhoneBook phoneBook;
    std::string command;

    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            break;
        }
        if (command.compare("EXIT") == 0)
            break;
        else if (command.compare("ADD") == 0)
            phoneBook.addContact(getContact());
        else if (command.compare("SEARCH") == 0)
            phoneBook.search();
        else
            std::cout << "Invalid command. Please try again." << std::endl; // to check
    }
    return 0;
}
