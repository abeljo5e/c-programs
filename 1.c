#include <stdio.h>
int main() {
    int s1, s2, s3, s4, s5, total;
    float average;
    printf("Enter marks for 5 subjects:\n");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    total = s1 + s2 + s3 + s4 + s5;
    average = (float)total / 5.0;
    printf("Total Marks = %d\n", total);
    printf("Average Marks = %.3f\n", average);
    if (average>=90)
      { 
      printf("A+");
      }
    else if (average>=80)
      {
      printf("A");
      }
     else if (average>=70)
      { 
      printf("B+");
      }
     else if (average>=60)
      { printf("B");
      }
     else if (average>=50)
      { printf("C+");
      }
     else if (average>=40)
      { printf("C");
      }
     else 
      { printf("fail");
      }

    return 0;
}

