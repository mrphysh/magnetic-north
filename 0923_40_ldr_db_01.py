import serial #import serial library
import sqlite3
import datetime
import sys
from random import randint
python_script = sys.argv[0]
data_object=serial.Serial("COM7",baudrate=9600 , timeout=3.0)  #  data_object is the object!!
###################
conn = sqlite3.connect ('real_data_mag_n_database')
c = conn.cursor()


c.execute("CREATE TABLE IF NOT EXISTS another_table (column_one TEXT,column_two REAL, python_script )")
#####    

    
   
##conn.commit()
    ###

    ##########################

while (1==1):
    (data_object.inWaiting()>0)  

    unix = (datetime.datetime.now())
       
    
                         ##  this is the input from Arduino
    ##unix = (datetime.datetime.now())
    ##    make the unicode into string then into int
    
    #rand_interval =(randint(17,21))

    in_data = data_object.readline().decode('ascii')   ##
    in_data = in_data.encode('utf-8')  #  ??  THAT DID IT!!!!
    if (in_data != None):
        c.execute("INSERT INTO another_table(column_one,column_two,python_script) VALUES (?,?,?)",
		 ( unix , in_data ,python_script ) )
    conn.commit()
####end###########################
