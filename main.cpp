#include <iostream>
#include "components/symmetricEncryption.h"

int main(int totalArguments, char *arguments[])
{
    std::string plain = "i am awesome in some ways";
    std::string cipher = caesarChiperEncrypt(plain);
    std::cout << cipher << std::endl;
    std::cout << caesarChiperDecrypt(cipher) << std::endl;

    return 0;
}