//AS20250662
#include <stdio.h>
#include <stdlib.h>

int main()
{
float Math,Science,English;
float Total,Average;
char Grade;

printf("------------------------------------------\n");
printf("       Student  Grade Analizer            \n");
printf("------------------------------------------\n");

printf("Enter Mathamatics Mark (Out of 100):");
scanf("%f",&Math);

printf("Enter Science Mark (Out of 100):");
scanf("%f",&Science);

printf("Enter English Mark (Out of 100):");
scanf("%f",&English);

Total= Math+Science+English;
Average=Total/3;

if (Average>=80.0 && Average<=100){
    Grade= 'A';
}
else if (Average>=70.0 && Average<80){
    Grade= 'B';
}
else if (Average>=60.0 && Average<70){
    Grade= 'C';
}
else if (Average>=50.0 && Average<60){
    Grade= 'D';
}
else{
    Grade='F';
}

printf("\nTotal: %.0f\n",Total);
printf("Average: %.2f\n",Average);
printf("Grade: %c\n",Grade);

if(Math>=40 && Science>=40 && English>=40){
    printf("Result:Pass\n");

}
else{
    printf("Result:Fail\n");
}
    return 0;
}
