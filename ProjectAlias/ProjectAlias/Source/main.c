#include "../Includes/Global.h"
#include "../Includes/PA_threading.h"
#include "../Includes/PA_util.h"
#include "../Includes/pa_adt.h"
#include "../Deps/curl/include/curl/curl.h"


void printHello(){
    printf("HELLO %s! \n", PA_UTIL_PlatformToString(PA_UTIL_detectPlatform()));
}

int main(void)
{



    PA_ADT_tuplei tup;
    tup = newTuplei(5,4);
    printf("%d,%d\n",tup.data1,tup.data2);
    printf("C Version: %li\n",__STDC_VERSION__);
    printf("FilePath: %s\n ",printFP());
    createFile("test.txt");
    writeTextToFile("test2.txt","Hello World!");
    writeHTMLtoFile("finances.html","http://finance.yahoo.com/stock-center/");

#ifdef __WIN32 || __WIN64
    system("cls");
#endif

#ifdef __linux__
    system("clear");
#endif
    for (int x = 0;x <20 ; x++){
        if(x == 0){
                for (int y = 0; y< 20; y++){
            printf("x");
        }
        }else if (x != 19){
        for(int y = 0; y< 20; y++){
            if(y == 0){
                printf("x");
            }else if( y == 19){
                printf("x\n");
            }else
            printf(" ");
        }
        }else
                for (int y = 0; y< 20; y++){
            printf("x");
        }
        }





  //  server *s;
	int a, b;
	a = 5;
	b = 9;

    pa_thread pat;

//    PA_createThread(&pat,NULL,printHello,NULL);
   //PA_createThread(&pat,NULL,sizeof(printHello),(LPTHREAD_START_ROUTINE)printHello,NULL, NULL , &pat.threadId);
   // s = createServer(9115,0);
	//usrdvc mydevice;
	//initCurrentDevice(&mydevice);


	//printf("My Device info: %s",mydevice.StringInfo);
 //   printf("Server Info: %s", ServerToString(s));

	printf("Before  the swaps: \n");
	printf("a = %d, b = %d \n",a,b);
	PA_ALGO_SwapXOR(&a, &b, sizeof(int));
	printf("After  the swaps: \n");
	printf("a = %d, b = %d \n", a, b);

	//printf("%s \n", PA_UTIL_PlatformToString(PA_UTIL_detectPlatform()));
	printf("Architecture: %s \n", PA_UTIL_ArchitectureToString(PA_UTIL_detectArchitecture()));
    printf("Endianess: %s \n",PA_UTIL_EndianessToString(PA_UTIL_detectEndianness()));

	float temp2 = 15.15f;
	float *temp2p;
	temp2p = &temp2;


	printf("Float passing through void passing through float :) %2.3f\n", *temp2p);

	getchar();
    printf("beginning sequence with new custom memory allocation");
    cmalloc_init();
    char *stringTest = cmalloc(500);
    strcpy(stringTest,"Hello World From Cmalloc\'d string");
    printf("%s",stringTest);
    cfree(stringTest);
    getchar();

	return 0;
}

