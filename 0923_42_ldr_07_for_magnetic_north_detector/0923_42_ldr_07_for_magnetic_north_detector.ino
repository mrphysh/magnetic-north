//This is the first prototype...   about 40 ldrs\
//This is input mega 22 through 53

#define ldrPin53 53
#define ldrPin52 52
#define ldrPin51 51
#define ldrPin50 50
#define ldrPin49 49
#define ldrPin48 48
#define ldrPin47 47
#define ldrPin46 46
#define ldrPin45 45
#define ldrPin44 44
#define ldrPin43 43
#define ldrPin42 42
#define ldrPin41 41
#define ldrPin40 40
#define ldrPin39 39
#define ldrPin38 38
#define ldrPin37 37
#define ldrPin36 36
#define ldrPin35 35
#define ldrPin34 34
#define ldrPin33 33
#define ldrPin32 32
#define ldrPin31 31
#define ldrPin30 30
#define ldrPin29 29
#define ldrPin28 28
#define ldrPin27 27
#define ldrPin26 26
#define ldrPin25 25
#define ldrPin24 24
#define ldrPin23 23
#define ldrPin22 22

/*
  #define ldrPin49 21
  #define ldrPin47 20
  #define ldrPin45 19
  #define ldrPin43 18
  #define ldrPin53 17
  #define ldrPin51 16
  #define ldrPin49 15
  #define ldrPin47 14
  #define ldrPin45 13
  #define ldrPin43 12
*/
boolean ldrstatus53 = 0; boolean ldrstatus52 = 0; boolean ldrstatus51 = 0; boolean ldrstatus50 = 0; boolean ldrstatus49 = 0; boolean ldrstatus48 = 0;
boolean ldrstatus47 = 0; boolean ldrstatus46 = 0; boolean ldrstatus45 = 0; boolean ldrstatus44 = 0; boolean ldrstatus43 = 0; boolean ldrstatus42 = 0;
boolean ldrstatus41 = 0; boolean ldrstatus40 = 0; boolean ldrstatus39 = 0; boolean ldrstatus38 = 0; boolean ldrstatus37 = 0; boolean ldrstatus36 = 0;
boolean ldrstatus35 = 0; boolean ldrstatus34 = 0; boolean ldrstatus33 = 0; boolean ldrstatus32 = 0; boolean ldrstatus31 = 0; boolean ldrstatus30 = 0;
boolean ldrstatus29 = 0; boolean ldrstatus28 = 0; boolean ldrstatus27 = 0; boolean ldrstatus26 = 0; boolean ldrstatus25 = 0; boolean ldrstatus24 = 0;
boolean ldrstatus23 = 0; boolean ldrstatus22 = 0;

/*ldrstatus21 = 0;boolean ldrstatus20 = 0;boolean ldrstatus19 = 0;boolean ldrstatus18 = 0;
  boolean ldrstatus17 = 0;boolean ldrstatus16 = 0;boolean ldrstatus15 = 0;boolean ldrstatus14 = 0;boolean ldrstatus13 = 0;boolean ldrstatus12 = 0;
*/



float loc_53 = 181.12;   float loc_52 = 179.04; float loc_51 = 176.96; float loc_50 = 174.88; float loc_49 = 172.8; float loc_48 = 170.72;
float loc_47 = 168.64;   float loc_46 = 166.56; float loc_45 = 164.48; float loc_44 = 162.4; float loc_43 = 160.32; float loc_42 = 158.24;
float loc_41 = 156.16;   float loc_40 = 154.04; float loc_39 = 152.00; float loc_38 = 149.92; float loc_37 = 147.84; float loc_36 = 145.76;
float loc_35 = 143.68;   float loc_34 = 141.6; float loc_33 = 139.52; float loc_32 = 137.44; float loc_31 = 135.36; float loc_30 = 133.28;
float loc_29 = 131.2;   float loc_28 = 129.12; float loc_27 = 127.04; float loc_26 = 124.96; float loc_25 = 122.88; float loc_24 = 120.8;
float loc_23 = 118.72;   float loc_22 = 116.64;

