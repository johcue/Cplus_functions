#include <iostream>
#include <cstdlib>
#include <math.h>
/*1-Construir una función que reciba como parámetro un numero entero de 5 dígitos
y retorne la suma de sus dígitos, validar si la suma es un numero primo. 

2-Realizar una función que permita capturar una matriz de n elementos.

3-Realizar una función que permita imprimir una matriz de n elementos, validar si
su elemento menor es primo.

4-Realizar una función que imprima un vector bidimensional descendente de los
cuadrados de los primeros 20 números enteros (400,361,324,289,256,225,196,169,144,121...4,1).

5-Dado un vector de n elementos realizar una función que permita determinar si la
suma de los números comprendidos entre el valor mayor y el valor menor es un número par.

6- Construir una función que reciba como parámetros de entrada dos matrices de
nxn y devuelva la multiplicación en una tercera matriz.

7-Dadas dos matrices 3x3 enteras, realizar una función que determine si la suma
de sus triangulares superiores son iguales.

8- Construir una función que reciba como parámetros una matriz 4x4 entera y
retorne los elementos en posición impar.

9- Construir una función que rellene un array bidimensional con los números primos
comprendidos entre 1 y 100 y los muestre en pantalla en orden ascendente.

10-Realizar una función que permita imprimir un vector con la suma de las columnas
de una matriz de 4*4 entera.*/


using namespace std;


//FUNCION SUMA
int sumd(int n)
{
	int sum, d1,d2,d3,d4,d5;
	sum=0;
	if(n>=10000 && n<=99999 || n<=-10000 && n>=-99999 )
	{
		
		d1=n/10000;
		d2=n%10000/1000;
		d3=n%10000%1000/100;
		d4=n%10000%1000%100/10;
		d5=n%10000%1000%100%10;
		sum=sum+d1+d2+d3+d4+d5;
		return(sum);
	}
	else
	{
		return(1);
	}
}

//PROCESO PRIMO
void prim(int num)
{
	int div=0,j;
	for(j=1;j<=num;j++)
	{
		if(num%j==0)
		{
			div++;
		}
	}
	if(div==2)
	{
		cout<< num <<" ES PRIMO "<<endl;
	}
	else
	{
		cout<< num <<" NO ES PRIMO "<<endl;
	}
}

//PROCESO LECTURA DE MATRIZ
void lec(int m[][30], int fil, int col)
{
    int i,j;
    cout<<endl;
    for(i=0;i<fil;i++)
    {
	   for(j=0;j<col;j++)
	    {
		cout<<"Por favor ingrese el ["<<i+1<<"] ["<<j+1<<"] elemento ";
		cin>>m[i][j];
	}
	cout<<endl;
	}
}

//PROCESO ESCRITURA DE MATRIZ
void esc(int m[][30], int fil, int col)
{
    int i,j;
    cout<<endl;
    for(i=0;i<fil;i++)
      {
	    for(j=0;j<col;j++)
	      {
	     	cout<<"        ["<<m[i][j]<<"]         ";
     	}
	     cout<<endl;
	    }
}

//PROCESO MATRIZ DE CUADRADOS
void m20(int mvie[][30], int fil, int col )
{
	int i, j, n=20;
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<4; j++)
		{
			mvie[i][j]=pow(n,2);
			n--;
			cout<<"      ["<<mvie[i][j]<<"]    ";
		}
		cout<<endl;
	}
	
}
	
	

//FUNCION MENOR
int mem(int m[][30], int fil, int col)
{
    int i,j, men=9999999;
	cout<<endl;
	for(i=0;i<fil;i++)
	{
	   for(j=0;j<col;j++)
	   	{
		   	if(m[i][j]<men)
			   {
			     men=m[i][j];
			   }
			}
	}
	return(men);
}

//CAPTURA VECTOR
void lecv(int v[],int n)
{
	int i;
	cout<<endl;
	cout<<"\t CAPTURA VECTOR "<<endl;
	cout<<endl;
	for (i=0;i<n;i++)
	{
		cout<<"Ingrese el ["<<i+1<<"] elemento ";
		cin>>v[i];
	}
}

//LECTURA VECTOR
void escv(int v[],int n)
{
	int i;
	cout<<endl;
	cout<<"\t ESCRITURA VECTOR "<<endl;
	cout<<endl;
	for (i=0;i<n;i++)
	{
		cout<<" ["<<v[i]<<"]  ";
		
	}
}


//FUNCION MENOR VECTOR
int menorv(int v[],int n)
{
	int i,men=9999999;
	cout<<endl;
	for (i=0;i<n;i++)
	{
		if(v[i]<men)
		{
			men=v[i];
		}
		
	}
	return(men);
}

