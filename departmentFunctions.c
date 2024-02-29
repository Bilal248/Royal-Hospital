int Doctor;
char Doctors[50];
char *doctors = Doctors;//Making Doctor a pointer to be used in other functions
void DocTime()
{
    char arrTiming1[7][256]={"8:00-9:00","9:00-10:00","10:00-11:00","11:00-12:00","12:00-1:00","1:00-2:00","2:00-3:00"};
    for (int i = 0; i < 7; i++)
    {
        printf("%d)  %s\n",i+1,arrTiming1[i]);
    }
}

int Cardiology(void)
{
separator();
statement();

char arrCardiology[4][256]={"Dr.Kashif Khan","Dr.Farooq Siddique","Dr.Ilyas Akram","Dr.Mehmood Shah"};
for (int i = 0; i < 4; i++)
{
    printf("%d. %s\n",i+1,arrCardiology[i]);
}
separator();
printf("\nSelect a Doctor:");
scanf("%d",&Doctor);
printf("\n");
switch (Doctor)
{
case 1:
    dr_Kashif();
    strcpy(doctors,"Dr.Kashif Khan");
    break;
case 2:
    dr_Farooq();
    strcpy(doctors,"Dr.Farooq Khan");
    break;

case 3:
    dr_ilyas();
    strcpy(doctors,"Dr.Ilyas Akram");
    break;

case 4:
    dr_mehmood();
    strcpy(doctors,"Dr.Mehmood Shah");
    break;

default:
while (getchar() != '\n');

printf("\nInvalid input.Returning to Department Select Menu");
    break;
}

return 0;
}

int Internal_Medicine(void)
{
separator();
statement();

char arrInternalMedicine[3][256]={"Dr.Asaf Niazi","Dr.Laiba Fareed","Dr.Huma Shah"};
for (int i = 0; i < 3; i++)
{
    printf("%d. %s\n",i+1,arrInternalMedicine[i]);
}
printf("\nSelect a Doctor:");
scanf("%d",&Doctor);
printf("\n");
switch (Doctor)
{
case 1:
    dr_asaf();
    strcpy(doctors,"Dr.Asaf Niazi");
    break;
case 2:
    dr_laiba();
    strcpy(doctors,"Dr.Laiba Fareed");
    break;

case 3:
    dr_huma();
    strcpy(doctors,"Dr.Huma Shah");
    break;

default:
while (getchar() != '\n');

printf("\nInvalid input.Returning to Department Select Menu");
    break;
}
    return 0;
}

int Neurology(void)
{

separator();
statement();

char arrNeurology[3][256]={"Dr.Bakhtiyar Khan","Dr.Fatima Zia","Dr.Maryam Hafeez"};
for (int i = 0; i < 3; i++)
{
    printf("%d. %s\n",i+1,arrNeurology[i]);
}
printf("\nSelect a Doctor:");
scanf("%d",&Doctor);
printf("\n");
switch (Doctor)
{
case 1:
    dr_bakhtiyar();
    strcpy(doctors,"Dr.Bakhtiyar Khan");
    break;
case 2:
    dr_fatima();
    strcpy(doctors,"Dr.Fatima Zia");
    break;

case 3:
    dr_maryam();
    strcpy(doctors,"Dr.Maryam Hafeez");
    break;

default:
while (getchar() != '\n');

printf("\nInvalid input.Returning to Department Select Menu");
    break;
}
    return 0;
}

