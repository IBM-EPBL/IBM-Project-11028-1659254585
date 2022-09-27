import random
import time

def CheckTemp(temperature):
    if temperature>70:
        print("\nTemperature is high \n !! Alarm is ON !!\n")

while (True):
    temp = random.randint(20,100)
    humidity = random.randint(0,100)
    print("Temperature = "+str(temp))
    print("Humidity = "+str(humidity))
    CheckTemp(temp)
    time.sleep(1)