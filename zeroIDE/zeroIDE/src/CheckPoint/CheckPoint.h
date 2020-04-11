#pragma once

#include <string>

namespace CheckPoint 
{
	class CheckPointProject
	{
		private:
			const char *typeFile;
			std::string localPath;
			std::string nameProject;
			std::string pathCompiler;
			std::string typeProject;

		public:
			CheckPointProject(const char *type, std::string path, std::string name, std::string pathComp, std::string typeProj);
			~CheckPointProject();
			std::string createCheckPoint();


	};


}