int Orthopedics(void)
{
separator();
statement();

char arrOrthopedics[4][256]={"Dr.Naeem Khan","Dr.Bilal Ahmad","Dr.Abbas Khan","Dr.Saqib Khan"};
for (int i = 0; i < 4; i++)
{
    printf("%d. %s\n",i+1,arrOrthopedics[i]);
}
printf("\nSelect a Doctor:");
scanf("%d",&Doctor);
printf("\n");
switch (Doctor)
{
case 1:
    dr_naeem();
    strcpy(doctors,"Dr.Naeem Khan");
    break;
case 2:
    dr_bilal();
    strcpy(doctors,"Dr.Bilal Ahmad");
    break;

case 3:
    dr_abbas();
    strcpy(doctors,"Dr.Abbas Khan");
    break;

case 4:
    dr_saqib();
    strcpy(doctors,"Dr.Saqib Khan");
    break;

default:
while (getchar() != '\n');

printf("\nInvalid input.Returning to Department Select Menu");
    break;
}
    return 0;
}

int Nephrology(void)
{
separator();
statement();

char arrNephrology[4][256]={"Dr.Balaj Khan","Dr.Haroon Zia","Dr.Kifayatullah","Dr.Arsam Ali"};
for (int i = 0; i < 4; i++)
{
    printf("%d. %s\n",i+1,arrNephrology[i]);
}
printf("\nSelect a Doctor:");
scanf("%d",&Doctor);
printf("\n");
switch (Doctor)
{
case 1:
    dr_balaj();
    strcpy(doctors,"Dr.Balaj Khan");
    break;
case 2:
    dr_haroon();
    strcpy(doctors,"Dr.Haroon Zia");
    break;

case 3:
    dr_kifayat();
    strcpy(doctors,"Dr.Kifayatullah");
    break;

case 4:
    dr_arsam();
    strcpy(doctors,"Dr.Arsam Ali");
    break;

default:
while (getchar() != '\n');

printf("\nInvalid input.Returning to Department Select Menu");
    break;
}
    return 0;
}

int Urology(void)
{
separator();
statement();

char arrUrology[4][256]={"Dr.Saif Akbar","Dr.Rafi ullah","Dr.Malaiaka Noor","Dr.Mahnoor Shafiq"};
for (int i = 0; i < 4; i++)
{
    printf("%d. %s\n",i+1,arrUrology[i]);
}
printf("\nSelect a Doctor:");
scanf("%d",&Doctor);
printf("\n");
switch (Doctor)
{
case 1:
    dr_Saif();
    strcpy(doctors,"Dr.Saif Akbar");
    break;
case 2:
    dr_Rafi();
    strcpy(doctors,"Dr.Rafi ullah");
    break;

case 3:
    dr_Malaika();
    strcpy(doctors,"Dr.Malaiaka Noor");
    break;

case 4:
    dr_Mahnoor();
    strcpy(doctors,"Dr.Mahnoor Shafiq");
    break;

default:
while (getchar() != '\n');

printf("\nInvalid input.Returning to Department Select Menu");
    break;
}
    return 0;
}

int General_Surgery(void)
{
    separator();
    statement();

    char arrGeneralSurgery[3][256] = {"Dr.Ahmad Khan", "Dr.Ismail Shah", "Dr.Raqeeb Hafeez"};
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, arrGeneralSurgery[i]);
    }
    printf("\nSelect a Doctor:");
    scanf("%d", &Doctor);
    printf("\n");
    switch (Doctor)
    {
    case 1:
        dr_ahmad();
        strcpy(doctors, "Dr.Ahmad Khan");
        break;
    case 2:
        dr_ismail();
        strcpy(doctors, "Dr.Ismail Shah");
        break;
    case 3:
        dr_raqeeb();
        strcpy(doctors, "Dr.Raqeeb Hafeez");
        break;
    default:
    while (getchar() != '\n');

    printf("\nInvalid input.Returning to Department Select Menu");
        break;
    }
    return 0;
}

