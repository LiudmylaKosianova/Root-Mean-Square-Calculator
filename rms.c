#include <stdio.h>
#include <math.h>

#define Tmin 0.0
#define Tmax 6.28
#define Npts 10

//function to calculate RSM value of an incoming sine wave
double rms_calc(const double *Vptr, int N);

int main(void){

    double T[Npts]; //array for time
    double Vsin[Npts];//array for the sine
    double *T_ptr = T;
    double *Vsin_ptr = Vsin;
    double Tstep = (Tmax - Tmin) / (Npts -1);//time step for T[]
    double Vamp; //voltage amplitude will be provided by the user
    double Vrms; //RMS calculation returned by my function
    int i;

    //fill in time array
    T[0] = Tmin;  
    for(i=1; i<Npts; i++){
        T[i] = T[i-1] + Tstep;  
    }

    /*fill vsin[] array - sin of time*/
    for(i=0; i<Npts; i++){
        Vsin[i] = sin(T[i]);
    }

    printf("Welcome to the RSM Calculator!\n");
    printf("\tEnter the voltage amplitude of your sine wave: ");
    scanf("%lf", &Vamp);

    Vrms = rms_calc(Vsin_ptr, Npts);


    return 0;
}

double rms_calc(const double *Vptr, int N){

}