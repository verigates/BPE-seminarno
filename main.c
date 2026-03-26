#include <stdio.h>
#include <stdlib.h>
void zad1()
{
    int n, arr[100] = {0};
    printf("N: ");
    scanf("%d", &n);

    for(int i = 0 ; i < n; i++){
        scanf(" %d", &arr[i]);
    }

    for(int i = 0; i < n-1; i++){
	for(int j = 0; j < n - i- 1;j++){
	   if(arr[j] > arr[j+1]){
		int temp = arr[j];
		arr[j] = arr[j+1];
		arr[j+1] = temp;
		}
        }
    }
    printf("*+*+*+*+*+*+*+*+*+*+*+*+*\n");
    for(int i=0; i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n*+*+*+*+*+*+*+*+*+*+*+*+*\n");

   int counter = 1 , index_start = 0, longest = 1, curr_start = 0;

    for(int i = 1; i< n; i++)
        {
        if(arr[i]== arr[i-1])
            {
             counter++;
            }
            else
            {
                counter = 1;
                curr_start = i;
            }
            if(counter > longest)
            {
                longest = counter;
                index_start = curr_start;
            }
        }

    printf("Start: %d\t Length:%d\n", index_start, longest);

}
void zad2()
{
    int arr[10] = {1,2,1,3,2,4,3,5,4,6};
    int stava = 1;
    for(int i = 1; i < 9;i++){
        if(arr[i]>=arr[i+1] && arr[i]<= arr[i-1]){
            stava = 0;
            break;
        }
    }
    if(stava){
        printf("da");
    }else{
        printf("neee");
    }

}
void zad3()
{
    int n, arr[100] = {0};
    printf("Kolko elementa:");
    scanf("%d", &n);
    printf("Vuvedi %d na broi elementi: ",n);

    for(int i = 0 ; i < n; i++){
        scanf(" %d", &arr[i]);
    }

    for(int j = n - 1; j>= 0; j--){
        printf("%d ", arr[j]);
    }

}
void zad4()
{
    int n, k, a[100] = {0};
    printf("Vuvedi N i K:");
    scanf("%d %d", &n, &k);
    printf("Vuvedi %d na broi elementi: ",n);

    for(int i = 0 ; i < n; i++){
        scanf(" %d", &a[i]);
    }

     k= k % n; //102%5=2 sushtoto kato da se zavurti 2 puti
     for(int i = 0; i < k; i++){
         int last = a[n - 1];

         for (int j = n - 1; j > 0; j--){
             a[j] = a[j-1];
         }
         a[0] = last;
     }

     for(int i = 0 ; i < n; i++){
        printf(" %d", a[i]);
    }

}
void zad5()
{
    int n, k, arr[100] = {0};
    printf("N K:");
    scanf("%d %d", &n, &k);
    printf("Napishi %d chisla:\n ",n);

    for(int i = 0 ; i < n; i++){
        scanf(" %d", &arr[i]);
    }

    for(int i = 0; i < n-1; i++){
	for(int j = 0; j < n - i- 1;j++){
	   if(arr[j] > arr[j+1]){
		int temp = arr[j];
		arr[j] = arr[j+1];
		arr[j+1] = temp;
		}
        }
    }

    printf("Mqsto po golemina %d -> %d", k, arr[n - k]);

}
void zad6()
{
    int razmer, masiv[100] = {0};

    printf("Broi elementi: ");
    scanf("%d", &razmer);
    for (int i = 0; i < razmer; i++) {
        scanf("%d", &masiv[i]);
    }
    int nai_golqma_duljina = 1;
    int nai_dobur_start = 0;

    int tekushta_rastqshta = 1;
    int tekushta_namalqvashta = 1;

    int nachalo_na_rastqshta = 0;
    int nachalo_na_namalqvashta = 0;

    for (int i = 1; i < razmer; i++) {
        if (masiv[i] > masiv[i - 1]) {
            tekushta_rastqshta++;
            tekushta_namalqvashta = 1;
            nachalo_na_namalqvashta = i;
        }
        else if (masiv[i] < masiv[i - 1]) {
            tekushta_namalqvashta++;

            tekushta_rastqshta = 1;
            nachalo_na_rastqshta = i;
        }
        else {
            tekushta_rastqshta = 1;
            tekushta_namalqvashta = 1;
            nachalo_na_rastqshta = i;
            nachalo_na_namalqvashta = i;
        }

        if (tekushta_rastqshta > nai_golqma_duljina) {
            nai_golqma_duljina = tekushta_rastqshta;
            nai_dobur_start = nachalo_na_rastqshta;
        }

        if (tekushta_namalqvashta > nai_golqma_duljina) {
            nai_golqma_duljina = tekushta_namalqvashta;
            nai_dobur_start = nachalo_na_namalqvashta;
        }
    }

    printf("\nNai-dulga poredica zapochva ot index: %d", nai_dobur_start);
    printf("\nDuljina: %d\n", nai_golqma_duljina);
    printf("Elementi: ");

    for (int i = nai_dobur_start; i < nai_dobur_start + nai_golqma_duljina; i++) {
        printf("%d ", masiv[i]);
    }
    printf("\n");
}
void zad7()
{
    int num;
    int masiv[7];
    int new_masiv[7];
    printf("Num: ");
    scanf("%d",&num);

    for (int i=0; i<7; i++)
    {
        int new_num;
        printf("Add num %d: " ,i+1);
        scanf("%d",&new_num);
        masiv[i]=new_num;
    }
    printf("*+*+*+*+*+*+*+*+*+*+*+*+*+*\n");
    printf("Masivcheto: \n");
    for(int i=0;i<7;i++)
    {
        printf("[%d]", masiv[i]);
    }
    printf("\n*+*+*+*+*+*+*+*+*+*+*+*+*+*\n");
    //4,3,1,4,2,5,8
    int found = 0;

    for(int i=0;i<7&&found==0;i++)
    {
        int test_sum = 0;

        for(int k=0; k<7; k++) new_masiv[k] = 0;

        for(int j = i; j < 7; j++)
        {
            test_sum += masiv[j];
            if(test_sum == num)
            {
                new_masiv[j-i] = masiv[j];
                found = 1;
                break;
            }
            else if(test_sum < num)
            {
                new_masiv[j-i] = masiv[j];
            }
            else
            {
                break;
            }
        }

    }
    printf("*+*+*+*+*+*+*+*+*+*+*+*+*+*\n");
    printf("New masivche: \n");
    for(int i=0;i<7;i++)
    {
        printf("[%d]", new_masiv[i]);
    }
    printf("\n*+*+*+*+*+*+*+*+*+*+*+*+*+*\n");
}
void zad8()
{
    int arr[20] = {5,1,3,6,2,6}, count = 6;
    /*
    printf("Kolko chisla: ");
    scanf("%d", &count);

    printf("Vuvedi chislata:\n");
    for(int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }
    */

    printf("Vuvedete stoinost i poziciq (0 0 za krai):\n");

    do{
        int value, position;
        scanf(" %d %d", &value,&position);
        if(value == 0){
            break;
        }
        for(int i = count; i > position; i--){
            arr[i] = arr[i-1];
        }
        arr[position] = value;
        count++;
    }while(count < 20);

    for(int i = 0 ; i < count; i++){
        printf(" %d", arr[i]);

    }

}
void zad9()
{
    int N, arr[100] = {0};
    scanf("%d", &N);

    for(int i = 0 ; i < N; i++)
    {
        scanf(" %d", &arr[i]);
    }

    int counter = 1 , index_start = 0, longest = 1, curr_start = 0;

    for(int i = 1; i< N; i++)
        {
        if(arr[i]== arr[i-1])
            {
             counter++;
            }
            else
            {
                counter = 1;
                curr_start = i;
            }
            if(counter > longest)
            {
                longest = counter;
                index_start = curr_start;
            }
        }

    printf("Start: %d\t Length:%d\n", index_start, longest);
	for(int i = 0 ; i < longest; i++){
        printf(" %d", arr[index_start+i]);
    }
}
int main()
{
    int n;
    printf("Zadacha: ");
    scanf("%d", &n);

    switch (n)
    {

    case 1: zad1(); break;

    case 2: zad2(); break;

    case 3: zad3(); break;

    case 4: zad4(); break;

    case 5: zad5(); break;

    case 6: zad6(); break;

    case 7: zad7(); break;

    case 8: zad8(); break;

    case 9: zad9(); break;

    default:
        printf("Nqma takava zadacha");
        break;
    }

    return 0;
}
