// Math.h used for only equation formating purpose
#include<stdio.h>
#include<math.h>

// Define Size of Array
#define MAX 20

float fxy(float x,float y){
    // Equation Here
    return(x*y);
}

int main(){
    // fp=File Pointer ,i for Loop ,count=count x stages ,xvalue&yvalue=X&Y Value Holder
    FILE *fp;
    int i=1,count=1;
    float x0,xn,y0,h,xvalue[MAX],yvalue[MAX];
    float k1,k2;

    // Create File
    fp=fopen("rk_2nd_out.dat","w");

    // For File Formating Purpose
    printf("\n\n");
    fprintf(fp,"\n\n");
    printf("Runge-Kutta Second Order ");
    fprintf(fp,"Runge-Kutta Second Order ");
    printf("\n\n");
    fprintf(fp,"\n\n");

    // Gethering Values
    printf("\nEnter the lower bound of x (x0) :  ");
    fprintf(fp,"\nEnter the lower bound of x (x0) :  ");
    scanf("%f",&x0);
    fprintf(fp,"%f",x0);

    printf("\nEnter the upper bound of x (xn) :  ");
    fprintf(fp,"\nEnter the upper bound of x (xn) :  ");
    scanf("%f",&xn);
    fprintf(fp,"%f",xn);

    printf("\nEnter the value of y(lower)  (y0):  ");
    fprintf(fp,"\nEnter the value of y(lower)  (y0):  ");
    scanf("%f",&y0);
    fprintf(fp,"%f",y0);

    printf("\nEnter the value of h       :  ");
    fprintf(fp,"\nEnter the value of h       :  ");
    scanf("%f",&h);
    fprintf(fp,"%f",h);

    // set x0 and y0 value to array
    xvalue[i]=x0;
    yvalue[i]=y0;
    // Computing X0 to XN value to array
    for(i=1;xvalue[i]<=xn;i++){
        xvalue[i+1]=xvalue[i]+h;
        count=count+1;
    }
    for(i=1;i<=count;i++){
        // Runge-Kutta Second Order Formula
        k1=h*fxy(xvalue[i],yvalue[i]);
        k2=h*fxy(xvalue[i]+((2*h)/3),yvalue[i]+((2*k1)/3));
        yvalue[i+1]=yvalue[i]+(k1+(3*k2));
    }

    // Print OutPut to Display and File
    printf("\n\n");
    fprintf(fp,"\n\n");
    printf("The complete solution of the differential f(xy) is ");
    fprintf(fp,"The complete solution of the differential f(xy) is ");
    printf("\n\n");
    fprintf(fp,"\n\n");

    for(i=1;i<=count;i++){
        printf(" %d)  %.4f   %.4f  ",i,xvalue[i],yvalue[i]);
        fprintf(fp," %d)  %.4f   %.4f  ",i,xvalue[i],yvalue[i]);
        printf("\n");
        fprintf(fp,"\n");
    }
    // close File
    fclose(fp);
    
    return 0;
}
