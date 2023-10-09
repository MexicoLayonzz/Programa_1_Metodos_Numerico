#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Metodo(int *);
void DatosSecante(double *, double *, int *, double *);
void DatosNewton(double *, int *, double *);
void Newton1(double *, int *, double *);
void Newton2(double *, int *, double *);
void Newton3(double *, int *, double *);
void Newton4(double *, int *, double *);
void Secante1(double *, double *, int *, double *);
void Secante2(double *, double *, int *, double *);
void Secante3(double *, double *, int *, double *);
void Secante4(double *, double *, int *, double *);
int main()
{
	int selec, met, maximoIteraciones, resp = 2;
	double x1, x2, tolerancia;
	do
	{
		printf("\n1. f(x) = x^2 * cos(x) - 2x \n2. f(x) = (6 - (2/x^2))(e^2 + x/4) + 1 \n3. f(x) = x^3 - 3sen(x^2) + 1 \n4. f(x) = x^3 + 6x^2 + 9.4x + 2.5");
		do
		{
			printf("\nIngrese el n%cmero de la ecuaci%cn que quiere sacar raices: ", 163, 162);
			scanf("%d", &selec);
		}while(selec < 0 || selec > 4);

		switch(selec)
		{
			case 1:
				Metodo(&met);
				if (met == 1)
				{
					do
					{
						DatosSecante(&x1, &x2, &maximoIteraciones, &tolerancia);
						Secante1(&x1, &x2, &maximoIteraciones, &tolerancia);
						do
						{
							printf("\n%cQu%c operaci%cn quieres realizar? \n1. Sacar otra ra%cz \n2. Regresar a menu principal \n",168,130,162,161);
							scanf("%d", &resp);
						}while(resp < 1 || resp > 2);
					}while(resp != 2);
				}else
				{
					do
					{
						DatosNewton(&x1, &maximoIteraciones, &tolerancia);
						Newton1(&x1, &maximoIteraciones, &tolerancia);
						do
						{
							printf("\n%cQu%c operaci%cn quieres realizar? \n1. Sacar otra ra%cz \n2. Regresar a menu principal \n",168,130,162,161);
							scanf("%d", &resp);
						}while(resp < 1 || resp > 2);
					}while(resp != 2);
				}
			break;
			case 2:
				Metodo(&met);
				if (met == 1)
				{
					do
					{
						DatosSecante(&x1, &x2, &maximoIteraciones, &tolerancia);
						Secante2(&x1, &x2, &maximoIteraciones, &tolerancia);
						do
						{
							printf("\n%cQu%c operaci%cn quieres realizar? \n1. Sacar otra ra%cz \n2. Regresar a menu principal \n",168,130,162,161);
							scanf("%d", &resp);
						}while(resp < 1 || resp > 2);
					}while(resp != 2);
				}else
				{
					do
					{
						DatosNewton(&x1, &maximoIteraciones, &tolerancia);
						Newton2(&x1, &maximoIteraciones, &tolerancia);
						do
						{
							printf("\n%cQu%c operaci%cn quieres realizar? \n1. Sacar otra ra%cz \n2. Regresar a menu principal \n",168,130,162,161);
							scanf("%d", &resp);
						}while(resp < 1 || resp > 2);
					}while(resp != 2);
				}
			break;
			case 3:
				Metodo(&met);
				if (met == 1)
				{
					do
					{
						DatosSecante(&x1, &x2, &maximoIteraciones, &tolerancia);
						Secante3(&x1, &x2, &maximoIteraciones, &tolerancia);
						do
						{
							printf("\n%cQu%c operaci%cn quieres realizar? \n1. Sacar otra ra%cz \n2. Regresar a menu principal \n",168,130,162,161);
							scanf("%d", &resp);
						}while(resp < 1 || resp > 2);
					}while(resp != 2);
				}else
				{
					do
					{
						DatosNewton(&x1, &maximoIteraciones, &tolerancia);
						Newton3(&x1, &maximoIteraciones, &tolerancia);
						do
						{
							printf("\n%cQu%c operaci%cn quieres realizar? \n1. Sacar otra ra%cz \n2. Regresar a menu principal \n",168,130,162,161);
							scanf("%d", &resp);
						}while(resp < 1 || resp > 2);
					}while(resp != 2);
				}
			break;
			case 4:
				Metodo(&met);
				if (met == 1)
				{
					do
					{
						DatosSecante(&x1, &x2, &maximoIteraciones, &tolerancia);
						Secante4(&x1, &x2, &maximoIteraciones, &tolerancia);
						do
						{
							printf("\n%cQu%c operaci%cn quieres realizar? \n1. Sacar otra ra%cz \n2. Regresar a menu principal \n",168,130,162,161);
							scanf("%d", &resp);
						}while(resp < 1 || resp > 2);
					}while(resp != 2);
				}else
				{
					do
					{
						DatosNewton(&x1, &maximoIteraciones, &tolerancia);
						Newton4(&x1, &maximoIteraciones, &tolerancia);
						do
						{
							printf("\n%cQu%c operaci%cn quieres realizar? \n1. Sacar otra ra%cz \n2. Regresar a menu principal \n",168,130,162,161);
							scanf("%d", &resp);
						}while(resp < 1 || resp > 2);
					}while(resp != 2);
				}
			break;
		}
	}while(resp != 1);
	return 0;
}

