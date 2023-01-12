#include <stdio.h>
#include <stdlib.h>

void counting(double a, int N);

int main()
{
    int N;
    double a;

do{
    printf("\nEnter N(>=1):");
    scanf("%u", &N);
    printf("\nEnter a:");
    scanf("%lf",&a);
}while(N<1);
    system("cls");
    counting(a,N);
   getch();
}

void counting(double a,int N){

double S;
double i;

for (double i = 0; i < N; i++) {
            S = S + pow(-1,i-1)*(pow(a,i)/factorial(i));
    }
    S+1;
    printf("\nN=%u\na=%.5f\nS=%.5f",N,a,S);
}

factorial (int n)
{
  return (n < 2) ? 1 : n * factorial (n - 1);
}
