import serial #import serial library
import sqlite3
import datetime
import sys
from random import randint
python_script = sys.argv[0]
data_object=serial.Serial("COM7",baudrate=9600 , timeout=3.0)  #  data_object is the object!!
###################
conn = sqlite3.connect ('db_final_final_oct_2023')
c = conn.cursor()
db_data = 0

c.execute("CREATE TABLE IF NOT EXISTS data_10_16 (column_one TEXT,column_two ,column_three, python_script )")
#####    
#########################   ADJUSTMENT VARIABLE  LET' JUST USE A HARD NUMBER LIKE 10 OR 20 OR -10

adjustmentNumber = 6000    #  this is adujustment times 100!!!!!!!!!

    
    ##########################
print ("delay 2")


while (1==1):
    unix = (datetime.datetime.now())

    if     (data_object.inWaiting()>0):
        try:
            first_data = data_object.readline().strip().decode('utf-8')
            first_data = int(first_data)
            #in_data = (in_data/100)
            #in_data = in_data
            #in_data = in_data.encode('utf-8')
            
            print (type(first_data))
            print (adjustmentNumber)
            print (unix)
            in_data = first_data + adjustmentNumber
            print (in_data)
            print()
            
            ##db_data = (in_data  + adjustment_number)
            c.execute("INSERT INTO data_10_16 (column_one,column_two,column_three, python_script) VALUES (?,?,?,?)",
		 ( unix , in_data, adjustmentNumber ,python_script ) )
            conn.commit()
        except:
            pass
####end###########################
