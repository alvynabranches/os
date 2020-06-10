/*
	Name: Baburam Nabik
	Roll No: 1934
	Program: Bike Rental System
*/

#include <stdio.h>
#include <time.h>

typedef struct  
{ 
    int id; 
    char name[20]; 
    char model[20]; 
    char color[20]; 
    char vehicle_no[20]; 
    int year; 
    char insurance_exp[20]; 
    char pollution_exp[20]; 
    int status; 
} vehicle;  
	

int input() 
{ 
    int number; 
    scanf("%d", &number); 
    return (number);
} 

// void writeData(FILE *fp){
// 	char choice = 'y';
// 	vehicle v;
// 	int id=0;
// 	static status=0;
// 	while(choice == 'y')
// 	{
// 		printf("Enter the name of the vehicle : ex. Activa\n");	
// 		scanf("%s", v.name);
// 		printf("Enter the model of the vehicle : ex. 3G\n");	
// 		scanf("%s", v.model);
// 		printf("Enter the color of the vehicle : ex. white\n");	
// 		scanf("%s", v.color);
// 		printf("Enter the vehicle no of the vehicle : ex. GA-03-AE-7443\n");	
// 		scanf("%s", v.vehicle_no);
// 		printf("Enter the year of the vehicle : ex. 2020\n");	
// 		scanf("%d", &v.year);
// 		printf("Enter the Insurance expiry date of the vehicle : ex. 20-10-2020\n");	
// 		scanf("%s", v.insurance_exp);
// 		printf("Enter the Pollution expiry date of the vehicle : ex. 20-10-2020\n");	
// 		scanf("%s", v.pollution_exp);

// 		fseek(fp, 0, SEEK_END);
// 		id++;
// 		fprintf(fp,"%d %s %s %s %s %d %s %s %d\n",v.id,v.name,v.model,v.color,v.vehicle_no,v.year,v.insurance_exp,v.pollution_exp,v.status);
// 		printf("Press y : To add a new record or any other key to go back\n");
// 		scanf(" %c", &choice);
// 	}
// }

// void readData(FILE *fp){
// 	rewind(fp);
// 	vehicle v;
// 	while(fscanf(fp,"%d %s %s %s %s %d %s %s %d\n",&v.id,v.name,v.model,v.color,v.vehicle_no,&v.year,v.insurance_exp,v.pollution_exp,&v.status) != EOF){
// 		printf(fp,"\n%d %s %s %s %s %d %s %s %d",v.id,v.name,v.model,v.color,v.vehicle_no,v.year,v.insurance_exp,v.pollution_exp,v.status);
// 	}
// 	printf("\n");
// }

void bikeMenu(FILE *fp){
	int choice;
	do {
		printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n"); 
		printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n"); 
		printf("\t\t\tBike Rental System\n"); 
		printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n"); 
		printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n"); 
	
		printf("Press 1 : Add Bike\n"); 
		printf("Press 2 : Update Bike\n"); 
		printf("Press 3 : Delete Bike\n"); 
		printf("Press 4 : Back\n");
		printf("Press 0 : Quit\n");
		printf("Enter your choice:\n"); 

		choice = input(); 
		  
		switch (choice) { 
		case 1: { 
			system("clear");
		    printf("Add Bike\n");
			writeData(fp); 
		    break; 
		} 
		case 2: { 
			system("clear");
		    printf("Update Bike\n");
		    break; 
		} 
		case 3: { 
			system("clear");
		    printf("Delete Bike\n"); 
		    break; 
		} 
		case 4: { 
			system("clear");
		    printf("Main Menu\n");
			mainMenu(fp); 
		    break; 
		} 
		case 0: { 
			system("clear");
		    printf("Quiting.....\n");
		    break;
		}
		default: 
			system("clear");
		    printf("wrong Input\n"); 
		}
	} while(choice !=0);

}

void mainMenu(FILE *fp){
	int choice;
	do{

		printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n"); 
		printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n"); 
		printf("\t\t\tBike Rental System\n"); 
		printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n"); 
		printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n"); 
	
		printf("Press 1 : Bike Details\n"); 
		printf("Press 2 : Display Bike Details\n"); 
		printf("Press 3 : Rent Bike\n"); 
		printf("Press 4 : Bill\n"); 
		printf("Press 5 : Current Status of Bike\n"); 
		printf("Press 0 : Quit\n");
		printf("Enter your choice:\n"); 

		choice = input(); 
		  
		switch (choice) { 
		case 1: { 
			system("clear");
		    bikeMenu(fp);
		    break; 
		} 
		case 2: { 
			system("clear");
		    printf("Display Bike Details\n");
			readData(fp); 
		    break; 
		} 
		case 3: { 
			system("clear");
		    printf("Rent Bike\n"); 
		    break; 
		} 
		case 4: { 
			system("clear");
		    printf("Bill Bike\n"); 
		    break; 
		}
		case 5: { 
			system("clear");
		    printf("Current Status of Bike\n"); 
		    break; 
		}
		case 0: { 
			system("clear");
		    printf("Quiting.....\n");
		    break;
		}
		default: 
			system("clear");
		    printf("wrong Input\n"); 
		}
	} while(choice !=0);

}

int * date(int date, int month, int year){
	int d[3] ={date, month, year};
	return d;
}

void expiry_alert(int * expiry, int * current)
{
	unsigned short int expired = 0;
}

void main() 
{ 
	vehicle v;
    // FILE *fp; 

	// fp = fopen("service.txt", "a+") ;
	// if (fp == NULL) 
    // {
    //     printf("\nError opening file\n"); 
    // }
	// else
	// {
	// 	mainMenu(fp);
	// }
	// fclose(fp);
}
