/*float loc_21 = 7.9;float loc_20 = 8.5;float loc_19 = 9.7;float loc_18 = 2211.3;
  float loc_17 = 3.4;   float loc_16 = 6.5; float loc_15 = 7.9;float loc_14 = 8.5;float loc_13 = 9.7;float loc_12 = 2211.3;
*/
int megaInputNumber = 1;
float numberForPython = 16.7;
int i=0;
void setup()
{
  pinMode (ldrPin53,   INPUT); pinMode (ldrPin52, INPUT);  pinMode (ldrPin51, INPUT);  pinMode (ldrPin50, INPUT);  pinMode (ldrPin49, INPUT);  pinMode (ldrPin48, INPUT);
  pinMode (ldrPin47,   INPUT); pinMode (ldrPin46, INPUT);  pinMode (ldrPin45, INPUT);  pinMode (ldrPin44, INPUT);  pinMode (ldrPin43, INPUT);  pinMode (ldrPin42, INPUT);
  pinMode (ldrPin41,   INPUT); pinMode (ldrPin40, INPUT);  pinMode (ldrPin39, INPUT);  pinMode (ldrPin38, INPUT);  pinMode (ldrPin37, INPUT);  pinMode (ldrPin36, INPUT);
  pinMode (ldrPin35,   INPUT); pinMode (ldrPin34, INPUT);  pinMode (ldrPin33, INPUT);  pinMode (ldrPin32, INPUT);  pinMode (ldrPin31, INPUT);  pinMode (ldrPin30, INPUT);
  pinMode (ldrPin29,   INPUT); pinMode (ldrPin28, INPUT);  pinMode (ldrPin27, INPUT);  pinMode (ldrPin26, INPUT);  pinMode (ldrPin25, INPUT);  pinMode (ldrPin24, INPUT);
  pinMode (ldrPin23,   INPUT); pinMode (ldrPin22, INPUT);
  /*
    pinMode (ldrPin49,INPUT);  pinMode (ldrPin47,INPUT);  pinMode (ldrPin45,INPUT);  pinMode (ldrPin43,INPUT);
    pinMode (ldrPin53,   INPUT);pinMode (ldrPin51,INPUT);  pinMode (ldrPin49,INPUT);  pinMode (ldrPin47,INPUT);  pinMode (ldrPin45,INPUT);  pinMode (ldrPin43,INPUT);
  */
  Serial.begin(9600);
  Serial.println("hello world");

}

