#include <stdio.h>
#include <string.h>
#include "menu.c"
#include "busexpress.c"

extern void menu();
extern void busExpress();


char buffer[100];
char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};

struct passenger{
	char name[50];
	int tickets, seat_no;
};

int busSeatReserve(const char* file_name, const char* file_name2){
	struct passenger bus;
	int i;
    //pointer for bus, ticket and seat    
    FILE *fbusptr1, *seatNoPtr1;
//    char name[20]; 
//    int tickets, seat_no;

	//reading files
    fbusptr1 = fopen(file_name, "r+");
    seatNoPtr1 = fopen(file_name2, "r+");

    if(fbusptr1==NULL && seatNoPtr1==NULL){
    	//writing files
        fbusptr1 = fopen(file_name, "w+");
        seatNoPtr1 = fopen(file_name2, "w+");
    }
    else{
    	//appending files
        fbusptr1 = fopen(file_name, "a+");
        seatNoPtr1 = fopen(file_name2, "a+");
    }

    printf("Enter number of tickets: ");
    scanf("%d",&bus.tickets);

    for (i=0; i<bus.tickets; i++){
    printf("Enter name: ");
    scanf("%*c %[^\n]s", &bus.name);
    fprintf(fbusptr1, "%s\n", bus.name);
    printf("Enter seat number: ");
    scanf("%d", &bus.seat_no);
    fprintf(seatNoPtr1, "%d\n", bus.seat_no);
    }

    fclose(seatNoPtr1);
    fclose(fbusptr1);

    printf("\n");
    printf("Enter any key to continue.......");
    getch();
}

//function for booking
int Booking(){
    char destination[50];
    int option;
    int i,j;

    system("cls");
    printf("\n\n\t\t\t:::::::::::::::::::::::::::::::::\n");
    printf("\t\t\t\tBUS RESERVATION\n");
    printf("\t\t\t:::::::::::::::::::::::::::::::::\n");
    char *destination_ptr[4] = {"Gorkha", "Pokhara", "Chitwan", "Lumbini"};

    printf("Services available in: ");
    printf("\n");
    for(i=0; i<4; i++){
        j = i;
        printf("%d ", ++j);
        printf("%s-----", buses[i]);
        puts(destination_ptr[i]); 
    }


    printf("Select your destination: ");
    scanf("%d", &option);

    switch(option){
        case 1:
            read_ints("bus1SeatNo.txt", "bus1.txt");
            busSeatReserve("bus1.txt", "bus1SeatNo.txt");
            break;
        case 2:
            read_ints("bus2SeatNo.txt", "bus2.txt");
            busSeatReserve("bus2.txt", "bus2SeatNo.txt");
            break;
        case 3:
            read_ints("bus3SeatNo.txt", "bus3.txt");
            busSeatReserve("bus3.txt", "bus3SeatNo.txt");
            break;
        case 4:
            read_ints("bus4SeatNo.txt", "bus4.txt");
            busSeatReserve("bus4.txt", "bus4SeatNo.txt");
            break;
        default:
            printf("Service not available!");
            break;
    }

}

int cancel(const char* file_name, const char* file_name2){
	int i;
    //pointer for bus, ticket and seat    
    FILE *fbusptr1, *seatNoPtr1;
    char name[20] = "Empty"; 
    int seat_no;


    fbusptr1 = fopen(file_name, "r+");
    seatNoPtr1 = fopen(file_name2, "r+");

    if(fbusptr1==NULL && seatNoPtr1==NULL){
        fbusptr1 = fopen(file_name, "w+");
        seatNoPtr1 = fopen(file_name2, "w+");
    }
    else{
        fbusptr1 = fopen(file_name, "a+");
        seatNoPtr1 = fopen(file_name2, "a+");
    }

   
   
    
    printf("Enter seat number: ");
    scanf("%d", &seat_no);
    fprintf(seatNoPtr1, "%d\n", seat_no);
    fprintf(fbusptr1, "%s\n", name);
 

    fclose(seatNoPtr1);
    fclose(fbusptr1);

    printf("\n");
    printf("Enter any key to continue.......");
    getch();
}

