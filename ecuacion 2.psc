Algoritmo ecuacion_de_2_grado
	definir a,b,c como entero;
	definir x1,x2,Re,Im como reales;
	escribir "para la ecuacion a*x^2+b*x+c";
	escribir "introdusca a";
	leer a;
	escribir "introdusca b";
	leer b;
	escribir "introdusca c";
	leer c;
	escribir "ecuacion cuadratica es :",a,"*x^2+",b,"*x+",c,;
	Si b^2-4*a*c>=0 Entonces
		Si a<>0 Entonces
			Escribir "soluciones de X son :";
			x1=(-b+raiz(b^2-4*a*c))/(2*a);
			x2=(-b-raiz(b^2-4*a*c))/(2*a);	
			Escribir "x1=",x1;
			Escribir "x2=",x2;
		SiNo
			Escribir "soluciones de X=infinito :";
		Fin Si
	SiNo
		Escribir "soluciones de X=imaginarias :";
		Re=-b/(2*a);
		Im=raiz((-1)*(b^2-4*a*c))/(2*a);
		Escribir "xC1=",Re,"+i",Im;
		Escribir "xC2=",Re,"-i",Im;
	Fin Si
FinAlgoritmo