int Radiology(void)
{
    separator();
    statement();

    char arrRadiology[4][256] = {"Dr.Saad Khan", "Dr.Ushna Shah", "Dr.Hussain Shareef", "Dr.Usman Khattak"};
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, arrRadiology[i]);
    }
    printf("\nSelect a Doctor:");
    scanf("%d", &Doctor);
    printf("\n");
    switch (Doctor)
    {
    case 1:
        dr_saad();
        strcpy(doctors, "Dr.Saad Khan");
        break;
    case 2:
        dr_ushna();
        strcpy(doctors, "Dr.Ushna Shah");
        break;
    case 3:
        dr_hussain();
        strcpy(doctors, "Dr.Hussain Shareef");
        break;
    case 4:
        dr_usman();
        strcpy(doctors, "Dr.Usman Khattak");
        break;
    default:
    while (getchar() != '\n');

    printf("\nInvalid input.Returning to Department Select Menu");
    break;
    }
    return 0;
}

int Opthalmology(void)
{
    separator();
    statement();

    char arrOpthalmology[3][256] = {"Dr.Ijaz Ghani", "Dr.Maaz Rafi", "Dr.Zain Mubarak"};
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, arrOpthalmology[i]);
    }
    printf("\nSelect a Doctor:");
    scanf("%d", &Doctor);
    printf("\n");
    switch (Doctor)
    {
    case 1:
        dr_ijaz();
        strcpy(doctors, "Dr.Ijaz Ghani");
        break;
    case 2:
        dr_maaz();
        strcpy(doctors, "Dr.Maaz Rafi");
        break;
    case 3:
        dr_zain();
        strcpy(doctors, "Dr.Zain Mubarak");
        break;
    default:
    while (getchar() != '\n');

    printf("\nInvalid input.Returning to Department Select Menu");
    break;
    }
    return 0;
}

int Obstetric_and_Gynaecology(void)
{
    separator();
    statement();

    char arrObstetricAndGynaecology[3][256] = {"Dr.Hamas Khan", "Dr.Zuhair Shah", "Dr.Mohmmad Hafeez"};
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, arrObstetricAndGynaecology[i]);
    }
    printf("\nSelect a Doctor:");
    scanf("%d", &Doctor);
    printf("\n");
    switch (Doctor)
    {
    case 1:
        dr_hamas();
        strcpy(doctors, "Dr.Hamas Khan");
        break;
    case 2:
        dr_zuhair();
        strcpy(doctors, "Dr.Zuhair Shah");
        break;
    case 3:
        dr_hafeez();
        strcpy(doctors, "Dr.Mohmmad Hafeez");
        break;
    default:
    while (getchar() != '\n');

    printf("\nInvalid input.Returning to Department Select Menu");
    break;
    }
    return 0;
}

int Dermatology(void)
{
    separator();
    statement();

    char arrDermatology[4][256] = {"Dr.Imad Khan", "Dr.Arslan Khan", "Dr.Muzammil Ahmad", "Dr.Sohaib Babar"};
    for (int i = 0; i < 4; i++)
    {
        printf("%d. %s\n", i + 1, arrDermatology[i]);
    }
    printf("\nSelect a Doctor:");
    scanf("%d", &Doctor);
    printf("\n");
    switch (Doctor)
    {
    case 1:
        dr_imad();
        strcpy(doctors, "Dr.Imad Khan");
        break;
    case 2:
        dr_arslan();
        strcpy(doctors, "Dr.Arslan Khan");
        break;
    case 3:
        dr_muzzamil();
        strcpy(doctors, "Dr.Muzammil Ahmad");
        break;
    default:
    while (getchar() != '\n');

    printf("\nInvalid input.Returning to Department Select Menu");
    break;
    }
    return 0;
}

int Pediatrics(void)
{
    separator();
    statement();

    char arrPediatrics[4][256] = {"Dr.Ali Zia", "Dr.Haseeb Khan", "Dr.Sheryar Ali", "Dr.Mohsin Khan"};
    for (int i = 0; i < 4; i++)
    {
        printf("%d. %s\n", i + 1, arrPediatrics[i]);
    }
    printf("\nSelect a Doctor:");
    scanf("%d", &Doctor);
    printf("\n");
    switch (Doctor)
    {
    case 1:
        dr_ali();
        strcpy(doctors, "Dr.Ali Zia");
        break;
    case 2:
        dr_haseeb();
        strcpy(doctors, "Dr.Haseeb Khan");
        break;
    case 3:
        dr_sheryar();
        strcpy(doctors, "Dr.Sheryar Ali");
        break;
    default:
    while (getchar() != '\n');

    printf("\nInvalid input.Returning to Department Select Menu");
    break;
    }
    return 0;
}

