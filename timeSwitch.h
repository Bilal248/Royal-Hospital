//Function for selected doctor time saving

void timeSwitch(int Time)
{
    switch (Time)
{
case 1:
    strcpy(timing,"8:00-9:00");
    break; 

case 2:
    strcpy(timing,"9:00-10:00");

    break;

case 3:
    strcpy(timing,"10:00-11:00");
    break;

case 4:
    strcpy(timing,"11:00-12:00");
    break;

case 5:
    strcpy(timing,"12:00-1:00");
    break;

case 6:
    strcpy(timing,"1:00-2:00");
    break;

case 7:
    strcpy(timing,"2:00-3:00");
    break;
default:
    while (getchar() != '\n');

    break;
    printf("\nInvalid input.Returning to Department Select Menu");
    break;
}
}
