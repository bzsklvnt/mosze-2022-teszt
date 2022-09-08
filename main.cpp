#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];  // 'N_ELEMENTS' was typed as 'NELEMENTS'
    std::cout << '1-100 ertekek duplazasa'  // ' used instead of " and missing semicolon
    for (int i = 0;)  // missing parameters from for loop
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)  // colon instead of semicolon
    {
        atlag += b[i];
    }
    // unnecessarly duplicated code block
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
