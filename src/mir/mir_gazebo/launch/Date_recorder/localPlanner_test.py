#! /usr/bin/env python

import rospy
from nav_msgs.msg import Path
from nav_msgs.msg import Odometry
import json


def callback(msg):
    # read previous data
    print('here')

    with open('localPlanner_test.json', 'r') as openfile:
        jsonObject = json.load(openfile)
        openfile.close()
    
    # append the current coordinates
    (jsonObject['xCoordinates']).append(msg.poses[0].pose.position.x)
    (jsonObject['yCoordinates']).append(msg.poses[0].pose.position.y)
    
    # (jsonObject['xCoordinates']).append(msg.pose.pose.position.x)
    # (jsonObject['yCoordinates']).append(msg.pose.pose.position.y)


    # write the updated data into json file
    with open("localPlanner_test.json", "w") as outfile:
        json.dump(jsonObject, outfile)
        outfile.close()
    rate = rospy.Rate(10) # 10hz


rospy.init_node('global_Subscriber') #change name 
sub=rospy.Subscriber('/move_base_node/DWAPlannerROS/local_plan',Path,callback)  # 1_DWA
# sub=rospy.Subscriber('/mir1/move_base_node/DWAPlannerROS/local_plan',Path,callback)  # 2_DWA

# sub=rospy.Subscriber('/mobile_base_controller/odom',Odometry,callback)  # 1_odom
#sub=rospy.Subscriber('/mir1/mobile_base_controller/odom',Odometry,callback)  # 2_odom


#sub=rospy.Subscriber('/move_base_node/TebLocalPlannerROS/local_plan',Path,callback)  #1_TEB
# sub=rospy.Subscriber('/mir1/move_base_node/TebLocalPlannerROS/local_plan',Path,callback)  #2_TEB

rospy.spin()

if __name__ == '__main__':
    jsonObject = {'xCoordinates': [], 'yCoordinates' : []}
    print('here2')
    with open("sample.json", "w") as outfile:
        json.dump(jsonObject, outfile)
        outfile.close()
    callback()
   