void loop()    {

  delay (200);


  for (i = 0 ; i < 10; i++) {
    delay(60000);
  }

  
  numberForPython = 777777;
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus53 = digitalRead (ldrPin53);
  if (ldrstatus53 == 1) {
    numberForPython = loc_53;
    megaInputNumber = 53;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus52 = digitalRead (ldrPin52);
  if (ldrstatus52 == 1) {
    numberForPython = loc_52;
    megaInputNumber = 52;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus51 = digitalRead (ldrPin51);
  if (ldrstatus51 == 1) {
    numberForPython = loc_51;
    megaInputNumber = 51;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus50 = digitalRead (ldrPin50);
  if (ldrstatus50 == 1) {
    numberForPython = loc_50;
    megaInputNumber = 50;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus49 = digitalRead (ldrPin49);
  if (ldrstatus49 == 1) {
    numberForPython = loc_49;
    megaInputNumber = 49;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus48 = digitalRead (ldrPin48);
  if (ldrstatus48 == 1) {
    numberForPython = loc_48;
    megaInputNumber = 48;
  }
  //= == == == == == == == == == == xxxxxxxxxxxxxxxxxxxxxxxxxxxx

  ldrstatus47 = digitalRead (ldrPin47);
  if (ldrstatus47 == 1) {
    numberForPython = loc_47;
    megaInputNumber = 47;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus46 = digitalRead (ldrPin46);
  if (ldrstatus46 == 1) {
    numberForPython = loc_46;
    megaInputNumber = 46;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus45 = digitalRead (ldrPin45);
  if (ldrstatus45 == 1) {
    numberForPython = loc_45;
    megaInputNumber = 45;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus44 = digitalRead (ldrPin44);
  if (ldrstatus44 == 1) {
    numberForPython = loc_44;
    megaInputNumber = 44;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus43 = digitalRead (ldrPin43);
  if (ldrstatus43 == 1) {
    numberForPython = loc_43;
    megaInputNumber = 43;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus42 = digitalRead (ldrPin42);
  if (ldrstatus42 == 1) {
    numberForPython = loc_42;
    megaInputNumber = 42;
  }
  //= == == == == == == == == == == xxxxxxxxxxxxxxxxxxxxxxxxxxxx
  ldrstatus41 = digitalRead (ldrPin41);
  if (ldrstatus41 == 1) {
    numberForPython = loc_41;
    megaInputNumber = 41;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus40 = digitalRead (ldrPin40);
  if (ldrstatus40 == 1) {
    numberForPython = loc_40;
    megaInputNumber = 40;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus39 = digitalRead (ldrPin39);
  if (ldrstatus39 == 1) {
    numberForPython = loc_39;
    megaInputNumber = 39;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus38 = digitalRead (ldrPin38);
  if (ldrstatus38 == 1) {
    numberForPython = loc_38;
    megaInputNumber = 38;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus37 = digitalRead (ldrPin37);
  if (ldrstatus37 == 1) {
    numberForPython = loc_37;
    megaInputNumber = 37;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus36 = digitalRead (ldrPin36);
  if (ldrstatus36 == 1) {
    numberForPython = loc_36;
    megaInputNumber = 36;
  }
  //= == == == == == == == == == == xxxxxxxxxxxxxxxxxxxxxxxxxxxx
  ldrstatus35 = digitalRead (ldrPin35);
  if (ldrstatus35 == 1) {
    numberForPython = loc_35;
    megaInputNumber = 35;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus34 = digitalRead (ldrPin34);
  if (ldrstatus34 == 1) {
    numberForPython = loc_34;
    megaInputNumber = 34;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus33 = digitalRead (ldrPin33);
  if (ldrstatus33 == 1) {
    numberForPython = loc_33;
    megaInputNumber = 33;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus32 = digitalRead (ldrPin32);
  if (ldrstatus32 == 1) {
    numberForPython = loc_32;
    megaInputNumber = 32;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus31 = digitalRead (ldrPin31);
  if (ldrstatus31 == 1) {
    numberForPython = loc_31;
    megaInputNumber = 31;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus30 = digitalRead (ldrPin30);
  if (ldrstatus30 == 1) {
    numberForPython = loc_30;
    megaInputNumber = 30;
  }
  //= == == == == == == == == == == xxxxxxxxxxxxxxxxxxxxxxxxxxxx
  ldrstatus29 = digitalRead (ldrPin29);
  if (ldrstatus29 == 1) {
    numberForPython = loc_29;
    megaInputNumber = 29;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus28 = digitalRead (ldrPin28);
  if (ldrstatus28 == 1) {
    numberForPython = loc_28;
    megaInputNumber = 28;
  }


  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus27 = digitalRead (ldrPin27);
  if (ldrstatus27 == 1) {
    numberForPython = loc_27;
    megaInputNumber = 27;
  }



  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus26 = digitalRead (ldrPin26);
  if (ldrstatus26 == 1) {
    numberForPython = loc_26;
    megaInputNumber = 26;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus25 = digitalRead (ldrPin25);
  if (ldrstatus25 == 1) {
    numberForPython = loc_25;
    megaInputNumber = 25;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus24 = digitalRead (ldrPin24);
  if (ldrstatus24 == 1) {
    numberForPython = loc_24;
    megaInputNumber = 24;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =
  ldrstatus23 = digitalRead (ldrPin23);
  if (ldrstatus23 == 1) {
    numberForPython = loc_23;
    megaInputNumber = 23;
  }
  //= == == == == == == == == == == xxxxxxxxxxxxxxxxxxxxxxxxxxxx
  ldrstatus22 = digitalRead (ldrPin22);
  if (ldrstatus22 == 1) {
    numberForPython = loc_22;
    megaInputNumber = 22;
  }
  //= == == == == == == == == == == == == == == == == == == == == == =

  /*
    ldrstatus51 = digitalRead (ldrPin51);
    if (ldrstatus51 == 1) {
     numberForPython = loc_51;
    megaInputNumber = 51;
      delay (200);}
    //= == == == == == == == == == == == == == == == == == == == == == =
    ldrstatus49 = digitalRead (ldrPin49);
    if (ldrstatus49 == 1) {
      numberForPython = loc_49;
    megaInputNumber = 49;
      delay (200);}
    //= == == == == == == == == == == == == == == == == == == == == == =
    ldrstatus47 = digitalRead (ldrPin47);
    if (ldrstatus47 == 1) {
    numberForPython = loc_47;
    megaInputNumber = 47;
      delay (200);}
    //= == == == == == == == == == == == == == == == == == == == == == =
    ldrstatus45 = digitalRead (ldrPin45);
    if (ldrstatus45 == 1) {
    numberForPython = loc_45;
    megaInputNumber = 45;
      delay (200);  }
    //= == == == == == == == == == == == == == == == == == == == == == =
    ldrstatus43 = digitalRead (ldrPin43);
    if (ldrstatus43 == 1) {
     numberForPython = loc_43;
    megaInputNumber = 43;
     delay (200);  }
    //= == == == == == == == == == == xxxxxxxxxxxxxxxxxxxxxxxxxxxx
    ldrstatus53 = digitalRead (ldrPin53);
    if (ldrstatus53 == 1) {
    numberForPython = loc_53;
    megaInputNumber = 53;
     delay (200);}
    //= == == == == == == == == == == == == == == == == == == == == == =
    ldrstatus51 = digitalRead (ldrPin51);
    if (ldrstatus51 == 1) {
     numberForPython = loc_51;
    megaInputNumber = 51;
      delay (200);}
    //= == == == == == == == == == == == == == == == == == == == == == =
    ldrstatus49 = digitalRead (ldrPin49);
    if (ldrstatus49 == 1) {
      numberForPython = loc_49;
    megaInputNumber = 49;
      delay (200);}
    //= == == == == == == == == == == == == == == == == == == == == == =
    ldrstatus47 = digitalRead (ldrPin47);
    if (ldrstatus47 == 1) {
    numberForPython = loc_47;
    megaInputNumber = 47;
      delay (200);}
    //= == == == == == == == == == == == == == == == == == == == == == =
    ldrstatus45 = digitalRead (ldrPin45);
    if (ldrstatus45 == 1) {
    numberForPython = loc_45;
    megaInputNumber = 45;
      delay (200);  }
    //= == == == == == == == == == == == == == == == == == == == == == =
    ldrstatus43 = digitalRead (ldrPin43);
    if (ldrstatus43 == 1) {
     numberForPython = loc_43;
    megaInputNumber = 43;
     delay (200);  }
    //= == == == == == == == == == == xxxxxxxxxxxxxxxxxxxxxxxxxxxx
    ldrstatus53 = digitalRead (ldrPin53);
    if (ldrstatus53 == 1) {
    numberForPython = loc_53;
    megaInputNumber = 53;
     delay (200);}
    //= == == == == == == == == == == == == == == == == == == == == == =
    ldrstatus51 = digitalRead (ldrPin51);
    if (ldrstatus51 == 1) {
     numberForPython = loc_51;
    megaInputNumber = 51;
      delay (200);}
    //= == == == == == == == == == == == == == == == == == == == == == =
    ldrstatus49 = digitalRead (ldrPin49);
    if (ldrstatus49 == 1) {
      numberForPython = loc_49;
    megaInputNumber = 49;
      delay (200);}
    //= == == == == == == == == == == == == == == == == == == == == == =
    ldrstatus47 = digitalRead (ldrPin47);
    if (ldrstatus47 == 1) {
    numberForPython = loc_47;
    megaInputNumber = 47;
      delay (200);}
    //= == == == == == == == == == == == == == == == == == == == == == =
    ldrstatus45 = digitalRead (ldrPin45);
    if (ldrstatus45 == 1) {
    numberForPython = loc_45;
    megaInputNumber = 45;
      delay (200);  }
    //= == == == == == == == == == == == == == == == == == == == == == =
    ldrstatus43 = digitalRead (ldrPin43);
    if (ldrstatus43 == 1) {
     numberForPython = loc_43;
    megaInputNumber = 43;
     delay (200);  }
    //= == == == == == == == == == == xxxxxxxxxxxxxxxxxxxxxxxxxxxx

  */
  Serial.println (numberForPython);
  //Serial.println (megaInputNumber);//the python seems to want the println

}