void Metodo(int *met)
{
	do
	{
		printf("\n%cQu%c m%ctodo quiere usar? \n1.Secante \n2.Newton\nR = ",168, 130,130);
		scanf("%d", met);
		if(*met != 1 && *met != 2)
		{
			printf("\nValor invalido intente nuevamentes");
		}
	}while(*met != 1 && *met != 2);
}

void DatosNewton(double *x1, int *maximoIteraciones, double *tolerancia)
{
	printf("\nIngrese el valor inicial: ");
	scanf("%lf", x1);
	printf("\nIngrese el numero maximo de iteraciones: ");
	scanf("%d", maximoIteraciones);
	printf("\nIngrese la tolerancia: ");
	scanf("%lf", tolerancia);
}

void DatosSecante(double *x1, double *x2, int *maximoIteraciones, double *tolerancia)
{
	printf("\nIngrese el primer valor del intervalo: ");
	scanf("%lf", x1);
	printf("\nIngrese el segundo valor del intervalo: ");
	scanf("%lf", x2);
	printf("\nIngrese el numero maximo de iteraciones: ");
	scanf("%d", maximoIteraciones);
	printf("\nIngrese la tolerancia: ");
	scanf("%lf", tolerancia);
}

void Newton1(double *x1, int *maximoIteraciones, double *tolerancia)
{
	double x2, tol, fxk, f_xk, raiz;
	int cont = 0;
	printf("\ni \t\t\t xk \t\t\t\t f(xk) \t\t\t\t f'(xk) \t\t\t Er");
	do
	{
		printf("\n%d \t\t\t %lf \t\t\t", cont, *x1);
		fxk = pow(*x1,2)*cos(*x1)-2 * *x1;
		printf("%lf \t\t\t ", fxk);
		f_xk = 2 * *x1 * cos(*x1)-pow(*x1,2) * sin(*x1) - 2 * *x1;
		printf("%lf \t\t ", f_xk);
		x2 = *x1 - (fxk/f_xk);
		tol = fabs((x2-*x1)/fabs(x2));
		printf("%lf", tol);
		if(tol >= *tolerancia)
		{
			raiz = *x1;
		}else
		{
			raiz = *x1;
		}
		cont++;
		*x1 = x2;
	}while(cont <= *maximoIteraciones && tol >= *tolerancia);
	printf("\nLa aproximacion de la raiz es: %lf", raiz);
}

