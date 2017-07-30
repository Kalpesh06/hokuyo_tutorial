#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sensor_msgs/LaserScan.msg"

void chatterCallback(const std_msgs::String::ConstPtr& msg)
{
  ROS_INFO("Could detect the laser: [%s]", msg->data.c_str());
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("chatter", 1000, chatterCallback);
  ros::spin();

  return 0;
}








