#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    wchar_t unicodeChar[]= L"\U0001F60A"; // Smiley face emoji 😊

    wprintf(L"Unicode character: %ls\n", unicodeChar);

    return 0;
}