void Newton2(double *x1, int *maximoIteraciones, double *tolerancia)
{
	double x2, tol, fxk, f_xk, raiz;
	int cont = 0;
	printf("\ni \t\t\t xk \t\t\t\t f(xk) \t\t\t\t f'(xk) \t\t\t Er");
	do
	{
		printf("\n%d \t\t\t %lf \t\t\t", cont, *x1);
		fxk = (6-(2/pow(*x1,2)))*(exp(*x1+2)/4)+1;
		printf("%lf \t\t\t ", fxk);
		f_xk = ((3*pow(*x1,3)-*x1+2)*exp(*x1+2))/2*pow(*x1,3);
		printf("%lf \t\t ", f_xk);
		x2 = *x1 - (fxk/f_xk);
		tol = fabs((x2-*x1)/fabs(x2));
		printf("%lf", tol);
		if(tol >= *tolerancia)
		{
			raiz = *x1;
		}else
		{
			raiz = *x1;
		}
		cont++;
		*x1 = x2;
	}while(cont <= *maximoIteraciones && tol >= *tolerancia);
	printf("\nLa aproximacion de la raiz es: %lf", raiz);
}

void Newton3(double *x1, int *maximoIteraciones, double *tolerancia)
{
	double x2, tol, fxk, f_xk, raiz;
	int cont = 0;
	printf("\ni \t\t\t xk \t\t\t\t f(xk) \t\t\t\t f'(xk) \t\t\t Er");
	do
	{
		printf("\n%d \t\t\t %lf \t\t\t", cont, *x1);
		fxk = pow(*x1,3)-3*sin(pow(*x1,2))+1;
		printf("%lf \t\t\t ", fxk);
		f_xk = 3*pow(*x1,2)-6 * *x1 * cos(pow(*x1,2));
		printf("%lf \t\t ", f_xk);
		x2 = *x1 - (fxk/f_xk);
		tol = fabs((x2-*x1)/fabs(x2));
		printf("%lf", tol);
		if(tol >= *tolerancia)
		{
			raiz = *x1;
		}else
		{
			raiz = *x1;
		}
		cont++;
		*x1 = x2;
	}while(cont <= *maximoIteraciones && tol >= *tolerancia);
	printf("\nLa aproximacion de la raiz es: %lf", raiz);
}

void Newton4(double *x1, int *maximoIteraciones, double *tolerancia)
{
	double x2, tol, fxk, f_xk, raiz;
	int cont = 0;
	printf("\ni \t\t\t xk \t\t\t\t f(xk) \t\t\t\t f'(xk) \t\t\t Er");
	do
	{
		printf("\n%d \t\t\t %lf \t\t\t", cont, *x1);
		fxk = pow(*x1,3)+ 6 * pow(*x1,2) + 9.4 * *x1 + 2.5;
		printf("%lf \t\t\t ", fxk);
		f_xk = 3*pow(*x1,2)-12 * *x1 + 9.4;
		printf("%lf \t\t ", f_xk);
		x2 = *x1 - (fxk/f_xk);
		tol = fabs((x2-*x1)/fabs(x2));
		printf("%lf", tol);
		if(tol >= *tolerancia)
		{
			raiz = *x1;
		}else
		{
			raiz = *x1;
		}
		cont++;
		*x1 = x2;
	}while(cont <= *maximoIteraciones && tol >= *tolerancia);
	printf("\nLa aproximacion de la raiz es: %lf", raiz);
}

void Secante1(double *x1, double *x2, int *maximoIteraciones, double *tolerancia)
{
	//x^2cos(x)−2x
	double tol, fa, f_a, fb, f_b, fp, f_p, raiz;
	int cont = 0;
	printf("\ni \t a \t\t b \t\t f(a) \t\t f(b) \t\t p \t\t f(p) \t\t Er");
	do
	{
		printf("\n%d \t", cont);
		fa = *x1;
		printf("%lf \t ", fa);
		fb = *x2;
		printf("%lf \t ", fb);
		f_a = pow(*x1,2)*cos(*x1)-2 * *x1;
		printf("%lf \t ", f_a);
		f_b = pow(*x2,2)*cos(*x2)-2 * *x2;
		printf("%lf \t ", f_b);
		fp = fb-f_b*((fa-fb)/(f_a-f_b));
		printf("%lf \t ", fp);
		f_p = pow(fp,2)*cos(fp)-2 * fp;
		printf("%lf \t ", f_p);
		tol = fabs((fb-fa)/fabs(fb));
		printf("%lf", tol);
		*x1 = *x2;
		*x2 = fp;
		cont++;
		raiz = fp;
	}while(cont <= *maximoIteraciones && tol >= *tolerancia);
	printf("\nLa raiz es: %lf", raiz);
}

