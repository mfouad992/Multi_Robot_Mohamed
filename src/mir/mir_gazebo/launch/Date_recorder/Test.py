#! /usr/bin/env python

import rospy
from nav_msgs.msg import Odometry
import json
from nav_msgs.msg import Path
import math
sum = 0 
def callback(msg): 

    # read previous data
    print('here')
    
    with open('sample.json', 'r') as openfile:
        jsonObject = json.load(openfile)
        openfile.close()
    
    # append the current coordinates
    x[0]= msg.poses[0].pose.position.x
    y[0]= msg.poses[0].pose.position.y

    sum= math.sqrt (x[0]**2)
    
    (jsonObject['xCoordinates']).append(sum)

    #(jsonObject['xCoordinates']).append(msg.poses[0].pose.position.x)
    # (jsonObject['yCoordinates']).append(msg.poses[0].pose.position.y)
    
    # write the updated data into json file
    with open("sample.json", "w") as outfile:
        json.dump(jsonObject, outfile)
        outfile.close()


rospy.init_node('global_Subscriber_odom') #change name

sub=rospy.Subscriber('/move_base_node/DWAPlannerROS/local_plan',Path,callback)  # 1_DWA
#sub=rospy.Subscriber('/move_base_node/TebLocalPlannerROS/local_plan',Path,callback)  #1_TEB 

#sub=rospy.Subscriber('/mobile_base_controller/odom',Odometry,callback)  #
rospy.spin()

if __name__ == '__main__':
    jsonObject = {'xCoordinates': [], 'yCoordinates' : []}
    callback()