int cancel_booking(){
    char destination[50];
    int option;
    int i,j;

    system("cls");
    printf("\n\n\t\t\t:::::::::::::::::::::::::::::::::\n");
    printf("\t\t\t\tBUS RESERVATION\n");
    printf("\t\t\t:::::::::::::::::::::::::::::::::\n");
    char *destination_ptr[4] = {"Gorkha", "Pokhara", "Chitwan", "Lumbini"};

    printf("Services available in: ");
    printf("\n");
    for(i=0; i<4; i++){
        j = i;
        printf("%d ", ++j);
        printf("%s-----", buses[i]);
        puts(destination_ptr[i]); 
    }


    printf("Select your destination: ");
    scanf("%d", &option);

    switch(option){
        case 1:
            read_ints("bus1SeatNo.txt", "bus1.txt");
            cancel("bus1.txt", "bus1SeatNO.txt");
            break;
        case 2:
            read_ints("bus2SeatNo.txt", "bus2.txt");
            cancel("bus2.txt", "bus2SeatNO.txt");
            break;
        case 3:
            read_ints("bus3SeatNo.txt", "bus3.txt");
            cancel("bus3.txt", "bus3SeatNO.txt");
            break;
        case 4:
            read_ints("bus4SeatNo.txt", "bus4.txt");
            cancel("bus4.txt", "bus4SeatNO.txt");
            break;
        default:
            printf("Service not available!");
            break;
    }

}



int main(){
  int option;
  login();
  system("cls");
  menu();
  printf("Enter your choice: ");
  scanf("%d", &option);

  switch(option){
    case 1:
      busExpress();
      break;
    case 2:
      Booking();
      break;
    case 3:
        status();
        break;
    case 4:
    	cancel_booking();
    	break;
    case 5:
    	printf("Press any key to exit..........");
    	getch();
    	exit(0);
    	break;
    default:
      printf("Invalid");
      break;
  }
}



//function to read booking status in bus

int status(){
    int options;
    busExpress();

    printf("Enter bus no: ");
    scanf("%d", &options);
    switch(options){
        case 1:
            read_ints("bus1SeatNo.txt", "bus1.txt");
            break;
        case 2:
            read_ints("bus2SeatNo.txt", "bus2.txt");
            break;
        case 3:
            read_ints("bus3SeatNo.txt", "bus3.txt");
            break;
        case 4:
            read_ints("bus4SeatNo.txt", "bus4.txt");
            break;
        default:
            printf("The bus is not available!");

    }
    
    
}
//function to read ticket number and passenger name from files
void read_ints (const char* file_name, const char* file_name2)
{
  FILE* file = fopen (file_name, "r");
  FILE *file1 = fopen(file_name2, "r");
  int i = 0;
  int j = 0;


  fscanf (file, "%d", &i);    
  //for reading ticket numbers and passenger names stored in file
  while (!feof (file) && fgets(buffer, sizeof(buffer), file1) != NULL)
    {  
      strcpy(tempname[i-1], buffer);
      fscanf (file, "%d", &i);     
    }
  fclose (file);
  fclose(file1); 
  for(i=0; i<33; i++){
      printf("%d. %s\n", ++j, tempname[i]);
  }       
}



//function for login
void login()
{
int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="user";
    do
{
system("cls");
    printf("\n\n\n");
    printf("\t    BUS RESERVATION");
    printf("\n   \n\n");
    printf("     LOGIN FORM   ");
    printf("\n\n   ENTER USERNAME: ");
    scanf("%s", &uname);
    printf(" \n   ENTER PASSWORD: ");
while(i<10)
{
    pword[i]=getch();
    c=pword[i];
    if(c==13) break;
    else printf("*");
    i++;
}
pword[i]='\0';
//char code=pword;
i=0;
//scanf("%s",&pword);
if(strcmp(uname,"user")==0 && strcmp(pword,"user")==0)
{
    printf("\n ");
    printf("  \n\n   WELCOME USER !!!!");
    printf("\n\n\n   Press any key to continue...");
    getch();//holds the screen
    break;
}
else
{
    printf("\n  ");
printf("\n\n   LOGIN IS UNSUCESSFUL...PLEASE TRY AGAIN...");
a++;
 
getch();//holds the screen
 
}
}
while(a<=4);
if (a>4)
{
printf("\nSorry you have entered the wrong username and password for four times!!!");
 
getch();
 
}
system("cls");
}
