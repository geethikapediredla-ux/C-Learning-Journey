#include <stdio.h>
int main()
{// Identifiers-Variables

    int Speed = 40;
    int Cost = 100;
    int Time = 5;
    printf("You are going above the speed limit of %d.\n",Speed);
    printf("This costs %d$.\n",Cost);
    printf("The duration of this exam is %d hours.\n", Time);
    float CGPA = 9.8;
    float Price = 99.99;
    float Temperature = 40.7;
    printf("Your cgpa is %.1f.\n", CGPA);
    printf("I got this bag for %.2f$ girl.\n", Price);
    printf("The temperature can go upto %f°C today.\n", Temperature);
    double AN = 6.02214076;
    double Pi = 3.1415926535897932;
    double GR = 1.61803398875;
    printf("Avagadros no. %.8lf.\n", AN);
    printf("The vakue of pi is %.15lf.\n", Pi);
    printf("Goldens ratio is %.10lf.\n", GR);
    char Symbol = '#';
    char currency = '$';
    char Grade = 'A';
    printf("My favourite emoji is %c.\n",Symbol);
    printf("My favourite currency is %c.\n",currency);
    printf("Mama i got an %c in math!.\n", Grade);
    char News[] = "Students in visakhapatnam protesting against the government for not taking important measures to protect the city from pollution after the establishment of data centers.";
    char Instagram[] = "IMPICASOHspapi";
    char Animal[] = "Amimals are 100 times better than most men. - says a being with common sense.";
    printf("On todays news we have %s\n", News);
    printf("Girls instagram usesrname %s cracks up the users.\n", Instagram);
    printf("Quote of the day is %s\n ", Animal);
    return 0;
}