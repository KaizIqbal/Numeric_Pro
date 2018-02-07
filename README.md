# Numeric_Pro
Numerical Programs In C

> **Note**: _ The code of all method is Develop in "C" is compiled with GNU GCC compiler. However, these codes are compatible with all other operating systems. _

# CLONING WITH GIT
```
  $ git clone https://github.com/KaizIqbal/Numeric_Pro.git
  $ cd Numeric_Pro/
```
![alt-text](https://github.com/KaizIqbal/Numeric_Pro/blob/master/images/cloning.gif)
# USAGE
In All Programs stand with '.c' Have One Function Called "fxy()".It Used For Equation
```
float fxy(float x,float y)
{
    return(x*y); //x*y is Basic Equation
}

```
## RUNGE KUTTA 2nd ORDER
### FORMULA
    Runge-Kutta method for approximating the solution of the initial value problem y'(x) = f(x,y);  
    y(x0) = y0 which evaluates the integrand,f(x,y), twice for each step. For step i+1,

        y(i+1) = y(i) + 1/4(k1 + 3*k2),

        Where
        k1 = h*f(x(i) ,y(i)),
        k2 = h*f(x(i) + 2*h/3 ,y(i) + 2*k1/3),
        and x(i) = x(0+i) * h.

### ALGORITHM

    Algorithm For RUNGE-KUTTA SECOND ORDER FORMULA METHOD

              [FUNCTION fxy]
              function fxy[x,y]{
                  return (dy/dx)
              }

    [Step-1]  [Initialization]
              int i <- 1
              int count <- 1
              float x0,xn,y0,h,x_array[n],y_array[n],k1,k2

    [Step-2]  [Get value Of x0,xn,h,y1]
              write(Enter x0 : )
              read(x0)
              write(Enter xn : )
              read(xn)
              write(Enter y0 : )
              read(y0)
              write(Enter h :)
              read(h)

    [Step-3]  [Set initial Value To Array]
              x_array(i)<-x0
              y_array(i)<-y1

    [Step-4]  [Find x0 to xn Values and Count It]
              for(i<-1 to x_array(i)<=xn){
                  x_array(i+1) <- x_array(i)+h;
                  count++;
              }

    [Step-5]  [Find y_array Value To apply Runge-Kutta Second Order Formula]
              for(i<-1 to i<=count){
                  /* Runge-Kutta Second Order Formula */
                  k1 <- h*fxy[x_array(i),y_array(i)];
                  k2 <- h*fxy[x_array(i)+((2*h)/3),y_array(i)+((2*k1)/3)];
                  y_array(i+1) <- y_array(i)+(k1+(3*k2));
              }

    [Step-6]  [Display]
              for(i<-1 to i<=count){
                  write(x_array(i) y_array(i))
              }

    [Step-7]  [Exit]
              End.

### USAGE
```
  $ cd Runge_Kutta_2ndOrder/
  $ ls
  $ gcc RK_2nd.c
  $ ./a.out
```
![alt-text](https://github.com/KaizIqbal/Numeric_Pro/blob/master/images/2nd_order.gif)
## RUNGE KUTTA 3rd ORDER
### FORMULA
      This method is a third order Runge-Kutta method for approximating the solution of the initial value problem y'(x) = f(x,y);  
      y(x0) = y0 which evaluates the integrand,f(x,y), three times per step. For step i+1,

      y(i+1) = y(i) + 1/6 * (k1 + 4k2 + k3),

      Where
      k1 = h*f(x(i) ,y(i)),
      k2 = h*f(x(i) + h/2 ,y(i) + k1/2),
      k3 = h*f(xi + h ,y(i) - k1 + 2*k2),
      and x(i) = x(0+i) * h.

### ALGORITHM

      Algorithm For RUNGE-KUTTA THIRD ORDER FORMULA METHOD

                [FUNCTION fxy]
                function fxy[x,y]{
                    return (dy/dx)
                }

      [Step-1]  [Initialization]
                int i <- 1
                int count <- 1
                float x0,xn,y0,h,x_array[n],y_array[n],k1,k2,k3

      [Step-2]  [Get value Of x0,xn,h,y1]
                write(Enter x0 : )
                read(x0)
                write(Enter xn : )
                read(xn)
                write(Enter y0 : )
                read(y0)
                write(Enter h :)
                read(h)

      [Step-3]  [Set initial Value To Array]
                x_array(i)<-x0
                y_array(i)<-y1

      [Step-4]  [Find x0 to xn Values and Count It]
                for(i<-1 to x_array(i)<=xn){
                    x_array(i+1) <- x_array(i)+h;
                    count++;
                }

      [Step-5]  [Find y_array Value To apply Runge-Kutta Third Order Formula]
                for(i<-1 to i<=count){
                    /* Runge-Kutta Third Order Formula */
                    k1 <- h*fxy[x_array(i),y_array(i)];
                    k2 <- h*fxy[x_array(i)+(h/2),y_array(i)+(k1/2)];
                    k3 <- h*fxy[x_array(i)+h,y_array(i)-k1+(2*k2)];
                    y_array(i+1) <- y_array(i)+(1/6)*(k1+(4*k2)+k3);
                }

      [Step-6]  [Display]
                for(i<-1 to i<=count){
                    write(x_array(i) y_array(i))
                }

      [Step-7]  [Exit]
                End.


### USAGE
```
  $ cd Runge_Kutta_3rdOrder/
  $ ls
  $ gcc Rk_3rd.c
  $ ./a.out
```
![alt-text](https://github.com/KaizIqbal/Numeric_Pro/blob/master/images/3rdorder.gif)
## RUNGE KUTTA 4th ORDER
### FORMULA

    This method is the classical fourth order Runge-Kutta method for approximating the solution of the initial value problem y'(x) = f(x,y);
     y(x0) = y0 which evaluates the integrand,f(x,y), four times per step. For step i+1,

        y(i+1) = y(i) + 1/6(k1 + 2*k2 + 2*k3 + k4 ),

        Where
        k1 = h*f(x(i) ,y(i)),
        k2 = h*f(x(i) + h/2 ,y(i) + k1/2 ),
        k3 = h*f(x(i) + h/2 ,y(i) + k2/2 ),
        k4 = h*f(x(i) + h ,y(i) + k3 ),

        and x(i) = x(0+i) * h.
### ALGORITHM

    Algorithm For RUNGE-KUTTA FOURTH ORDER FORMULA METHOD

                    [FUNCTION fxy]
                    function fxy[x,y]{
                        return (dy/dx)
                    }

          [Step-1]  [Initialization]
                    int i <- 1
                    int count <- 1
                    float x0,xn,y0,h,x_array[n],y_array[n],k1,k2,k3,k4

          [Step-2]  [Get value Of x0,xn,h,y1]
                    write(Enter x0 : )
                    read(x0)
                    write(Enter xn : )
                    read(xn)
                    write(Enter y0 : )
                    read(y0)
                    write(Enter h :)
                    read(h)

          [Step-3]  [Set initial Value To Array]
                    x_array(i)<-x0
                    y_array(i)<-y1

          [Step-4]  [Find x0 to xn Values and Count It]
                    for(i<-1 to x_array(i)<=xn){
                        x_array(i+1) <- x_array(i)+h;
                        count++;
                    }

          [Step-5]  [Find y_array Value To apply Runge-Kutta Fourth Order Formula]
                    for(i<-1 to i<=count){
                        /* Runge-Kutta Fourth Order Formula */
                        k1=h*fxy[x_array(i),y_array(i)];
                        k2=h*fxy[x_array(i)+(h/2),y_array(i)+(k1/2)];
                        k3=h*fxy[x_array(i)+(h/2),y_array(i)+(k2/2)];
                        k4=h*fxy[x_array(i)+h,y_array(i)+k3];
                        y_array(i+1)=y_array(i)+(1/6)*(k1+(2*k2)+(2*k3)+k4);
                    }

          [Step-6]  [Display]
                    for(i<-1 to i<=count){
                        write(x_array(i) y_array(i))
                    }

          [Step-7]  [Exit]
                    End.

### USAGE
```
  $ cd Runge_Kutta_4thOrder/
  $ ls
  $ gcc RK_4th.c  
  $ ./a.out
```
![alt-text](https://github.com/KaizIqbal/Numeric_Pro/blob/master/images/4thorder.gif)
## EULER'S METHOD & FORWARD EULER'S METHOD
### FORMULA
    The solution for Euler’s numerical method is generated by iterating on the two formulas:

        x(i+1) = x(i)+h
        y(i+1) = y(i)+h*f(x(i), y(i))

    Where h=Length of subdivisions
### ALGORITHM

    Algorithm For EULER'S METHOD

              [FUNCTION fxy]
              function fxy[x,y]{
                  return (dy/dx)
              }

    [Step-1]  [Initialization]
              int i <- 1
              int count <- 1
              float y1,y2,x1,x0,xn,h,x_array[n],y_array[n]

    [Step-2]  [Get value Of x0,xn,h,y1]
              write(Enter x0 : )
              read(x0)
              write(Enter xn : )
              read(xn)
              write(Enter h : )
              read(h)
              write(Enter y1 :)
              read(y1)

    [Step-3]  [Set initial Value To Array]
              x_array(i) <- x0
              y_array(i) <- y1

    [Step-4]  [Find x0 to xn Values and Count It]
              for(i<-1 to x_array(i)<=xn){
                  x_array(i+1) <- x_array(i)+h;
                  count++;
              }

    [Step-5]  [Find y_array Value To apply Euler's Formula]
              for(i<-1 to i<=count){
                  /* Eulers Formula */
                  y_array(i+1) <- y_array(i)+h*fxy[x_array(i),y_array(i)];
              }

    [Step-6]  [Display]
              for(i<-1 to i<=count){
                  write(x_array(i) y_array(i))
              }

    [Step-7]  [Exit]
              End.

### USAGE
```
  $ cd Eulers_Method/
  $ ls
  $  gcc Euler.c   
  $ ./a.out
```
![alt-text](https://github.com/KaizIqbal/Numeric_Pro/blob/master/images/eulers.gif)
##  MODIFIED EULER'S METHOD & EXTENDED EULER'S METHOD
### FORMULA
    The solution for Euler’s numerical method is generated by iterating on the three formulas:

        x(i+1) = x(i)+h

        <!-- Forward Euler's Method -->
        y(i+1) = y(i) + h*f(x(i), y(i))

        <!-- Modified Euler's Method -->
         y(i+1) = y(i) + h/2(f[x(i), y(i)] + f[x(i+1), y(i+1)])

    Where h=Length of subdivisions
### ALGORITHM

    Algorithm For MODIFIED EULER'S METHOD

              [FUNCTION fxy]
              function fxy[x,y]{
                  return (dy/dx)
              }

    [Step-1]  [Initialization]
              int i <- 1
              int count <- 1
              float y1,y2,x1,x0,xn,h,x_array[n],y_array[n]

    [Step-2]  [Get value Of x0,xn,h,y1]
              write(Enter x0 : )
              read(x0)
              write(Enter xn : )
              read(xn)
              write(Enter h : )
              read(h)
              write(Enter y1 :)
              read(y1)

    [Step-3]  [Set initial Value To Array]
              x_array(i) <- x0
              y_array(i) <- y1

    [Step-4]  [Find x0 to xn Values and Count It]
              for(i<-1 to x_array(i)<=xn){
                  x_array(i+1) <- x_array(i)+h;
                  count++;
              }

    [Step-5]  [Find y_array Value To apply Euler's Formula]
              for(i<-1 to i<=count){
                  /* Eulers Formula */
                  y_array(i+1) <- y_array(i)+h*fxy[x_array(i),y_array(i)];

                  /* Eulers Modified Formula */
                  y_array(i+1) <- y_array(i)+(h/2)*fxy[x_array(i),y_array(i)]+fxy[x_array(i+1),y_array(i+1)];
              }

    [Step-6]  [Display]
              for(i<-1 to i<=count){
                  write(x_array(i) y_array(i))
              }

    [Step-7]  [Exit]
              End.

### USAGE
```
  $  cd Eulers_Modified_Method/
  $ ls
  $ gcc Eulers_Mod.c
  $ ./a.out
```
![alt-text](https://github.com/KaizIqbal/Numeric_Pro/blob/master/images/eulers_mod.gif)

###### What is .dat File

".dat" File Is output Holder File Thats Created in Programs.

```
    int main(){
      FILE *fp;
        : :
        : :
      fp=fopen("rk_demo_out.dat","w");   //.dat File Created Here
        : :
        : :
      fclose(fp);
      return 0;
    }
```

###### _ENJOY._
