#include <stdio.h>
#include <stdlib.h>
int degree_st (int t_sem_num,float newCGPA,int current_degree_st); //PROTOTYPE
int degree_st(int t_sem_num ,float newCGPA, int CDS) //FUNCTION
{
if (newCGPA > 2)
{
 CDS = 0;
 return 0;
}
else if (CDS == 0 &&newCGPA <2)
 {
CDS = 1;
return 0;
 }
else if (CDS == 1 && newCGPA <2)
{
CDS = 2;
return 0;
}
 else if (t_sem_num == 8 && newCGPA >2)
{
CDS = 3;
return 0;
 } }

int main()
{
 int i,j, t_SN,st,Degree_st;
 char G;
 char S;
 //float GPA,SGPA,CGPA,a,b,t_s_cgpa;


    printf(" Welcome to GPA CALCULATOR\n");
    printf("_____________________________\n");
    int t_sem=0;
      while(t_sem<=0 || t_sem>8){
    printf(" \n ENTER THE TOTAL SEMESTER (MAXIMUM 8): ");
    scanf("%d",&t_sem); }
    int std_marks[8][7];
     for(i=0;i<t_sem;i++){
         printf("\n ENTER THE MARKS OF SEMESTER %d \n",i+1);
         for(j=0;j<7;j++){
            printf("ENTER MARKS OF SUBJECT %d : ",j+1);
            std_marks[i][j]=-1;
             while (std_marks[i][j]<0 || std_marks[i][j]>100){
                    scanf("%d",&std_marks[i][j]);
             if(std_marks[i][j]<0 || std_marks[i][j]>100){
                   printf("\n INVALID INPUT.ENTER AGAIN : ");}
                }
   } printf("\n======= RESULT=======");
   printf(" \n NO# MARKS_OBT\tGRADE\tGPA");
     float GPA,SGPA,CGPA,a,b,t_s_cgpa;
     for (j=0;j<7 && std_marks[i][j]!=-1;j++)
 {
a=i,b=j;
  if (std_marks[i][j]>90 && std_marks[i][j]<100)
 {
     G = 'A';
     S = '+';
    GPA = 4.0;
 }
 else if (std_marks[i][j]>85 && std_marks[i][j]<90)
 {G = 'A';
     S='-';
     GPA = 3.7;
}
 else if (std_marks[i][j]>80 && std_marks[i][j]<85)
 {
    G = 'B';
	S='+';
     GPA = 3.3;

 }
 else if (std_marks[i][j]>75 && std_marks[i][j]<80)
 {
   G = 'B';
	S=' ';
     GPA = 3.0;

 }
 else if (std_marks[i][j]>70 && std_marks[i][j]<75)
 {
     G = 'B';
   	S='-';
     GPA = 2.7;

 }
 else if (std_marks[i][j]>65 && std_marks[i][j]<70)
 {
     G = 'C';
	S='+';
     GPA = 2.3;

 }
 else if (std_marks[i][j]>60 && std_marks[i][j]<65)
 {
    G = 'C';
	S=' ';
     GPA = 2.0;

 }
 else if (std_marks[i][j]>55 && std_marks[i][j]<60)
 {
    G = 'C';
	S='-';
     GPA = 1.7;

 }
else if (std_marks[i][j]>50 && std_marks[i][j]<55)
 {
     G = 'D';
	S=' ';
     GPA = 1.3;

 }
 else if (std_marks[i][j]>0 && std_marks[i][j]<50)
 {
     G = 'F';
	S=' ';
      GPA = 0.0;

 }
 SGPA+= GPA; //semestergpa calculations

printf("\n%d",j+1);
printf("\t %d" ,std_marks[i][j]);
printf("\t %c%c",G,S);
printf("\t %f\n" ,GPA);

         }
         SGPA = SGPA/(a+1);
         CGPA+= SGPA;
         printf("\t\t semester GPA: %.1f\n \t\t Total CGPA: %.1f\n",SGPA,CGPA/(b+1));
         degree_st(t_SN,t_s_cgpa,st);
         if (st == 0)
         {
          printf("\n\t\tDegree Status: Continued\n");
         }
         else if (st == 1)
         {
          printf("\n\t\tDegree Status: Probation\n");
         }
         else if (st == 2)
         {
          printf("\n\t\tDegree Status: DI\n Start over from 1st semester.Better luck next time.");
         }
          else if (st== 3)
         {
          printf("\n\t\tDegree Status: Degree completed\n");
         }

 }
 return 0;
}



