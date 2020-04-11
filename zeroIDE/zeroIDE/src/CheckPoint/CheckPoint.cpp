#include "CheckPoint.h"

namespace CheckPoint
{
	CheckPointProject::createCheckPoint(const char *type, std::string path, std::string name, std::string pathComp, std::string typeProj)
	{
		typeFile = type;
		localPath = path;
		nameProject = name;
		pathCompiler = pathComp;
		typeProject = typeProj;


	}

}