//FUNCION MAYOR VECTOR
int mayorv(int v[],int n)
{
	int i,may=-9999999;
	cout<<endl;
	for (i=0;i<n;i++)
	{
		if(v[i]>may)
		{
			may=v[i];
		}
		
	}
	return(may);
}


//PROCEDIMIENTO PAR
void parv(int n)
{
		if (n%2==0)
		{
			cout<<"Es par"<<endl;
		}
		else
		{
			cout<<"No mames no es par "<<endl;
		}	
}

//MULTIPLICACION DE MATRICES
void mulm(int m1[][30], int m2[][30], int mx[][30],int fil, int col)
{
	int j,i;
	cout<<endl;
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			mx[i][j]=mx[i][j]+(m1[i][j]*m2[i][j]);
		}
	}
}

//TRIANGULAR SUPERIOR
int ts(int m[][30], int fil, int col)
{
    int i,j, ts;
    ts=0;
    cout<<endl;
    for(i=0;i<fil;i++)
    {
	   for(j=0;j<col;j++)
	    {
		  if(i<j)
			 {
			 	ts=ts+m[i][j];
			 }
	     }
	}
	return (ts);
}

//LAS TRANSPUESTAS SON IGUALES
void enc(int a, int b)
{
    int e;
    e=0;
    cout<<endl;
      if(a==b)
		{
			e=1;
		}
	if(e==1)
	{
		cout<<"----> Las Triangulares Superiores son iguales "<<endl;
	}
	else
	{
		cout<<"----> Las Triangulares Superiores no son iguales "<<endl;
	}
}

//SUMA DE COLUMNAS DE UNA MATRIZ
void sumcol(int m[][30], int v[], int fil, int col)
{
    int i,j,sumc;
    cout<<endl;
    for(j=0;j<col;j++)
    {
       sumc=0;
	   for(i=0;i<fil;i++)
	     {
	       sumc=sumc+m[i][j];
		 }
	     v[j]=sumc;
	}
	
	for(j=0;j<col;j++)
	{
		cout<<" ["<<v[j]<<"] ";
	}
	
}

//ESCRITURA MATRIZ IMPAR
void escp(int m[][30], int fil, int col)
{
    int i,j,k;
    cout<<endl;
    for(i=0;i<fil;i++)
      {
	    for(j=0;j<col;j++)
	      {			 
			 	if((i+j)%2!=0)
			 	{ 
				 cout<<"        ["<<m[i][j]<<"]         ";	 
				 }
				 
			 }	
     	}
}



//PRIMOS DE 1 A 100 DANIEL LO HIZO :) 
void primm(int m[][30], int fil, int col)
{
	int div=0,j,i,k,pos;
    fil=10;
    col=10;
    m[10][10]={0};
	
	/*for (j=0;j<fil;j++)
    {
    	for (i=0;i<col;i++)
    	{
    		m[j][i]=0;
		}
	}*/
	
	pos=1;
	for (i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{	for(k=1;k<=pos;k++)
			{
				
			   if(pos%k==0)
		    	{
			           div++;
		        }   
	         }
		        if(div==2)
		         {
		         	m[i][j]=pos;
		   	         cout<<"     ["<<m[i][j]<<"]       ";
		         }
				 div=0;
				 pos++;
		}
		
	}
	
}



