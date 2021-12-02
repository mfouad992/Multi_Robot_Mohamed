#! /usr/bin/env python
import time
import rospy
from nav_msgs.msg import Odometry

import json


def callback(msg):
    # read previous data
    print('here')

    with open('distance.json', 'r') as openfile:
        jsonObject = json.load(openfile)
        openfile.close()
    
    # append the current coordinates
    (jsonObject['xCoordinates']).append(msg.pose.pose.position.x)

    # write the updated data into json file
    with open("distance.json", "w") as outfile:
        json.dump(jsonObject, outfile)
        outfile.close()

    time.sleep(.5)

rospy.init_node('global_Subscriber_vel') #change name 
sub=rospy.Subscriber('/mobile_base_controller/odom',Odometry,callback)
rospy.spin()

if __name__ == '__main__':
    jsonObject = {'xCoordinates': []}

    #callback()