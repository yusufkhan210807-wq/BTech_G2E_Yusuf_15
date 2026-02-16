#include <stdio.h>

int main() {
  float m1, m2, m3, m4, m5;
  float sum, percentage;
  printf("Enter marks for 5 subjects: ");
  scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
  sum = m1 + m2 + m3 + m4 + m5;
  percentage = (sum / 500) * 100;
  printf("Total marks: %.2f\n", sum);
  printf("Percentage: %.2f%%\n", percentage);
  return 0; 
}