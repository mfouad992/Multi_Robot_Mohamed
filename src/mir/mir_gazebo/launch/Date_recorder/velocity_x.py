#! /usr/bin/env python

import time
import rospy
import json
from geometry_msgs.msg import Twist


initial_time = -1

def callback(msg):
    # read previous data
    print('here')

    with open('velocity_x.json', 'r') as openfile:
        jsonObject = json.load(openfile)
        openfile.close()
    print(time.time())
    
    # append the current coordinates
    (jsonObject['velocity']).append(msg.linear.x)
    
    global initial_time
   
    if initial_time == -1:
        (jsonObject['time']).append(0)
        initial_time = time.time()
    else:
        (jsonObject['time']).append(time.time() - initial_time)
    
    # write the updated data into json file
    
    with open("velocity_x.json", "w") as outfile:
        json.dump(jsonObject, outfile)
        outfile.close()


rospy.init_node('global_Subscriber_vel_x') #change name 
sub=rospy.Subscriber('/mobile_base_controller/cmd_vel',Twist,callback)

rospy.spin()

if __name__ == '__main__':
    jsonObject = {'xCoordinates': []}
  
    callback()