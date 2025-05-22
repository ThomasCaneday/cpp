int main() {
    // Pointer to a character
    char* pc = 0;

    // Array of 10 integers
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Reference to an array of 10 integers
    int (&ra)[10] = a;

    // Pointer to an array of character strings
    const char* carr[] = {"a", "b", "c"};
    const char** pac = carr;

    // Pointer to a pointer to a character
    char c = 'A';
    char* pch = &c;
    char** ppch = &pch;

    // Constant integer
    const int i = 9;

    // Pointer to a constant integer
    const int* pci = &i;

    // Constant pointer to an integer
    int ii = 5;
    const int* pi = &ii;
}