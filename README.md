# Numeric_Pro
Numerical Programs In C

>Attension!!!
>This Programs Are Tested In GCC

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

```
  $ cd Runge_Kutta_2ndOrder/
  $ ls
  $ gcc RK_2nd.c
  $ ./a.out
```
![alt-text](https://github.com/KaizIqbal/Numeric_Pro/blob/master/images/2nd_order.gif)
## RUNGE KUTTA 3rd ORDER

```
  $ cd Runge_Kutta_3rdOrder/
  $ ls
  $ gcc Rk_3rd.c
  $ ./a.out
```
![alt-text](https://github.com/KaizIqbal/Numeric_Pro/blob/master/images/3rdorder.gif)
## RUNGE KUTTA 4th ORDER

```
  $ cd Runge_Kutta_4thOrder/
  $ ls
  $ gcc RK_4th.c  
  $ ./a.out
```
![alt-text](https://github.com/KaizIqbal/Numeric_Pro/blob/master/images/4thorder.gif)

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

## ENJOY.