void Secante2(double *x1, double *x2, int *maximoIteraciones, double *tolerancia)
{
	//x^2cos(x)−2x
	double tol, fa, f_a, fb, f_b, fp, f_p, raiz;
	int cont = 0;
	printf("\ni \t a \t\t b \t\t f(a) \t\t f(b) \t\t p \t\t f(p) \t\t Er");
	do
	{
		printf("\n%d \t", cont);
		fa = *x1;
		printf("%lf \t ", fa);
		fb = *x2;
		printf("%lf \t ", fb);
		f_a = (6-(2/pow(*x1,2)))*(exp(*x1+2)/4)+1;
		printf("%lf \t ", f_a);
		f_b = (6-(2/pow(*x2,2)))*(exp(*x2+2)/4)+1;
		printf("%lf \t ", f_b);
		fp = fb-f_b*((fa-fb)/(f_a-f_b));
		printf("%lf \t ", fp);
		f_p = (6-(2/pow(fp,2)))*(exp(fp+2)/4)+1;
		printf("%lf \t ", f_p);
		tol = fabs((fb-fa)/fabs(fb));
		printf("%lf", tol);
		*x1 = *x2;
		*x2 = fp;
		cont++;
		raiz = fp;
	}while(cont <= *maximoIteraciones && tol >= *tolerancia);
	printf("\nLa raiz es: %lf", raiz);
}

void Secante3(double *x1, double *x2, int *maximoIteraciones, double *tolerancia)
{
	//x^2cos(x)−2x
	double tol, fa, f_a, fb, f_b, fp, f_p, raiz;
	int cont = 0;
	printf("\ni \t a \t\t b \t\t f(a) \t\t f(b) \t\t p \t\t f(p) \t\t Er");
	do
	{
		printf("\n%d \t", cont);
		fa = *x1;
		printf("%lf \t ", fa);
		fb = *x2;
		printf("%lf \t ", fb);
		f_a = pow(*x1,3)-3*sin(pow(*x1,2))+1;
		printf("%lf \t ", f_a);
		f_b = pow(*x2,3)-3*sin(pow(*x2,2))+1;
		printf("%lf \t ", f_b);
		fp = fb-f_b*((fa-fb)/(f_a-f_b));
		printf("%lf \t ", fp);
		f_p = pow(fp,3)-3*sin(pow(fp,2))+1;
		printf("%lf \t ", f_p);
		tol = fabs((fb-fa)/fabs(fb));
		printf("%lf", tol);
		*x1 = *x2;
		*x2 = fp;
		cont++;
		raiz = fp;
	}while(cont <= *maximoIteraciones && tol >= *tolerancia);
	printf("\nLa raiz es: %lf", raiz);
}

void Secante4(double *x1, double *x2, int *maximoIteraciones, double *tolerancia)
{
	//x^2cos(x)−2x
	double tol, fa, f_a, fb, f_b, fp, f_p, raiz;
	int cont = 0;
	printf("\ni \t a \t\t b \t\t f(a) \t\t f(b) \t\t p \t\t f(p) \t\t Er");
	do
	{
		printf("\n%d \t", cont);
		fa = *x1;
		printf("%lf \t ", fa);
		fb = *x2;
		printf("%lf \t ", fb);
		f_a = pow(*x1,3)+ 6 * pow(*x1,2) + 9.4 * *x1 + 2.5;
		printf("%lf \t ", f_a);
		f_b = pow(*x2,3)+ 6 * pow(*x2,2) + 9.4 * *x2 + 2.5;
		printf("%lf \t ", f_b);
		fp = fb-f_b*((fa-fb)/(f_a-f_b));
		printf("%lf \t ", fp);
		f_p = pow(fp,3)+ 6 * pow(fp,2) + 9.4 * fp + 2.5;
		printf("%lf \t ", f_p);
		tol = fabs((fb-fa)/fabs(fb));
		printf("%lf", tol);
		*x1 = *x2;
		*x2 = fp;
		cont++;
		raiz = fp;
	}while(cont <= *maximoIteraciones && tol >= *tolerancia);
	printf("\nLa raiz es: %lf", raiz);
}
