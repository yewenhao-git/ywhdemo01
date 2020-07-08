#include <iostream>
#include "ros/ros.h"
#include <QtWidgets>
#include <QApplication>
using namespace std;

int main(int argc,char *argv[]){
    string nodeName = "qt_turtle_ctrl";
    ros::init(argc,argv,nodeName);
    ros::NodeHandle node;

    return 0;
}