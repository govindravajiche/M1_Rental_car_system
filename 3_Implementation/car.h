int date();
struct car
{
    char customername[50];
    char customerId[13];
    char carrented[20];
    int n,rent,days;
    int dr,mr,yr,dret,mret,yret;
};
char carbrand[10][20]={"MARUTI SUZUKI","HYUNDAI","HONDA","TOYOTA","FORD","TATA","MERCEDES","SKODA","KIA"};
char carmodel[10][20]={"SWIFT","NEXO","Civic","Avalon","Explorer","Safari","E-Class","RAPID","SELTOS"};
int carseat[10]={4,4,4,8,4,4,4,8,8,0};
int carrentperday[10]={500,500,500,500,500,500,500,500,500,0};
int carrentpermontly[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int z=0,u=0;
struct car c,ca[10],cr[10],cn={0};