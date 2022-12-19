import serial

from vpython import *

# object demensions
circle = sphere (pos= vector (0,0.24,0), radius= 1, color= color.red)
floor = box(pos=vector(-1,-1,0),size=vector(50,0.5,50), color = color.blue)
t = 1
dx = 0.5

# communcation port
com = serial.Serial('COM3',baudrate = 9600, timeout=1 )

while True:
    rate(1000)

    up = (list(range(500,1024)))
    upx = ' '.join(map(str, up))
    """
    up = (list(range(0,494))) # range for analog values for moving up  (0,494)(0,0,) = -x
    upx = ' '.join(map(str,up)) # convert range values into type string     (0,494)(0,1023) = +y

    down = (list(range(0,1024)))
    downx = ' '.join(map(str,down))
    """

    # stores serial data from COM port and decodes to ascii
    Data = com.readline().decode('ascii')

    #function reads serial data
    def Reads(info=Data):

        # Split the string to 2 with split() function
        value = info.split(',',1)

        # append to a list of  store
        #X , Y = value

        # convert the string list to integer
        return value


    if Reads(info=Data.strip('\n,\r')) == ['492',upx] or Reads(info=Data.strip('\n,\r')) == ['492',upx]: # UP values['493','1023']
        circle.pos.z = circle.pos.z + dx

    if Reads(info=Data.strip('\n,\r')) == ['492','0']: #  Down values['493','0']
        circle.pos.z = circle.pos.z - dx

    if Reads(info=Data.strip('\n,\r')) == ['0','488'] or Reads(info=Data.strip('\n,\r')) == ['0','487']: # right values
        circle.pos.x = circle.pos.x + dx

    if Reads(info=Data.strip('\n,\r')) == ['1023','488'] or Reads(info=Data.strip('\n,\r')) == ['1023','487']: # left values
        circle.pos.x = circle.pos.x - dx

    t = t + 1 # Time counter




# make a user reconetion function for moving left and right up and down

# how to mae program read a spesfice analog pin 