int Emergency_Medicine(void)
{
    separator();
    statement();

    char arrEmergencyMedicine[3][256] = {"Dr.Mansoor Shah", "Dr.Ibrahim Khan", "Dr.Aftab Alam"};
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, arrEmergencyMedicine[i]);
    }
    printf("\nSelect a Doctor:");
    scanf("%d", &Doctor);
    printf("\n");
    switch (Doctor)
    {
    case 1:
        dr_mansoor();
        strcpy(doctors, "Dr.Mansoor Shah");
        break;
    case 2:
        dr_ibrahim();
        strcpy(doctors, "Dr.Ibrahim Khan");
        break;
    case 3:
        dr_aftab();
        strcpy(doctors, "Dr.Aftab Alam");
        break;

    default:
    while (getchar() != '\n');

    printf("\nInvalid input.Returning to Department Select Menu");
    break;
    }
    return 0;
}

int Gastroenterology(void)
{
    separator();
    statement();

    char arrGastroenterology[4][256] = {"Dr.Salman Khan", "Dr.Anees Afzal", "Dr.Wajid Rahim", "Dr.Ashfaq Khan"};
    for (int i = 0; i < 4; i++)
    {
        printf("%d. %s\n", i + 1, arrGastroenterology[i]);
    }
    printf("\nSelect a Doctor:");
    scanf("%d", &Doctor);
    printf("\n");
    switch (Doctor)
    {
    case 1:
        dr_salman();
        strcpy(doctors, "Dr.Salman Khan");
        break;
    case 2:
        dr_anees();
        strcpy(doctors, "Dr.Anees Afzal");
        break;
    case 3:
        dr_wajid();
        strcpy(doctors, "Dr.Wajid Rahim");
        break;
    case 4:
        dr_ashfaq();
        strcpy(doctors, "Dr.Ashfaq Khan");
        break;
    default:
    while (getchar() != '\n');

    printf("\nInvalid input.Returning to Department Select Menu");
    break;  
    }
    return 0;
}

int Anesthesiology(void)
{
    separator();
    statement();

    char arrAnesthesiology[3][256] = {"Dr.Adnan Ghani", "Dr.Faiz Alam", "Dr.Zimad Khan"};
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, arrAnesthesiology[i]);
    }
    printf("\nSelect a Doctor:");
    scanf("%d", &Doctor);
    printf("\n");
    switch (Doctor)
    {
    case 1:
        dr_adnan();
        strcpy(doctors, "Dr.Adnan Ghani");
        break;
    case 2:
        dr_faiz();
        strcpy(doctors, "Dr.Faiz Alam");
        break;
    case 3:
        dr_zimad();
        strcpy(doctors, "Dr.Zimad Khan");
        break;
    default:
    while (getchar() != '\n');

    printf("\nInvalid input.Returning to Department Select Menu");
    break;
    }
    return 0;
}

int Surgery(void)
{
    separator();
    statement();

    char arrSurgery[4][256] = {"Dr.Mahnoor Shah", "Dr.Ayesha Khan", "Dr.Hammad Rauf"};
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, arrSurgery[i]);
    }
    printf("\nSelect a Doctor:");
    scanf("%d", &Doctor);
    printf("\n");
    switch (Doctor)
    {
    case 1:
        dr_mahnoor();
        strcpy(doctors, "Dr.Mahnoor Shah");
        break;
    case 2:
        dr_ayesha();
        strcpy(doctors, "Dr.Ayesha Khan");
        break;
    case 3:
        dr_hammad();
        strcpy(doctors, "Dr.Hammad Rauf");
        break;
    default:
    while (getchar() != '\n');

    printf("\nInvalid input.Returning to Department Select Menu");
    break;
    }
    return 0;
}

