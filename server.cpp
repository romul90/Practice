//This file made for stepik ROS course - service, etc
#include "ros/ros.h"
#include "test/Concate.h"

bool conc(test::Concate::Request  &req,
          test::Concate::Response &res)
{
  res.together = req.first + req.second;
  return true;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "concate_server");
  ros::NodeHandle n;
  
  std::string name = ros::this_node::getName() + "/Concate";
  ros::ServiceServer service = n.advertiseService(name, conc);
  ros::spin();

  return 0;
}
