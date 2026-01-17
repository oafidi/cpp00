#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <cstdlib>

class PhoneBook
{
    private:
        Contact _contacts[8];
        int     _contactCount;
    public:
        PhoneBook();
        ~PhoneBook();
        void    addContact(Contact contact);
        void    search(void) const;
};

#endif