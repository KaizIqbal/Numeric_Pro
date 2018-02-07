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
      float y1, y2, x1, x0, xn, h, xvalue[MAX], yvalue[MAX];

      // Create File
      fp=fopen("euler_mod_out.dat","w");

      // For File Formating Purpose
      printf("\n\n");
      fprintf(fp,"\n\n");
      printf("Euler's Method ");
      fprintf(fp,"Euler's Method ");
      printf("\n\n");
      fprintf(fp,"\n\n");

      // Gethering Values
      printf("\nEnter value for Interval start (x0):  ");
      fprintf(fp,"\nEnter value for Interval start (x0):  ");
      scanf("%f", &x0);
      fprintf(fp,"%f",x0);

      printf("\nEnter value for Interval end (xn):  ");
      fprintf(fp, "\nEnter value for Interval end (xn):  ");
      scanf("%f", &xn);
      fprintf(fp, "%f",xn);

      printf("\nEnter value for width (h):  ");
      fprintf(fp, "\nEnter value for width (h):  ");
      scanf("%f", &h);
      fprintf(fp, "%f",h);

      printf("\nEnter value for Y(1):  ");
      fprintf(fp, "\nEnter value for y(1):  ");
      scanf("%f", &y1);
      fprintf(fp, "%f",y1);

      // set x0 and y0 value to array
      xvalue[i]=x0;
      yvalue[i]=y1;
      // Computing X0 to XN value to array
      for(i=1;xvalue[i]<=xn;i++){
          xvalue[i+1]=xvalue[i]+h;
          count=count+1;
      }
      for(i=1;i<=count;i++){
          // Eulers Method
          yvalue[i+1]=yvalue[i]+h*fxy(xvalue[i],yvalue[i]);
          // Euler Modified Method
          yvalue[i+1]=yvalue[i]+(h/2)*fxy(xvalue[i],yvalue[i])+fxy(xvalue[i+1],yvalue[i+1]);
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

//Created By Kaiz
