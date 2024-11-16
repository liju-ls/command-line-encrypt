#ifndef SYMMETRIC_ENCRYPTION
#define SYMMETRIC_ENCRYPTION

#include <cstring>
#include <string>
#include "utils.h"

std::string caesarChiperEncrypt(std::string text, int shift = 13);

std::string caesarChiperDecrypt(std::string text, int shift = 13);

#endif