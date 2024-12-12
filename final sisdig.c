#include <stdio.h>

// Fungsi untuk menampilkan visualisasi seven-segment
void displaySevenSegment(int digit) {
    // Status segment (a, b, c, d, e, f, g) untuk angka 0–9
    int segments[10][7] = {
        {1, 1, 1, 1, 1, 1, 0}, // 0
        {0, 1, 1, 0, 0, 0, 0}, // 1
        {1, 1, 0, 1, 1, 0, 1}, // 2
        {1, 1, 1, 1, 0, 0, 1}, // 3
        {0, 1, 1, 0, 0, 1, 1}, // 4
        {1, 0, 1, 1, 0, 1, 1}, // 5
        {1, 0, 1, 1, 1, 1, 1}, // 6
        {1, 1, 1, 0, 0, 0, 0}, // 7
        {1, 1, 1, 1, 1, 1, 1}, // 8
        {1, 1, 1, 1, 0, 1, 1}  // 9
    };
    
    //Menampilkan status Seven-Segment Display
    printf("Status Segment untuk angka %d:\n", digit);
    printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\nf = %d\ng = %d\n",
           segments[digit][0], segments[digit][1], segments[digit][2],
           segments[digit][3], segments[digit][4], segments[digit][5], segments[digit][6]);
    
    //Menampilkan visualisasi Seven-Segment Display
    printf("\nVisualisasi Seven Segment:\n");
    printf(" %s \n", segments[digit][0] ? "---" : "   ");
    printf("%s   %s\n", segments[digit][5] ? "|" : " ", segments[digit][1] ? "|" : " ");
    printf(" %s \n", segments[digit][6] ? "---" : "   ");
    printf("%s   %s\n", segments[digit][4] ? "|" : " ", segments[digit][2] ? "|" : " ");
    printf(" %s \n", segments[digit][3] ? "---" : "   ");
}

int main() {
    char input;

    while (1) {
        printf("Masukkan angka (0-9) atau 'X' untuk keluar: ");
        scanf(" %c", &input);

        if (input == 'X' || input == 'x') {
            printf("Keluar dari program.\n");
            break;
        } else if (input >= '0' && input <= '9') {
            int digit = input - '0';
            displaySevenSegment(digit);
        } else {
            printf("Input tidak valid. Silakan masukkan angka 0-9 atau 'X'.\n");
        }
    }

    return 0;
}
