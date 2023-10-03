#include <iostream>

int tipa_strcspn(const char *string, const char *strCharSet) {
    int count = 0;
    while (*string) {
        const char *ch = strCharSet;
        bool a=0;
        while (*ch) {
            if (*string == *ch) {
                a = 1;
                break;
            }
            ch++;
        }
        string++;
        if (a == 0)
        {
            count++;
        }
    }
    return count;
}

int main() {
    const char *string = "rablvoero";
    const char *strCharSet = "eou";

    int result = tipa_strcspn(string, strCharSet);

    std::cout << "strCharSet: " << result << std::endl;

    return 0;
}
