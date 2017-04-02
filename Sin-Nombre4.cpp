#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>		
	using namespace std;
	main()
{//main
		
	int n=0,x,y;
	float l,area,p;
	float r,pc,ac;
	float lr,lr1,pr,ar;
	float d,d1,aro,pro;
	float b,h,t2,t3,pt,at;
	float rc,vc,ch;
	float re,ve;
	float rci,hci,vdc;
	float cr,vcubo;
	float y1,z,z1,z2,z3,x1;
	while(n!=3)
	{//wailnumero1

       {//nose	
	    cout<<"Hola amiguito, hoy aprenderas Areas, Perimetros y Volumenes de figuras geometricas""\n""\n";
		cout<<"Elige un numero del 1 al 3, para empezar a aprender = ""\n""\n";
		cout<< "1= Calcula Areas y Perimetros de Figuras Geometricas =""\n""\n";
		cout<< "2= Calcula Volumenes de Figuras Geometricas =""\n""\n";
		cout<< "3 =Salida""\n""\n";	
		cin>>n;
		system("cls");
			system("color 21");		
	   }//nose
	   
		switch(n)
		{//switch1
		while(x!=6)
		{//while2
		 case 1:
		 {//caseprincipal
			cout<<"Hola, has elegido la opcion de AREAS Y PERIMETROS" "\n\n";
		    cout<<"Elige el numero correspondiente a la figura sobre la que quieres saber su Area y Perimetro" "\n\n";
			cout<<"Si quieres regresar al Menu Principal, aprieta 6" "\n\n";
			cout<<"1.Cuadrado []""\n";
		    cout<<"2.Circulo O\n";
		    cout<<"3.Rectangulo [__]""\n";
		    cout<<"4.Rombo <>""\n";
		    cout<<"5.Triangulo /_\ ""\n";
		    cout<<"6.Regresa al Menu Principal""\n";
		    cin>>x;
		    system("cls");
			 
			switch(x)
			{//swtich2
				    {
				     case 1:
				     cout<<"Area y perimetro del cuadrado""\n""\n";
			         cout<<"Dame las medidas de los lados del señor cuadrado:  ";
                     cin>>l;
                     p = l+l+l+l;
	                 cout<<"Perimetro =======>   "<<p<<"\n";
			         area = l*l;
	                 cout<<"Area =======>   "<<area<<"\n";
                     system("pause");
		             system("cls");
					}
						break;
					{
					 case 2:
					 cout<<"Area y perimetro de un circulo""\n""\n";
			         cout<<"Dame el radio del señor circulo:  ";
			         cin>>r;
	                 pc = (2*3.1416)*r;
                     cout<<"Perimetro =======>   "<<pc<<"\n";
	                 ac = (3.1416*r),pow(r,2);
	                 cout<<"Area =======>   "<<ac<<"\n";
	                 system("pause");
	                 system("cls");
						}
						break;
				   {
					 case 3:
				   	 cout<<"Area y perimetro de un rectangulo  ""\n""\n";
			         cout<<"Dame la medida de los lados de la señora triangulo :  ";
			         cin>>lr;
			         cin>>lr1;
			         pr = 2*lr+2*lr1;
			         cout<<"Perimetro =======>   "<<pr<<"\n";
			         ar = lr*lr1;
			         cout<<"Area =======>   "<<ar<<"\n";
			         system("pause");
			         system("cls");			
					   }
						break;
					{
					 case 4:
				     cout<<"Area y perimetro de un Rombo  ""\n""\n";;
			         cout<<"Dame la medida de sus lados del chico rombo :  ";
			         cin>>d;
			         cin>>d1; 
			         aro = d*d1/2;
			         cout<<"Area =======>   "<<aro<<"\n";
			         pro = 4*aro;
			         cout<<"Perimetro =======>   "<<pro<<"\n";
			         system("pause");
			         system("cls");
					  }
					  break;
					 {
					  case 5:
					 cout<<"Area y perimetro de un Triangulo  ""\n""\n";;
			         cout<<"Dame la medida de sus lados, la base y la altura  :  ";
			         cin>>b;
			         cin>>h;
			         cin>>t2;
			         cin>>t3;
			         at = b*h/2;
			         cout<<"Area =======>   "<<at<<"\n";
			         pt = b+t2+t3;
			         cout<<"Perimetro =======>   "<<pt<<"\n";
			         system("pause");
			         system("cls");  	
					  } 
					   break;
					 {
					 	case 6:
					 	cout<<"Regreso""\n";
					 	system("pause");
				        system("cls");
					   }
					  }//switch2
					 }//caseprincipal
				    }//while2
					break;
					   
					      while(x!=6)
					        case 2:
					        {//case2
					          cout<<"Hola, has elegido la opcion de VOLUMENES" "\n\n";
		                      cout<<"Elige el numero correspondiente A la figura sobre la que quieres saber su Volumen" "\n\n";
			                  cout<<"Si quieres regresar al menu principal, aprieta 6" "\n\n";
			                  cout<<"1.CONO /\ ""\n";
		                      cout<<"2.ESFERA O""\n";
		                      cout<<"3.CILINDRO |_|""\n";
		                      cout<<"4.CUBO []""\n";
		                      cout<<"5.ELIPSE (  )""\n";
		                      cout<<"6.REGRESA AL MENU PRINCIPAL""\n";
		                      cin>>x;
		                      system("cls");
		                      
		                    
							  switch(x)
		                      {//switch4
		                      {
				           	  case 1:	
		                      cout<<"Volumen de Cono""\n";
				              cout<<"Para el cono, el volumen se saca multiplicando pi(3.1416) por el radio al cuadrado por la altura y el resultado se divide entre 3""\n";
				              cout<<"Ingresa primero la medida del radio y despues la altura de tu cono ""\n";
				              cin>>y;
		                      cin>>x1;
				              z1= (3.1416*pow(y,2)*x1)/3;
				              cout<<"El volumen de tu cono es : " <<z1<<"\n" ;
				              system("PAUSE");
				              system("cls");	
				              }
				              break;
				              {
				              case 2: 
				           	  cout<<"Volumen de una esfera""\n";
				              cout<<"Para la esfera, el volumen equivale al radio a la tercer potencia multiplicado por 4/3 a su vez multiplicandolo por pi(3.1416)""\n";
				              cout<<"Ingresa la medida del radio de tu esfera""\n";
				              cin>>y;
				              z1 = pow(y,3)*1.33333*3.1416;
				              cout<<"El volumen de tu esfera es : " <<z1<<"\n" ;
				              system("PAUSE");
				              system("cls");	
					          }
				              break;
					          {
					          case 3:
					          cout<<"Volumen de un cilindro""\n";
				              cout<<"Para el cilindro, el volumen se saca multiplicando pi(3.1416) por el radio al cuadrado por la altura ""\n";
				              cout<<"Ingresa primero la medida del radio y despues la altura de tu cilindro""\n";
				              cin>>y;
		                      cin>>x1;
				              z1 = 3.1416*pow(y,2)*x1;
				              cout<<"El volumen de tu cilindro es : " <<z1<<"\n" ;
				              system("PAUSE");
				              system("cls");	
					          }
					          break;
				      	      {
					          case 4:
					          cout<<"Volumen de un cubo""\n";
				              cout<<"Para el cubo, el volumen se saca multiplicando la medida de su arista por la tercer""\n";
				              cout<<"Ingresa primero la medida de cualquier arista de tu cubo""\n";
				              cin>>y;
				              z1 = pow(y,3);
				              cout<<"El volumen de tu cono es : " <<z1<<"\n" ;
				              system("PAUSE");
				              system("cls");	
				 	          }
					          break;
					          {
					          case 5:
					          cout<<"Volumen de un elipse""\n";
				              cout<<"Para el elipse, el volumen se saca multiplicando los tres radios ecuatoriales por 4/3 a su vez multiplicandolo por pi(3.1416)""\n";
				              cout<<"Ingresa primero la medida de los tres radios ecuatoriales""\n";
				              cin>>y;
		                      cin>>x1;
		                      cin>>z3;
				              z1 = y*x1*z3*1.33333*3.1416;
				              cout<<"El volumen de tu elipse es : " <<z1<<"\n" ;
				              system("PAUSE");
				              system("cls");
								
					          }	
					         }//switch4
						    }//case2
						    break;
					        case 3:
					         {//case3
					            cout<<"Has decidido terminar el programa""\n";	
					            system("pause");
                                system("cls");
                                system("color 21");	
								}//case3
                                default:cout<<"Error presione otra opcion valida""\n""\n";
						}//switch1
      }//wailnumero1
      system("pause");
      cout<<"\n\n";
}//main
