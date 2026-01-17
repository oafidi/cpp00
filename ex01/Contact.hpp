#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;
    public:
        Contact();
        ~Contact();
        void    setFirstName(std::string fn);
        void    setLastName(std::string ln);
        void    setNickname(std::string nn);
        void    setPhoneNumber(std::string pn);
        void    setDarkestSecret(std::string ds);

        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;

        void   printContact() const;
};

# endif