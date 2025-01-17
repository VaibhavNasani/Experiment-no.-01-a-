/*
Exp 7 Task 2
Title:WAP to calculate sum of two matrix.
Name: Vaibhav Nasani 
Class:First Year
Div:C
Roll no.:045
UIN:241P048
*/

#include <stdio.h>
int main() {
  int r, c, a[100][100], b[100][100], sum[100][100], i, j;
  printf("Enter the number of rows : ");
  scanf("%d", &r);
  printf("Enter the number of columns : ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  // adding two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // printing the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }

  return 0;
}


OUTPUT :
Enter the number of rows : 3
Enter the number of columns : 3

Enter elements of 1st matrix:
Enter element a11: 1
Enter element a12: 0
Enter element a13: 0
Enter element a21: 0
Enter element a22: 1
Enter element a23: 0
Enter element a31: 0
Enter element a32: 0
Enter element a33: 1
Enter elements of 2nd matrix:
Enter element b11: 0
Enter element b12: 0
Enter element b13: 1
Enter element b21: 0
Enter element b22: 1
Enter element b23: 0
Enter element b31: 1
Enter element b32: 0
Enter element b33: 0

Sum of two matrices:
1   0   1

0   2   0

1   0   1


Process returned 0 (0x0)   execution time : 47.166 s
Press any key to continue.