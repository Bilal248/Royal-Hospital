void depSwitch(int *test,int department)
{
    switch (department)
{
case 1:
    Cardiology();
    break;

case 2:
    Internal_Medicine();
    break;

case 3:
    Neurology();
    break;

case 4:
    Orthopedics();
    break;

case 5:
    Nephrology();
    break;

case 6:
    Urology();
    break;

case 7:
    General_Surgery();
    break;

case 8:
    Radiology();
    break;

case 9:
    Opthalmology();
    break;

case 10:
    Obstetric_and_Gynaecology();
    break;

case 11:
    Dermatology();
    break;

case 12:
    Pediatrics();
    break;

case 13:
    Emergency_Medicine();
    break;

case 14:
    Gastroenterology();
    break;

case 15:
    Anesthesiology();
    break;

case 16:
    Surgery();
    break;

case 17:
    Rheumatology();
    break;

case 18:
    Hematology();
    break;

case 19:
    Physiotheraphy();
    break;

case 20:
    Pathology();
    break;

case 21:
    Pulmonology();
    break;

case 22:
    Neurosurgery();
    break;

case 23:
    Medicine();
    break;

case 24:
    Otorhinolaryngogly();
    break;

default:
while (getchar() != '\n');
                            
printf("\nInvalid Input.Please enter again.");
*test=1;
    break;
}
}