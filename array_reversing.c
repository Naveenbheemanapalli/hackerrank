/*  An array is a type of data structure that stores elements of the same type in a contiguous block of memory. In an array, , of size , each memory location has some unique index,  (where ), that can be referenced as  (you may also see it written as ).

Given an array, , of  integers, print each element in reverse order as a single line of space-separated integers. */


/* Programs for 2D array rotation */

#include <stdio.h>
int main() {
  int n, i,j;
  scanf("%d", &n);
  int a[n],b[n];

  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  for (i = 0,j=n-1; (i < n) && (j>=0); i++,j--) {
    b[i]=a[j];
  }

  for (i = 0; i < n; i++) {
    printf("%d ", b[i]);
  }
}