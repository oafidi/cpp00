#include <iostream>

int main(int argc, char **argv)
{
    int     i;
    size_t  j;
    char    c;
    bool    prev_hadcontent = false;

    i = 1;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }
    while (i < argc)
    {
        std::string str = argv[i];
        j = 0;
        if (str.length() > 0)
            prev_hadcontent = true;
        while (j < str.length())
        {
            c = std::toupper(str[j]);
            std::cout << c;
            j++;
        }
        i++;
    }
    if (prev_hadcontent)
        std::cout << std::endl;
    return 0;
}
