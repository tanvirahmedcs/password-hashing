#include <iostream>
#include <string>
#include <openssl/sha.h>

void hashPassword(const std::string& password) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256(reinterpret_cast<const unsigned char*>(password.c_str()), password.size(), hash);

    std::cout << "SHA-256 hash: ";
    for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i) {
        printf("%02x", hash[i]);
    }
    std::cout << std::endl;
}

int main() {
    std::string password;
    std::cout << "Enter a password to hash: ";
    std::cin >> password;

    hashPassword(password);

    return 0;
}
