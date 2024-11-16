#include "symmetricEncryption.h"

std::string caesarChiperEncrypt(std::string text, int shift)
{
    std::string cipherText = "";
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == ' ')
        {
            cipherText += "!";
            continue;
        }

        int index = (int)utils::alphabets.find(text[i]) + shift;
        if (index > 25)
        {
            index = (index % 25) - 1;
        }
        cipherText += utils::alphabets[index];
    }
    return cipherText;
}

std::string caesarChiperDecrypt(std::string text, int shift)
{
    std::string plainText = "";
    for (int j = 0; j < text.size(); j++)
    {
        if (text[j] == '!')
        {
            plainText += ' ';
            continue;
        }

        int index = (int)utils::alphabets.find(text[j]) - shift;

        if (index < 0)
        {
            index = 25 + index + 1;
        }

        plainText += utils::alphabets[index];
    }

    return plainText;
}
