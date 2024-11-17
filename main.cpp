#include <iostream>
#include <string>

#include "components/symmetricEncryption.h"

int main(int totalArguments, char *arguments[])
{
    std::string text = "";

    if (std::string(arguments[1]) != "-e" && std::string(arguments[1]) != "-d")
    {
        std::cout << "Enter an option E for encrypt or D for decrypt." << std::endl;
        return -1;
    }

    if (std::string(arguments[4]) == "-t")
    {
        text += std::string(arguments[5]);
    }

    if (std::string(arguments[1]) == "-e")
    {
        if (std::string(arguments[3]) == "1")
        {
            std::cout << caesarChiperEncrypt(text) << std::endl;
        }
    }

    else if (std::string(arguments[1]) == "-d")
    {
        if (std::string(arguments[3]) == "1")
        {
            std::cout << caesarChiperDecrypt(text) << std::endl;
        }
    }

    // std::string plain = "i am awesome in some ways";
    // std::string cipher = caesarChiperEncrypt(plain);
    // std::cout << cipher << std::endl;
    // std::cout << caesarChiperDecrypt(cipher) << std::endl;

    return 0;
}