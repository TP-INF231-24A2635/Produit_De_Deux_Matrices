#include<stdio.h>

void multiplication(int n,int m,int k,float tab1[n][m],float tab2[m][k],float mat3[n][k]){
    /*
    Etant donné que le nombre de colonne de la 1ere matrice doit etre égale au nombre de lignes 
    de la 2e matrice tab2 est autommatiquement crée avec pour nombre de lignes le nombre de 
    colonne de tab1  */

    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
                mat3[i][j]=0;
            for(int l=0;l<m;l++){
                mat3[i][j]+=tab1[i][l]*tab2[l][j];
            
        }
    }
    }
}
//###################################################################

void affichage(int n,int m,float mat[n][m]){
    int i,j;
    for(i=0;i<n;i++){
    printf("\t\t(");
    for(j=0;j<m;j++){
    printf("    %.2f  ",mat[i][j]);
    }
    printf("  )");
    printf("\n");
}
printf("\n");
}

//###################################################################

void remplissage(int n,int m,float mat[n][m])
{
    for(int i=0;i<n;i++){
    printf("\nligne %d\n",i+1);
    for(int j=0;j<m;j++){
    printf("entrez l'elt a[%d][%d]: ",i+1,j+1);
    scanf("%f",&mat[i][j]);
   }
}
}

//###################################################################
int main(){
int n,m,k;
int i,j;

printf("###_MULTIPLICATION DE 2 MATRICES_###\n\n");
printf("combien de ligne pour la 1ere matrice ?: ");
scanf("%d",&n);
printf("\n(NB:le nombre de colonnes de la 1er matrice sera égale au nombre de lignes de la 2e) ");
printf("\ncombien de colonnes pou la 1ere matrice?: ");
scanf("%d",&m);
printf("\ncombien de colonnes pou la 2e matrice: ");
scanf("%d",&k);
float mat1[n][m];
float mat2[m][k];
float mat3[n][k];
//remplissage de la 1ere matrice
printf("\n\n## remplissage de la 1ere matrice \n");
remplissage(n,m,mat1);
//remplissage de la 2e matrice
printf("\n\n## remplissage de la 2eme matrice \n");
remplissage(m,k,mat2);
//affichage
printf("\n\nMATRICES ENTRÉES\n\n");
printf("#MATRICE1:\n");
affichage(n,m,mat1);
printf("#MATRICE2:\n");
affichage(m,k,mat2);
//appel de la fonction multiplication
multiplication(n,m,k,mat1,mat2,mat3);
printf("\n");
printf("##__RESULTAT__#:\n\n");
//Afficahge du résultat
affichage(n,k,mat3);

}