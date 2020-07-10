#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "UNOISEPlugin.h"

void UNOISEPlugin::input(std::string file) {
 inputfile = file;
}

void UNOISEPlugin::run() {}

void UNOISEPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "usearch -unoise3 ";
myCommand += inputfile;
myCommand += " -zotus ";
myCommand += outputfile+".fasta";
myCommand += " -tabbedout ";
myCommand += outputfile+".txt";
std::cout<<myCommand<<std::endl;
 system(myCommand.c_str());
}

PluginProxy<UNOISEPlugin> UNOISEPluginProxy = PluginProxy<UNOISEPlugin>("UNOISE", PluginManager::getInstance());
