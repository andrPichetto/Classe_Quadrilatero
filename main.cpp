#include<iostream>

#include "CRectangle.h"
#include "CRhombus.h"

int main() {

	Quadrilateral *A, *B, *C; /*vatggio flessibilita, passo ad una funzione il puntatore ed in fase di compilazione capice lui che sto passando un rettangolo o un rombo*/
	float s1,s2,s3,s4;
	
	Rectangle rectA(10,5);
	Rectangle rectB(3,7);
	Rhombus rhoC(2,1);
	
	A = &rectA; /*puntatore a classe padre può puntare ad un oggetto di classe figlio*/
	B = &rectB;
	C = &rhoC;

	cout << endl;
	cout << "**** quadrilateral A ****" << endl;
	A->Dump(); /*chiamata alla dump del quadrilatero, è un puntatore alla dump del quadrilatero. Per chiamare la dump del figlio:*/
	/*rectA.Dump -->ora chiama la dump del rettangolo classe figlio*/
	cout << "**** ***** ****" << endl;
	cout << "**** quadrilateral B ****" << endl;
	B->Dump(); 
	cout << "**** ***** ****" << endl;
	cout << "**** quadrilateral C ****" << endl;
	C->Dump(); 
	cout << "**** ***** ****" << endl;
	
	cout << endl;
	cout << "**** rectangle A ****" << endl;
	rectA.Dump(); /*chiamo dump del rettangolo classe "figlio"*/
	cout << "**** ***** ****" << endl;
	cout << "**** rectangle B ****" << endl;
	rectB.Dump(); 
	cout << "**** ***** ****" << endl;
	cout << "**** rectangle C ****" << endl;
	rhoC.Dump(); 
	cout << "**** ***** ****" << endl;
	
	rectA = rectB; /*chiamo overload*/
	/* puntatori A e B puntano sempre ad oggetti divesi ma i DATI saranno uguali */
	
	cout << endl;
	cout << "**** quadrilateral A ****" << endl;
	A->Dump(); 
	cout << "**** ***** ****" << endl;
	cout << "**** quadrilateral B ****" << endl;
	B->Dump(); 
	cout << "**** ***** ****" << endl;
	/*c->GetArea();   in questo caso non compila perche no esiste nella classe quadrilatero la funzine getArea esiste solo nelle classi figlio*/
	/*rhoC.GetArea();  ora chiamo la funzione GetArea del rombo*/

	rectB.SetWidth(12); 
	cout << endl;
	cout << "**** quadrilateral A ****" << endl;
	A->Dump(); 
	cout << "**** ***** ****" << endl;
	cout << "**** quadrilateral B ****" << endl;
	B->Dump(); 
	cout << "**** ***** ****" << endl;
	
	B->GetSides(s1,s2,s3,s4);
	cout << "rectangle B - sides:" << s1 << " " << s2 << " "<< s3 << " "<< s4 << endl; 
	
	C->GetSides(s1,s2,s3,s4);
	cout << "rhombus C - sides:" << s1 << " " << s2 << " "<< s3 << " "<< s4 << endl;
	
	rhoC.SetDiagL(8);
	C->GetSides(s1,s2,s3,s4);
	cout << "rhombus C - sides:" << s1 << " " << s2 << " "<< s3 << " "<< s4 << endl;

//	C->GetArea(); 
	
		
	
	return 0;

}