#include <stdio.h>

int main(){
    float m1,m2,m3,p;
    printf("enetr the marks of 3 subjects:");
    scanf("%f %f %f",&m1,&m2,&m3);
    p=(m1+m2+m3)/300*100;
    if (m1<33||m2<33 || m3<33 || p<40)
    {
        printf("the student is fail");
    }
    else{
        printf("the student is pass");
    }
    
   
    return 0;
}
