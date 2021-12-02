#! /usr/bin/env python

import rospy
from nav_msgs.msg import Odometry
import json
from nav_msgs.msg import Path
import math
import time 

initial_time = -1


def callback(msg): 
    # read previous data
    print('here')
    
    with open('pose_with_time.json', 'r') as openfile:
        jsonObject = json.load(openfile)
        openfile.close()

    print(time.time())

    (jsonObject['distance']).append(math.sqrt(((msg.poses[0].pose.position.x)**2)+((msg.poses[0].pose.position.y)**2)))
    
    # (jsonObject['yCoordinates']).append(msg.poses[0].pose.position.y)
    
    global initial_time

    if initial_time == -1:
        (jsonObject['time']).append(0)
        initial_time = time.time()
   
    else:
        (jsonObject['time']).append(time.time() - initial_time)

    # write the updated data into json file

    with open("pose_with_time.json", "w") as outfile:
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



    # append the current coordinates
    # x_1[0]= msg.poses[0].pose.position.x
    # y_1[0]= msg.poses[0].pose.position.y

    # sum= math.sqrt ((x_1[0])**2)+(y_1[0])**2))
    
    # (jsonObject['xCoordinates']).append(sum)