int Rheumatology(void)
{
    separator();
    statement();

    char arrRheumatology[3][256] = {"Dr.Khushi", "Dr.Atif Aslam", "Dr.Shabir Babar"};
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, arrRheumatology[i]);
    }
    printf("\nSelect a Doctor:");
    scanf("%d", &Doctor);
    printf("\n");
    switch (Doctor)
    {
    case 1:
        dr_khushi();
        strcpy(doctors, "Dr.Khushi");
        break;
    case 2:
        dr_atif();
        strcpy(doctors, "Dr.Atif Aslam");
        break;
    case 3:
        dr_shabir();
        strcpy(doctors, "Dr.Shabir Babar");
        break;
    default:
    while (getchar() != '\n');

    printf("\nInvalid input.Returning to Department Select Menu");
    break;
    }
    return 0;
}

int Hematology(void)
{
    separator();
    statement();

    char arrHematology[4][256] = {"Dr.Naveed Khan", "Dr.Waheed Ali", "Dr.Izhar Khan", "Dr.Samira Ashraf"};
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, arrHematology[i]);
    }
    printf("\nSelect a Doctor:");
    scanf("%d", &Doctor);
    printf("\n");
    switch (Doctor)
    {
    case 1:
        dr_naveed();
        strcpy(doctors, "Dr.Naveed Khan");
        break;
    case 2:
        dr_waheed();
        strcpy(doctors, "Dr.Waheed Ali");
        break;
    case 3:
        dr_izhar();
        strcpy(doctors, "Dr.Izhar Khan");
        break;
    case 4:
        dr_samira();
        strcpy(doctors, "Dr.Samira Ashraf");
        break;
    default:
    while (getchar() != '\n');

    printf("\nInvalid input.Returning to Department Select Menu");
    break;
    }
    return 0;
}

int Physiotheraphy(void)
{
    separator();
    statement();

    char arrPhysiotheraphy[3][256] = {"Dr.Safiya Abbasi", "Dr.Noor Zafar", "Dr.Sara Alam"};
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, arrPhysiotheraphy[i]);
    }
    printf("\nSelect a Doctor:");
    scanf("%d", &Doctor);
    printf("\n");
    switch (Doctor)
    {
    case 1:
        dr_safiya();
        strcpy(doctors, "Dr.Safiya Abbasi");
        break;
    case 2:
        dr_noor();
        strcpy(doctors, "Dr.Noor Zafar");
        break;
    case 3:
        dr_sara();
        strcpy(doctors, "Dr.Sara Alam");
        break;
    default:
    while (getchar() != '\n');

    printf("\nInvalid input.Returning to Department Select Menu");
    break;
    }
    return 0;
}

int Pathology(void)
{
    separator();
    statement();

    char arrPathology[4][256] = {"Dr.Zahid Kamal", "Dr.Wajahat Shah", "Dr.Rauf Awaan", "Dr.Wahab Malik"};
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, arrPathology[i]);
    }
    printf("\nSelect a Doctor:");
    scanf("%d", &Doctor);
    printf("\n");
    switch (Doctor)
    {
    case 1:
        dr_zahid();
        strcpy(doctors, "Dr.Zahid Kamal");
        break;
    case 2:
        dr_wajahat();
        strcpy(doctors, "Dr.Wajahat Shah");
        break;
    case 3:
        dr_rauf();
        strcpy(doctors, "Dr.Rauf Awaan");
        break;
            break;
    case 4:
        dr_wahab();
        strcpy(doctors, "Dr.Wahab Malik");
        break;
    default:
    while (getchar() != '\n');

    printf("\nInvalid input.Returning to Department Select Menu");
    break;
    }
    return 0;
}