//MENU KAWAII :3
void menu()
{
	int opc,i,j,n,num,sum,resp,fil1,col1,ts1,ts2;
	int m1[30][30]={0},m2[30][30]={0},mx[30][30]={0},men1,v[30]={0},mev,mayv, vr[30]={0},mv[30]={0};
	do
	{
		system("cls");
		cout<<"\t \t  _____________________________________________ "<<endl;
		cout<<"\t \t |                    (0 0)                    |"<<endl;
		cout<<"\t \t |        ----o000---(_____)---0oo---          |"<<endl;
		cout<<"\t \t |_____________________________________________|"<<endl;
		cout<<"\t \t |---------------------------------------------|"<<endl;
		cout<<"\t \t |              MENU DE OPCIONES               |"<<endl;
		cout<<"\t \t |---------------------------------------------|"<<endl;
		cout<<"\t \t | 1. SUMA Y PRIMO DE LOS DIGITOS DE UN NUMERO |"<<endl;
		cout<<"\t \t | 2. CAPTURA DE MATRIZ                        |"<<endl;
		cout<<"\t \t | 3. ESCRITURA DE MATRIZ Y MENOR PRIMO        |"<<endl;
		cout<<"\t \t | 4. MATRIZ CON LOS 20 PRIMEROS NUMEROS       |"<<endl;
		cout<<"\t \t |    ENTEROS AL CUADRADO                      |"<<endl;
		cout<<"\t \t | 5. VECTOR CON PAR MAYOR O MENOR             |"<<endl;
		cout<<"\t \t | 6. MULTIPLICACION DE MATRICES               |"<<endl;
		cout<<"\t \t | 7. SUMA DE TRIANGULARES SUPERIORES DE       |"<<endl;
		cout<<"\t \t |     DOS MATRICES                            |"<<endl;
		cout<<"\t \t | 8. MATRIZ CON ELEMENTOS EN POSICION IMPAR   |"<<endl;
		cout<<"\t \t | 9. NUMEROS PRIMOS DENTRO DEUNA MATRIZ       |"<<endl;
		cout<<"\t \t | 10. VECTOR Y MATRIZ                         |"<<endl;
		cout<<"\t \t | 11. TERMINAR                                |"<<endl;
		cout<<"\t \t |---------------------------------------------|"<<endl;
		cout<<"\t \t |_____________________________________________|"<<endl;
		cout<<endl;
		cout<<"\t \t ----->>POR FAVOR ESCOJA UNA OPCION<<----- :: ";
		cin>>opc;
		system("cls");
		switch(opc)
		{
			case 1: cout<<"\t \t  SUMA Y PRIMO DE LOS DIGITOS DE UN NUMERO"<<endl;
			        cout<<endl;
					cout<<"Por favor ingrese el numero a validar ";
			        cin>>n;
					resp=sumd(n);
					if(n>=10000 && n<=99999 || n<=-10000 && n>=-99999 )
					{
					    cout<<" La  suma es "<<resp<<endl;
					    prim(resp);
					}
					else
		            {
					   cout<<"\t El numero ingresado No posee cinco (5) digitos"<<endl;
					}
			    system("pause");
			    break;
				
			case 2: cout<<"\t \t  CAPTURA DE MATRIZ  "<<endl;
			        cout<<endl;
					cout<<"Por favor ingrese el total de filas y columnas respectivamente ";
			        cin>>fil1>>col1;
			        cout<<endl;
			        lec(m1,fil1,col1);
			        system("pause");
			        break;
			        
			case 3: cout<<"\t \t  ESCRITURA DE MATRIZ  "<<endl;
			        cout<<endl;
			        cout<<"Por favor ingrese el total de filas y columnas respectivamente ";
			        cin>>fil1>>col1;
					lec(m1,fil1,col1);
					cout<<"\t        La Matriz"<<endl;
			        esc(m1,fil1,col1);
			        men1=mem(m1,fil1,col1);
			        cout<<endl;
			        cout<<"El menor numero de la matriz "<<men1<<endl;
			        prim(men1);
			        system("pause");
			        break;	
					
			case 4: cout<<"\t \t  MATRIZ CON LOS 20 PRIMEROS NUMEROS ENTEROS AL CUADRADO "<<endl;
					cout<<endl;
					m20(m1,fil1,col1);
			        system("pause");
			        break;
			        			 
			
			case 5: cout<<"\t \t  VECTOR CON PAR MAYOR O MENOR    "<<endl;
			        cout<<endl;
					cout<<"Por favor ingrese el total de elementos ";
			        cin>>n;
			        cout<<endl;
					cout<<"\t CAPTURA VECTOR "<<endl;
					cout<<endl;
					for (i=0;i<n;i++)
					{
					cout<<endl;
					cout<<"Ingrese el ["<<i+1<<"] elemento ";
					cin>>v[i];
					}
					cout<<endl;
					cout<<"\t ESCRITURA VECTOR "<<endl;
					cout<<endl;
					for (i=0;i<n;i++)
					{
					cout<<" ["<<v[i]<<"]  ";		
					}
					mev=menorv(v,n);
					cout<<endl;
					cout<<"\t El menor numero del vector es "<<mev<<endl;
					mayv=mayorv(v,n);
					cout<<"\t El numero mayor del vector es "<<mayv<<endl;
					cout<<endl;
					cout<<"SUMA DE LOS NUMEROS ENTRE EL MENOR Y EL MAYOR DEL VECTOR"<<endl;
					sum=0;
					for(j=mev;j<mayv;j++)
					{
						sum=sum+j;
					}
					cout<<" La suma es "<<sum<<endl;
					parv(sum);
					system("pause");
					break;

	        case 6: cout<<"\t \t MULTIPLICACION DE MATRICES    "<<endl;
	                cout<<endl;
					cout<<"Por favor ingrese el total de filas" <<endl;
					cout<<" y columnas respectivamente para cada matriz ";
					cin>>fil1>>col1;
					if(fil1==col1)	 
					{cout<<"\t CAPTURA MATRIZ No.1 "<<endl;
		            lec(m1,fil1,col1);
		            cout<<endl;
		            
		            cout<<"\t CAPTURA MATRIZ No.2"<<endl;
		            lec(m2,fil1,col1);
		            cout<<endl;
		        
		            cout<<"\t ESCRITURA MATRICES"<<endl;
					cout<<endl;
					
					cout<<"\t          MATRIZ 1 "<<endl;
					esc(m1,fil1,col1);
		            cout<<endl;
		         
				    cout<<"\t          MATRIZ 2 "<<endl;
				    esc(m2,fil1,col1);
		            cout<<endl;
					
					cout<<"\t         MATRIZ MULTIPLICACION "<<endl;
					mulm(m1,m2,mx,fil1,col1);
					esc(mx,fil1,col1);
					cout<<endl;
					}
					else
						{
						    cout<<"\t La matriz no es cuadrada"<<endl;
							} 
					system("pause");
		            break;
		            
		    case 7: cout<<"\t \t SUMA DE TRIANGULARES SUPERIORES DE DOS MATRICES  "<<endl;        
		            fil1=3;
		            col1=3;
					cout<<"\t CAPTURA MATRIZ No.1 "<<endl;
		            lec(m1,fil1,col1);
		            cout<<endl;
	    			system("pause");
					system("cls");
					
					cout<<"\t CAPTURA MATRIZ No.2"<<endl;
				    lec(m2,fil1,col1);
					cout<<endl;
					system("pause");
				    system("cls");
				    
					cout<<"\t      ESCRITURA MATRICES"<<endl;
				    cout<<endl;
					cout<<"\t       MATRIZ 1 "<<endl;
					esc(m1,fil1,col1);
					ts1=ts(m1,fil1,col1);
					cout<<endl;
				    cout<<"\t La Triangular Superior es "<<ts1<<endl;
		            cout<<endl;
						 
					cout<<"\t         MATRIZ 2 "<<endl;
				    esc(m2,fil1,col1);
				    ts2=ts(m2,fil1,col1);
				    cout<<endl;
				    cout<<"\t La Triangular Superior es "<<ts2<<endl;
		            cout<<endl;
		            
					enc(ts1,ts2);
					cout<<endl;	
				    system("pause");
		            break;
		             
		 case 8: cout<<"\t \t MATRIZ CON ELEMENTOS EN POSICION IMPAR  "<<endl;
		            fil1=4;
					col1=4;
					cout<<"\t \t CAPTURA MATRIZ "<<endl;
		            lec(m1,fil1,col1);
		            cout<<endl;
				
					cout<<"\t \t ESCRITURA MATRIZ"<<endl;
					escp(m1,fil1,col1); 
					system("pause");
		            break;
		            
	     case 9: cout<<"\t \t NUMEROS PRIMOS DENTRO DE UNA MATRIZ  "<<endl;			
		            primm(m1,fil1,col1);
		            cout<<endl;
	    			system("pause");
					break;	
		                    
		 case 10: cout<<"\t \t VECTOR Y MATRIZ "<<endl;  
			        fil1=4;
					col1=4;
					cout<<"\t \t CAPTURA MATRIZ "<<endl;
		            lec(m1,fil1,col1);
		            cout<<endl;
				    system("pause");
					system("cls");
					
					cout<<"\t \t ESCRITURA MATRIZ"<<endl;
					esc(m1,fil1,col1); 
					cout<<endl;
					cout<<"\t El vector suma es "<<endl;
					sumcol(m1,v,fil1,col1);
					cout<<endl;
					system("pause");
		            break;
					
					                    


}
		
	}while(opc!=11);
		cout<<"\t \t                     (0 0)                   "<<endl;
		cout<<"\t \t         ----o000---(_____)---0oo---         "<<endl;
		cout<<"\t \t ___________________________________________ "<<endl;
		cout<<"\t \t ------------------------------------------- "<<endl;
		cout<<"\t \t                    FREEBATCH                 "<<endl;
		cout<<"\t \t ------------------------------------------- "<<endl;
		cout<<"\t \t  "<<endl;
	    cout<<endl;
}



int main(int argc, char** argv) 
{
	system("color f4");
	menu();
	system("pause");
	return 0;
}
