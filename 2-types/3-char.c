#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    char rocket1[] = "🚀";
    char rocket2[] = "\xF0\x9F\x9A\x80";
    char rocket3[] = "\U0001F680";
    
    printf("%s\n", rocket1);
    printf("%s\n", rocket2);
    printf("%s\n", rocket3);

    return 0;
}
