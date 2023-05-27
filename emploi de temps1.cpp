#include <iostream>
#include <windows.h>
#include <unistd.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std ;
void color (bool x){
	HANDLE cout_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	if(x)
	SetConsoleTextAttribute(cout_handle,12);
	else 	SetConsoleTextAttribute(cout_handle,9);
}


int main(int argc, char** argv) {
   char choix;
   string t[7][5];
   debut:
	cout<<"\n\n\t\t\t\t\t\t\t\t MENU \n";
	
cout<<"\t\t\t\t\tPour afficher l'emploi du temps de genie Informatique S1 entrer 1\n\t\t\t\t\tPour afficher l'emploi du temps de genie Informatique S2 entrer 2\n\t\t\t\t\tPour afficher l'emploi du temps de genie Informatique S3 entrer 3\n\t\t\t\t\tPour afficher l'emploi du temps de genie Informatique S4 entrer 4\n";
cin>>choix;
system("cls");
switch(choix){
	case '1':{
		  
   t[0][0]="                                ";
   t[0][1]="        08:00 -> 10:00         ";
   t[0][2]="        10:15 -> 12:1          ";
   t[0][3]="        14:00 -> 16:00         ";
   t[0][4]="        16:15 -> 18:15         ";
   t[1][0]="           Lundi               ";
   t[1][1]="     Francais  cours           ";
   t[1][2]="     Analyse   cours           ";
   t[1][3]="     TD   Analyse  G2          ";
   t[1][4]="     TD   Analyse  G1          ";
   t[2][0]="           Mardi               ";
   t[2][1]="     langague C cours          ";	
   t[2][2]=" (TP) C G1 | L.C G3 |ARCHI G2  ";
   t[2][3]=" (TP) C G3 | L.C G2 |ARCHI G1  ";
   t[2][4]=" (TP) C G2 | L.C G1 |ARCHI G2  ";
   t[3][0]="           Mercredi            ";
   t[3][1]="      Algorithme cours         ";
   t[3][2]="      Algebre    cours         ";
   t[3][3]="      Analyse   TD G1/G2       ";
   t[3][4]="      Alorithme TD G1/G2       ";
   t[4][0]="           Jeudi               ";
   t[4][1]="                               ";
   t[4][2]="      Anglais  cours           ";
   t[4][3]="     TD   Anglais  G2          ";
   t[4][4]="     TD   Anglais  G1          ";
   t[5][0]="          Vendredi             ";
   t[5][1]="Architecture-ordinateures crs  ";
   t[5][2]="Analogie-numerique    ours     ";
   t[5][3]="Architecture-ordinateures TD   ";
   t[5][4]="Analogie-numerique    TD       ";	
   t[6][0]="            Samedi             ";
   t[6][1]="    Bureautique  cours         ";
   t[6][2]="   TB Bureautique G1           ";
   t[6][3]="   TB Bureautique G2           ";
   t[6][4]="   TB Bureautique G3           ";
   cout<<"\n\t\t\t\t\t\tL'emploi du Temps de Filiere Ginie Informatique S1 "<<endl<<endl;
   for(int i=0;i<=6;i++)
   {
   
   for(int k=0;k<163;k++)
   {
   	cout<<"-";
   }
   
   	for(int j=0;j<=4;j++)
   	{
   		
   		cout<<t[i][j]<<" | ";
   		
	   }
	   cout<<" \n ";
	   
   }
   for(int f=0 ;f<164;f++)
   {
   	cout<<"-";
   }
   goto debut;
		break;
	}
	
  case '2':{
   
   t[0][0]="                                ";
   t[0][1]="        08:00 -> 10:00         ";
   t[0][2]="        10:15 -> 12:1          ";
   t[0][3]="        14:00 -> 16:00         ";
   t[0][4]="        16:15 -> 18:15         ";
   t[1][0]="           Lundi               ";
   t[1][1]="systeme des exploitation crs   ";
   t[1][2]="     POO c++ cours             ";
   t[1][3]="TD system des exploitation G2  ";
   t[1][4]="TD system des exploitation G1  ";
   t[2][0]="           Mardi               ";
   t[2][1]="   base de donnes cours        ";	
   t[2][2]="TD <algebre> G1 | TD <BDD> G2  ";
   t[2][3]="TD <algebre> G2 | TD <BDD> G1  ";
   t[2][4]="           Algebre cours       ";
   t[3][0]="           Mercredi            ";
   t[3][1]="          VB.NET cours         ";
   t[3][2]="(TP)VB.NET G1 | OS G3 |C++ G2  ";
   t[3][3]="(TP)VB.NET G3 | OS G2 |C++ G1  ";
   t[3][4]="(TP)VB.NET G2 | OS G1 |C++ G2  ";
   t[4][0]="           Jeudi               ";
   t[4][1]="     Analyse cours             ";
   t[4][2]="     Analyse TD  G1/G2         ";
   t[4][3]="structure de donnes cours      ";
   t[4][4]="structure de donnes TD G1/G2   ";
   t[5][0]="          Vendredi             ";
   t[5][1]="Cenception de Merice cours     ";
   t[5][2]="Reseaux Informatique cours     ";
   t[5][3]="Reseaux Informatique TD G1/G2  ";
   t[5][4]="Cenception de Merice TD G1/G2  ";	
   t[6][0]="            Samedi             ";
   t[6][1]="TB BDD G1 | reseaux info G3    ";
   t[6][2]="TB BDD G3 | reseaux info G2    ";
   t[6][3]="TB BDD G2 | reseaux info G1    ";
   t[6][4]="                               ";
   cout<<"\n\t\t\t\t\t\tL'emploi du Temps de Filiere Ginie Informatique S2 "<<endl<<endl;
   for(int i=0;i<=6;i++)
   {
   
   for(int k=0;k<163;k++)
   {
   	cout<<"-";
   }
   
   	for(int j=0;j<=4;j++)
   	{
   		
   		cout<<t[i][j]<<" | ";
   		
	   }
	   cout<<endl;
	   
   }
   for(int f=0 ;f<164;f++)
   {
   	cout<<"-";
   }
   goto debut;
   break;
}
case '4':{
   t[0][0]="                                ";
   t[0][1]="        08:00 -> 10:00         ";
   t[0][2]="        10:15 -> 12:1          ";
   t[0][3]="        14:00 -> 16:00         ";
   t[0][4]="        16:15 -> 18:15         ";
   t[1][0]="           Lundi               ";
   t[1][1]="        IHM cours              ";
   t[1][2]="        TP IHM G1              ";
   t[1][3]="        TP IHM G2              ";
   t[1][4]="        TP IHM G3              ";
   t[2][0]="           Mardi               ";
   t[2][1]="   Gestion du Projet  cours    ";	
   t[2][2]="   Francais Technique cours    ";
   t[2][3]="   TD Gestion du Projet  G1/G2 ";
   t[2][4]="   TD Francais Technique G1/G2 ";
   t[3][0]="           Mercredi            ";
   t[3][1]="                               ";
   t[3][2]="   Atelier GL cours            ";
   t[3][3]="   TP Atelier GL  G1           ";
   t[3][4]="   TP Atelier GL  G2           ";
   t[4][0]="           Jeudi               ";
   t[4][1]="   Multimedia cours            ";
   t[4][2]="   TP  Multimedia   G1         ";
   t[4][3]="   TP  Multimedia   G2         ";
   t[4][4]="   TP  Multimedia   G3         ";
   t[5][0]="          Vendredi             ";
   t[5][1]="                               ";
   t[5][2]="   Anglais technique cours     ";
   t[5][3]="   Anglais technique TD G1     ";
   t[5][4]="                               ";	
   t[6][0]="            Samedi             ";
   t[6][1]="   TP Atelier GL  G3           ";
   t[6][2]="   Anglais technique TD G2     ";
   t[6][3]="                               ";
   t[6][4]="                               ";
   cout<<"\n\t\t\t\t\t\tL'emploi du Temps de Filiere Ginie Informatique S4 "<<endl<<endl;
   for(int i=0;i<=6;i++)
   {
   
   for(int k=0;k<163;k++)
   {
   	cout<<"-";
   }
   
   	for(int j=0;j<=4;j++)
   	{
   		
   		cout<<t[i][j]<<" | ";
   		
	   }
	   cout<<" \n ";
	   
   }
   for(int f=0 ;f<164;f++)
   {
   	cout<<"-";
   }
	goto debut;
	break;
}
  default :{
  	cout<<" \n \t Merci de saisir votre choix mais l'emploi du temps que vous voulez non existe ! \n  ";
  	sleep(4);
  	system("cls");
  	goto debut;
	break;
  }
}
   
	return 0;
}