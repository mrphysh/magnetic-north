//let's put comments here  ..... 05
//The serial monitor wakes up nicely
//5 volts shouldgive a positive accordingto the definition of the input.
//it starts with a default 133  pin30.  but I ground that pin and it responds to the appropriate
//stimu;ation.  The idea being that the 23-50 are not properly grounded.
//good beginning. 
//I start kby making the array.  the for loop iterates though the new array and the 
// DIGITALREAD  is direted towrd the variable fromthe array.
//                         this is moving forward.  there is something wrong with the array definitions?
//


#define ldrPin53 53 //   These  must be on different lines    ,,,,     okay
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
#define relayPin  8
#define puffPin  9



boolean ldrstatus53 = 0; boolean ldrstatus52 = 0;boolean ldrstatus51 = 0;boolean ldrstatus50 = 0;boolean ldrstatus49 = 0; 
boolean ldrstatus48 = 0;boolean ldrstatus47 = 0; boolean ldrstatus46 = 0; boolean ldrstatus45 = 0; boolean ldrstatus44 = 0; 
boolean ldrstatus43 = 0; boolean ldrstatus42 = 0;boolean ldrstatus41 = 0;boolean ldrstatus40 = 0;boolean ldrstatus39 = 0; 
boolean ldrstatus38 = 0; boolean ldrstatus37 = 0;boolean ldrstatus36 = 0;boolean ldrstatus35 = 0;boolean ldrstatus34 = 0; 
boolean ldrstatus33 = 0; boolean ldrstatus32 = 0;boolean ldrstatus31 = 0;boolean ldrstatus30 = 0;boolean ldrstatus29 = 0; 
boolean ldrstatus28 = 0; boolean ldrstatus27 = 0;boolean ldrstatus26 = 0;boolean ldrstatus25 = 0;boolean ldrstatus24 = 0;
boolean ldrstatus23 = 0; boolean ldrstatus22 = 0;

float loc_53 = 181.12;   float loc_52 = 179.04;float loc_51 = 176.96;float loc_50 = 174.88;float loc_49 = 172.8;float loc_48 = 170.72;
float loc_47 = 168.64;   float loc_46 = 166.56;float loc_45 = 164.48;float loc_44 = 162.4; float loc_43 = 160.32;float loc_42 = 158.24;
float loc_41 = 156.16;   float loc_40 = 154.04;float loc_39 = 152.00;float loc_38 = 149.92;float loc_37 = 147.84;float loc_36 = 145.76;
float loc_35 = 143.68;   float loc_34 = 141.6; float loc_33 = 139.52;float loc_32 = 137.44;float loc_31 = 135.36;float loc_30 = 133.28;
float loc_29 = 131.2;   float loc_28 = 129.12;float loc_27 = 127.04;float loc_26 = 124.96;float loc_25 = 122.88;float loc_24 = 120.8;
float loc_23 = 118.72;   float loc_22 = 116.64;

boolean pin_status[40] =  { 
  ldrPin53, ldrPin52,ldrPin51,ldrPin50,ldrPin49,ldrPin48,ldrPin47,
  ldrPin46,ldrPin45,ldrPin44,ldrPin43,ldrPin42,ldrPin41,ldrPin40,ldrPin39,ldrPin38,
  ldrPin37,ldrPin36,ldrPin35,ldrPin34,ldrPin33,ldrPin32,ldrPin31,ldrPin30, ldrPin29,
  ldrPin28,ldrPin27,ldrPin26,ldrPin25,ldrPin24,ldrPin23,ldrPin22  }  
;
////  okay    good,  I need an array of values
float location_values [40]  =  {
  181.12,   179.04,  176.96,  174.88,  172.8,  170.72,
  168.64,    166.56,  164.48,  162.4,  160.32,  158.24,
  156.16,    154.04,  152.00,  149.92,  147.84,  145.76,
  143.68,    141.6,  139.52,  137.44,  135.36,  133.28,
  131.2,    129.12,  127.04,  124.96,  122.88,  120.8,
  118.72,    116.64};

boolean bool_hold=0;

void setup()   {

  pinMode (ldrPin53,   INPUT);   pinMode (ldrPin52, INPUT);  pinMode (ldrPin51, INPUT);  pinMode (ldrPin50, INPUT);  
  pinMode (ldrPin49, INPUT);    pinMode (ldrPin48, INPUT);  pinMode (ldrPin47,   INPUT); pinMode (ldrPin46, INPUT);  
  pinMode (ldrPin45, INPUT);    pinMode (ldrPin44, INPUT);  pinMode (ldrPin43, INPUT);    pinMode (ldrPin42, INPUT);
  pinMode (ldrPin41,   INPUT);   pinMode (ldrPin40, INPUT);   pinMode (ldrPin39, INPUT);   pinMode (ldrPin38, INPUT);  
  pinMode (ldrPin37, INPUT);    pinMode (ldrPin36, INPUT);  pinMode (ldrPin35,   INPUT);  pinMode (ldrPin34, INPUT);  
  pinMode (ldrPin33, INPUT);    pinMode (ldrPin32, INPUT);  pinMode (ldrPin31, INPUT);  pinMode (ldrPin30, INPUT);
  pinMode (ldrPin29,   INPUT);   pinMode (ldrPin28, INPUT);   pinMode (ldrPin27, INPUT);  pinMode (ldrPin26, INPUT);  
  pinMode (ldrPin25, INPUT);    pinMode (ldrPin24, INPUT);  pinMode (ldrPin23,   INPUT);  pinMode (ldrPin22, INPUT);

  Serial.begin(9600);
  Serial.println("hello world");
}

void loop()    {


  for ( int counter= 0; counter <30  ; counter++ ){ 
    bool_hold= digitalRead(pin_status[counter]);
    if (bool_hold==1){

    Serial.println (counter);
    Serial.println (bool_hold);
    Serial.println (location_values [counter]); 
    Serial.println();
    delay (300);
    }
  }
}













