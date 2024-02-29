
void getInput(char *ptr) //For getting space in Input
{
    printf("Enter your Name:");
    fgets(ptr,30,stdin);

    int len2 = strlen(ptr);
    if (len2 > 0 && ptr[len2 - 1] == '\n') {
        ptr[len2 - 1] = '\0';
    }
}

//User:Patient Function
void Patient(){

char Name[50];
char Department [50];
char Doctors [50];
char Timing[50];
int Test;
int *test =&Test;

//Functions calls to department select and saving
void depSwitch(int *test,int department);
void depSel(int department,char *Department);

getchar();
getInput(Name);


int Age;
    printf("\nEnter your Age:");
    scanf("%d",&Age);

printf("\n");
while(1)
{
showDepartments();
int department;
    printf("\n\nSelect a Department Number:");
    scanf("%d",&department);

depSwitch(test,department);
depSel(department,Department);
if(*test!=1)
{
    printf("\n--------------------------------");
    printf("\n|You reciept is ready.Print it!|");
    printf("\n--------------------------------");

FILE *fptr;//The Reciept to be printed
fptr = fopen("Patient.txt", "w");
fprintf(fptr," ___________________________________________________________________________________________________________________________________________________________\n");
fprintf(fptr,"|                                                             ROYAL's HOSPITAL\n");
fprintf(fptr,"| __________________________________________________________________________________________________________________________________________________________\n");
fprintf(fptr,"| Name: %s\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t",Name);
fprintf(fptr,"Age: %d    \n",Age);
fprintf(fptr,"|___________________________________________________________________________________________________________________________________________________________\n");
fprintf(fptr,"|                                                            Department:%s\n",Department);
fprintf(fptr,"|                                                            Doctor:%s\n",doctors);
fprintf(fptr,"|                                                            Timing:%s\n",timing);
for (int i = 0; i < 70; i++)
{
    fprintf(fptr,"|\n");
}


//prints error if file doesn't exist
if(fptr == NULL)
{
    printf("Error loading player.txt\n");
}

fclose(fptr);  
break;
}

}
}