int Pulmonology(void)
{
    separator();
    statement();

    char arrPulmonology[4][256] = {"Dr.Shahid Khan", "Dr.Amir Ihsan", "Dr.Shawal Ihsan", "Dr.Hasnat Khan"};
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, arrPulmonology[i]);
    }
    printf("\nSelect a Doctor:");
    scanf("%d", &Doctor);
    printf("\n");
    switch (Doctor)
    {
    case 1:
        dr_shahid();
        strcpy(doctors, "Dr.Shahid Khan");
        break;
    case 2:
        dr_amir();
        strcpy(doctors, "Dr.Amir Ihsan");
        break;
    case 3:
        dr_shawal();
        strcpy(doctors, "Dr.Shawal Ihsan");
        break;
    case 4:
        dr_hasnat();
        strcpy(doctors, "Dr.Hasnat Khan");
        break;
    default:
    while (getchar() != '\n');

    printf("\nInvalid input.Returning to Department Select Menu");
    break;
    }
    return 0;
}

int Neurosurgery(void)
{
    separator();
    statement();

    char arrNeurosurgery[3][256] = {"Dr.Azan Sami", "Dr.Asad Zia", "Dr.Benazir Bhutto"};
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, arrNeurosurgery[i]);
    }
    printf("\nSelect a Doctor:");
    scanf("%d", &Doctor);
    printf("\n");
    switch (Doctor)
    {
    case 1:
        dr_azan();
        strcpy(doctors, "Dr.Azan Sami");
        break;
    case 2:
        dr_asad();
        strcpy(doctors, "Dr.Asad Zia");
        break;
    case 3:
        dr_benazir();
        strcpy(doctors, "Dr.Benazir Bhutto");
        break;
    default:
    while (getchar() != '\n');

    printf("\nInvalid input.Returning to Department Select Menu");
    break;
    }
    return 0;
}

int Medicine(void)
{
    separator();
    statement();

    char arrMedicine[3][256] = {"Dr.Imran Ali", "Dr.Suleiman Khan", "Dr.Ayaz Shah"};
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, arrMedicine[i]);
    }
    printf("\nSelect a Doctor:");
    scanf("%d", &Doctor);
    printf("\n");
    switch (Doctor)
    {
    case 1:
        dr_imran();
        strcpy(doctors, "Dr.Imran Ali");
        break;
    case 2:
        dr_suleiman();
        strcpy(doctors, "Dr.Suleiman Khan");
        break;
    case 3:
        dr_ayaz();
        strcpy(doctors, "Dr.Ayaz Shah");
        break;
    default:
    while (getchar() != '\n');

    printf("\nInvalid input.Returning to Department Select Menu");
    break;
    }
    return 0;
}

int Otorhinolaryngogly(void)
{
    separator();
    statement();

    char arrOtorhinolaryngogly[4][256] = {"Dr.Murad Bacha", "Dr.Sana Baloch", "Dr.Momin Mohmand", "Dr.Ikram Khaliq"};
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, arrOtorhinolaryngogly[i]);
    }
    printf("\nSelect a Doctor:");
    scanf("%d", &Doctor);
    printf("\n");
    switch (Doctor)
    {
    case 1:
        dr_murad();
        strcpy(doctors, "Dr.Murad Bacha");
        break;
    case 2:
        dr_sana();
        strcpy(doctors, "Dr.Sana Baloch");
        break;
    case 3:
        dr_momin();
        strcpy(doctors, "Dr.Momim Mohmand");
        break;
    case 4:
        dr_ikram();
        strcpy(doctors, "Dr.Ikram Khaliq");
        break;
    default:
    while (getchar() != '\n');

    printf("\nInvalid input.Returning to Department Select Menu");
    break;
    }
    return 0;
}
