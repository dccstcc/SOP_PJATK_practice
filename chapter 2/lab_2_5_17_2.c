#include <stdio.h>

int main(void) {

    float studentAYear1 = 4.2;
    float studentAYear2 = 4.5;
    float studentAYear3 = 4.2;

    float studentBYear1 = 4.3;
    float studentBYear2 = 4.4;
    float studentBYear3 = 4.7;

    float studentCYear1 = 4.3;
    float studentCYear2 = 4.8;
    float studentCYear3 = 4.9;

    printf("Student name: 1stGrade 2ndGrade 3rdGrade   Avg\n");
    printf("student A         %3.2f     %3.2f     %3.2f  %3.2f\n", studentAYear1, studentAYear2, studentAYear3, (studentAYear1 + studentAYear2 + studentAYear3)/3);
    printf("student B         %3.2f     %3.2f     %3.2f  %3.2f\n", studentBYear1, studentBYear2, studentBYear3, (studentBYear1 + studentBYear2 + studentBYear3)/3);
    printf("student C         %3.2f     %3.2f     %3.2f  %3.2f\n", studentCYear1, studentCYear2, studentCYear3, (studentCYear1 + studentCYear2 + studentCYear3)/3);

    return 0;
}
