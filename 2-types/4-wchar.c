#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main(void) {
    setlocale(LC_ALL, "");

    wchar_t rocket1 = L'🚀';
    wchar_t rocket2 = L'\U0001F680';

    // incorrect
    // wchar_t rocket3 = L'\xF0\x9F\x9A\x80'; 

    wprintf(L"%lc\n", rocket1);
    wprintf(L"%lc\n", rocket2);

    return 0;
}