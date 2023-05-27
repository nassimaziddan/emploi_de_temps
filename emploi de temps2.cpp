#include <iostream>
#include<string>
#include <windows.h>
#include <unistd.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 using namespace std;
int main(int argc, char** argv) {
	 string t[7][5];
	 char choix;
	 debut:
	 cout<<" \n\t\t\t\t\tMENU  \n"<<endl;
	 cout<<"\t l : Emploi  du temps de filiere GA S1 "<<endl;
     cout<<"\t 2 : Emploi  du temps de filiere GA S2 "<<endl;
     cout<<"\t 3 : Emploi du temps de filiere GA S3"<<endl;
     cout<<"\t 4 : Emploi du temps de filiere GA S4"<<endl;
	 cout<<"\t saisir votre choix:"<<endl;
	 cin>>choix;
	 system("cls");
	 switch(choix){
	 case '1':{
	 		 cout<<"\n\t\t\t\t\t\t\t\t Emploi du temps de filiere GA S1    "<<endl;
	 	 
	 
	
	 t[0][0]="                               ";
	 t[0][1]="     8:00--->10:00             ";
	 t[0][2]="     10:00--->12:00            ";
	 t[0][3]="      14:00--->16:00           ";
	 t[0][4]="      16:00--->18:00           ";
	 t[1][0]="         Lundi                 ";
	 t[1][1]=" TP-INF.MULTIMEDIA G1          ";
	 t[1][2]="CRS-INFO.MULTIMEDIA            ";
	 t[1][3]="TP-INFO.MULTIMEDIA G2          ";
	 t[1][4]="TD BIOLOGIE GENERALE           ";
	 t[2][0]="         Mardi                 ";
	 t[2][1]="CRS-PHISIQUE                   "; 
	 t[2][2]="TD-PHISIQUE                    ";
	 t[2][3]="CRS-BIOLOGIE GENERALE          ";
	 t[2][4]="                               ";
	 t[3][0]="       Mercredi                ";                      
	 t[3][1]="TD-MECROBIOLOGIE               ";
	 t[3][2]="CRS-MECROBIOLOGIE              ";
	 t[3][3]="CRS-ESPANOL                    ";
	 t[3][4]=" TP-BIOLOGIE\mecrobiolog        ";
	 t[4][0]="         Jeudi                 ";
	 t[4][1]="CRS-FRANCAIS                   ";
	 t[4][2]="CRS-STATIQUE APPLIQUEE         ";
	 t[4][3]=" TD-STATIQUE APPLIQUEE         ";
	 t[4][4]="TP-BIOLOGIE\microbio            ";
	 t[5][0]="        Vendredi               ";
	 t[5][1]=" TP-PHYSIQUE\chimie            ";
	 t[5][2]=" TP-PHISIQUE\CHIMIE              ";
	 t[5][3]=" CRS\TD-FRANCAIS                ";
	 t[5][4]=" CRS\TD-COMMUNICATION           ";
	 t[6][0]="        Samedi                 ";
	 t[6][1]="TD-CHIMIE                      ";
	 t[6][2]="CRS-CHIMIE                     ";
	 t[6][3]="TP-STATIQUE APPLITIQUEE        ";
	 t[6][4]="TP-STATIQUES APPLIQUEES        ";
	 for(int i=0;i<=6;i++)
	 {
	 	for(int j=0;j<168;j++)
	 	{
	 		cout<<"_";
		 }
	 	for(int j=0;j<=4;j++){
	 		cout<<t[i][j]<<" | ";
		 }
		 cout<<endl;
	 }
	 goto debut;
		break;
	 }
	 
     case '2':{
	 cout<<"\n\t\t\t\t\t\t\t\t Emploi du temps de filiere GA S2     "<<endl;
	 	 
	 
	
	 t[0][0]="                               ";
	 t[0][1]="     8:00--->10:00             ";
	 t[0][2]="     10:00--->12:00            ";
	 t[0][3]="      14:00--->16:00           ";
	 t[0][4]="      16:00--->18:00           ";
	 t[1][0]="         Lundi                 ";
	 t[1][1]="CRS-BIOLOGIE MOLECULAIRE       ";
	 t[1][2]="TD-ANALYSES BIOLOGIQUES        ";
	 t[1][3]="CRS-ANALYSES BIOLOGIQUES       ";
	 t[1][4]="TD-ANALYSES BIOLOGIQUES        ";
	 t[2][0]="         Mardi                 ";
	 t[2][1]="Td-G1<Crs-Espagnol>            "; 
	 t[2][2]="TP-G2:espagnol                 ";
	 t[2][3]=" CRS-Francais                  ";
	 t[2][4]=" CRS-Communication             ";
	 t[3][0]="       Mercredi                ";                      
	 t[3][1]="     TD-indica.E.Q             ";
	 t[3][2]="      CRS-I.e.Q                ";
	 t[3][3]="      CRS-BIOCHIMIE            ";
	 t[3][4]="       TD-BIOCHIMIE            ";
	 t[4][0]="         Jeudi                 ";
	 t[4][1]="TD-ANA.chimi.physico           ";
	 t[4][2]="CRS-METROLOGIE                 ";
	 t[4][3]="CRS-ANALYSES CHIMI.ph          ";
	 t[4][4]="TD-BIOLOGIE MOLECUL            ";
	 t[5][0]="         Vendredi              ";
	 t[5][1]=" CRS-anglais                   ";
	 t[5][2]="TD-G1:METHODES.E.ECOSY         ";
	 t[5][3]="CRS-ECOLOGIES GENERALE         ";
	 t[5][4]="CRS-M.E.E                      ";
	 t[6][0]="        Samedi                 ";
	 t[6][1]="TP-G1-tp:ECOLOGIE APQUEE       ";
	 t[6][2]="TD-ECOLOGIE.GEN|TP-BIOCH       ";
	 t[6][3]="TP-G1:BIOLOGIE MO              ";
	 t[6][4]="TP-G1 :A.CH.PHYSICO            ";
	 for(int i=0;i<=6;i++)
	 {
	 	for(int j=0;j<168;j++)
	 	{
	 		cout<<"_";
		 }
	 	for(int j=0;j<=4;j++){
	 		cout<<t[i][j]<<" | ";
		 }
		 cout<<endl;
	 }
	 goto debut;
	 break;
	 }
	 case '4' :{  
	 
	 cout<<"\n\t\t\t\t\t\t\t\t Emploi du temps de filiere GA S4    "<<endl;
	 	 
	 
	
	 t[0][0]="                               ";
	 t[0][1]="      8:00--->10:00            ";
	 t[0][2]="      10:00--->12:00           ";
	 t[0][3]="      14:00--->16:00           ";
	 t[0][4]="      16:00--->18:00           ";
	 t[1][0]="         Lundi                 ";
	 t[1][1]="                               ";
	 t[1][2]="CRS-QUALITE\ENVIRONEMENT          ";
	 t[1][3]="TD-QUALITE\ENVIRONOMENT           ";
	 t[1][4]="                               ";
	 t[2][0]="         Mardi                 ";
	 t[2][1]="CRS-GESTION ENTREPRISE         "; 
	 t[2][2]="CRS-HYGIENE DU MILIEU          ";
	 t[2][3]="TD-GESTION ENTREPRISES         ";
	 t[2][4]="                               ";
	 t[3][0]="       Mercredi                ";                      
	 t[3][1]="TD-MT-ENTREPRISE               ";
	 t[3][2]="TD-ENTREPRENARIAT              ";
	 t[3][3]="                               ";
	 t[3][4]="                               ";
	 t[4][0]="         Jeudi                 ";
	 t[4][1]="                               ";
	 t[4][2]="CRS-ENTREPRENARIAT             ";
	 t[4][3]="CRS-MT-ENTREPRISE              ";
	 t[4][4]="                               ";
	 t[5][0]="         Vendredi              ";
	 t[5][1]="TP-HYGIENE DU MILIEU ENV       ";
	 t[5][2]="TP-HYGIENE DU MILIEU ENV       ";
	 t[5][3]="                               ";
	 t[5][4]="                               ";
	 t[6][0]="        Samedi                 ";
	 t[6][1]="                               ";
	 t[6][2]="                               ";
	 t[6][3]="                               ";
	 t[6][4]="                               ";
	 for(int i=0;i<=6;i++)
	 {
	 	for(int j=0;j<168;j++)
	 	{
	 		cout<<"_";
		 }
	 	for(int j=0;j<=4;j++){
	 		cout<<t[i][j]<<" | ";
		 }
		 cout<<endl;
	 }
	 
	 
	 goto debut;
		break;
	 }
	 default :{
	 	cout<<endl<<"\n \t MERCI DE SAISIR CE CHOIX . MAIS IL NE TROUVER PAS !"<<endl;
	 	sleep(4);
	 	system("cls");
	 	goto debut;
		break;
	 }
	 }
	 	return 0;
}