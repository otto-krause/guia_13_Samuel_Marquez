#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int v[6],acu=0,z;
	
	ing(v);
	
	for(z=0;z<5;z++){
		
	printf("\n La resistencia %d es : %d ",z,v[z]);	
	acu=acu+v[z];	
	}
	
	printf("\n La resistencia total es %d ",acu);

	}

	
	int ing(int a[]){
		
	int i;
	
	for (i=0;i<5;i++){
		
		printf("\n Ingrese una resistencia ");
		scanf("%d",&a[i]);
	}		
		
	}

2:
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main() {
		
	float v[5];
	ing(v);
	prom(v);
	may(v);
	
	}

	
	void ing(float uac[]){
	
	int i;
	
	for (i=0;i<5;i++){
		
		printf("Ingrese un numero ");
		scanf("%f",&uac[i]);
		
	}
	
		}
	
	void prom(float v[5]){
	float acu=0,xd=0;
	int n;
	
	for (n=0;n<5;n++){
		
		acu= acu+v[n];
	}
	xd= acu/5;
	printf("\n El promedio de los numeros es %.2f ",xd);
	}	

	void may(float v[5]){
		int a;
		float copy=0;
		
		for (a=0;a<5;a++){
			
			if (copy < v[a]){
				copy= v[a];
			}
			
		}
		
		printf("\n El numero mayor es %.2f ",copy);
		
	}

3:

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main() {
		
	int i,num1,num2,me,ma,dif;
	
	printf("Ingrese un numero ");
	scanf("%d",&num1);	
	
	printf("Ingrese un numero ");
	scanf("%d",&num2);	

	n1m(num1,num2);



	}
	
	int n1m(int num1,int num2,int v[]){
		
	int j,dif,z,acu;
	
	if (num1>num2){
		
	dif=num1-num2;
	
	acu=num2;
	
	for(j=0;j<dif;j++){
	
	acu=acu+1;
	
	v[j]=acu;
		
	}	
	
	printf("Los numeros entre %d y %d son : ",num2,num1);
	
	}else{
	
	dif=num2-num1;
	acu=num1;
	
	for(j=0;j<dif;j++){
	
	
	acu=acu+1;
	v[j]=acu;
		
	}
	
	printf("Los numeros entre %d y %d son ",num1,num2);	
	
	}
	


	for(z=0;z<(dif-1);z++){
	printf(",%d ",v[z]);	
	}
	

	}

4:
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main() {
	
	float v[30],acu=0,prom=0;
	int b;
	ing(v);
	
	for (b=0;b<30;b++)
	{
	acu=acu+v[b];	
	}
	
	prom=acu/30;
	
	printf("El promedio del curso es %.2f ",prom);
	
	
	
	}

	
	void ing(int a[]){
		
	int i;
	
	for(i=0;i<30;i++)
	
	{
	printf("Ingrese la nota de el alumno %d ",i);
	scanf("%f",&a[i]);	
		
	}
		
	}

5:

#include <stdio.h>
#include <stdlib.h>


	int main( ) {
	
	int v[20],i,z,acu=0,vt=0,a,mvp,mv,md;
	char t;
	
	for (i=0;i<20;i++){
		
		for(z=0;z<15;z++){
			
		printf("Ingrese las ventas de el dia %d de el vendedor %d : ",z,i);	
		scanf("%d",&a);
		acu=acu+a;
		
		if(mvp<a){
		
		mvp=a;
		mv=i;
		md=z;
		}
		
		}	
	
	vt=vt+acu;
	v[i]=acu;	
	acu=0;
	}
	
	printf("\n Las ventas totales son %d ",vt);
	printf("\n El mejor vendedor fue %d, el dia %d, con %d u. vendidas ",mv,md,mvp);
	
	printf("\n Quiere ver las ventas totales de los vendedores s/n ");
	scanf("%s",&t);
	
	if (t='s'){
	vent(v);
	}
	
	}
	
	
	int vent(int v[20]){
		
	int h;
	
	for(h=0;h<20;h++){
		printf("\n Las ventas de el vendedor %d son : %d",h,v[h]);
	}
		
	}

6:

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	int z,po=0,ri=0;
	float v[20];
	
	ing(v);
	

	
	for (z=0;z<20;z++){
	
	if (v[z]>=20000){
		ri=ri+1;
	}else{
		po=po+1;
	}		
	
	}	
	
	printf("\n Las personas que ganan mas de 20 mil pesos son %d",ri);
	printf("\n Las personas que ganan menos de 20 mil pesos son %d",po);	
	
	
	return 0;
	}
	
	
	
	void ing(float a[]){
		
	int i;
	
	for (i=0;i<20;i++){
		
		printf("Ingrese un salario ");
		scanf("%f",&a[i]);
	}		
		
	}

7:

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	int z,po=0,ri=0;
	float v[16];
	
	ing(v);
	

	printf("Los alumnos: ");
	for (z=1;z<16;z++){
	
	if (v[z]>=8){
		printf(" %d, ",z);
	}	
	
	}
	
	printf("aprobaron con mas de 8 ");
	
	return 0;
	}
	
	
	
	void ing(float a[]){
		
	int i;
	
	for (i=1;i<16;i++){
		
		printf("Ingrese una nota ");
		scanf("%f",&a[i]);
	}		
		
	}

8:
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
	int num=0, i=0, x=0, y=1, z=1, j;
	
	printf("Ingrese el numero maximo : ");
	scanf("%d",&num);
	int v[num];
	
	
	for(i=0;i<num;i++){
		z = x + y;
		x = y;
		y = z;
		
		v[i]=z;
		
	}
	
	for (j=0;j<num;j++){
		printf("%d, ",v[j]);
	}
		
}

10:

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float v[10];
	
	ing(v);
	suma(v);
	prod(v);
	pro(v);
	
	return 0;
}

	
	void ing(float a[]){
		
	int i;
	
	for(i=0;i<10;i++){
		
	printf("\n Ingrese un numero ");
	scanf("%f",&a[i]);	
	}	
		
	}
	
	void suma(float v[10]){
		
	int h;
	float acu=0;
	
	for(h=0;h<10;h++){
		
	acu=acu+v[h];
		
	}

	printf("\n La suma de los 10 numeros son %.2f ",acu);	
	}
	
	
	void prod(float v[10]){
		
	int j;
	float mul=1;
	
	for(j=0;j<10;j++){
		
	mul=mul*v[j];	
		
	}
	
	printf("\n El producto de los 10 numeros son %.2f ",mul);	
		
	}
	
	
	
	void pro(float v[10]){
		
	int p,k,cont1=0;
	float acud=0,prom=0;
	
	for(p=0;p<10;p++){
		
	acud=acud+v[p];
		
	}	
	
	prom=acud/10;
	
	for(k=0;k<10;k++){
		
	if(v[k]<prom){
		
	cont1=cont1+1;	
		
	}	
		
	
	}
	
	printf("\n Los numeros debajo de el promedio son %d ",cont1);
	printf("\n El promedio de los numeros son %.2f ",prom);		
		
	}



