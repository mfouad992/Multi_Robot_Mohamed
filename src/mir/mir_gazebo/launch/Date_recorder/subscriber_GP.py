#! /usr/bin/env python

import rospy
from nav_msgs.msg import Path
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
import json


def callback(msg):
    # read previous data
    print('here')

    with open('sample.json', 'r') as openfile:
        jsonObject = json.load(openfile)
        openfile.close()
    
    # append the current coordinates
    (jsonObject['xCoordinates']).append(msg.pose.pose.position.x)
    (jsonObject['yCoordinates']).append(msg.pose.pose.position.y)
    
    # write the updated data into json file
    with open("sample.json", "w") as outfile:
        json.dump(jsonObject, outfile)
        outfile.close()


rospy.init_node('global_Subscriber_odom') #change name 
sub=rospy.Subscriber('/mobile_base_controller/odom',Odometry,callback)  #
rospy.spin()

if __name__ == '__main__':
    jsonObject = {'xCoordinates': [], 'yCoordinates' : []}
    print('here2')
    with open("sample.json", "w") as outfile:
        json.dump(jsonObject, outfile)
        outfile.close()
    callback()
   