
from vpython import *
#import rhinoscriptsyntax as rs
#object class defined:
class Object:


    def __init__(self): # object definition of methods

        self.shape = sphere(pos= vector (0,0.24,0), radius= 1, color= color.red)
        #self.motion = motion

    # method defined by the geometry of the object // Design of the object as in shape/size/position
    def Type(self):
        return self.shape


    # method of motion of the object // Behavior of the object



Box = Object() # Giving Box instance of the class Object

# circle = sphere (pos= vector (0,0.24,0), radius= 1, color= color.red)
floor = box(pos=vector(-1,-1,0),size=vector(50,0.5,50), color = color.green)



t = 1
dx = 0.1
left = 10
# run true in the while forever
while (t<=1000):
    rate(100)
    #circle.pos.x = circle.pos.x + 1

    #if circle.pos.x >=5 or circle.pos.x <= -5:
    if left == 10:
        Box.Type().pos.x = Box.Type().pos.x - dx

        dx = - dx #increases the x pos by dx

    Box.Type().pos.x = Box.Type().pos.x + dx

    Box.Type().pos.z = Box.Type().pos.z + dx

    t = t + 1 # loop counter
    
