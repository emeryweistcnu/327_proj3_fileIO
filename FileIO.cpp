/*
 * FileReader.cpp
 *
 *  Created on: Oct 8, 2017
 *      Author: keith
 */
#include <iostream>
#include <fstream>
#include "../327_proj3_test/includes/FileIO.h"
#include "../327_proj3_test/includes/constants.h"

using namespace std;

int KP_FileIO::getFileContents(const std::string &filename, std::string &contents)
{
	ifstream fs(filename);

	if (!fs.is_open())
		return COULD_NOT_OPEN_FILE_TO_READ;

	std::string line;

	while (std::getline(fs, line))
	{
		contents += line;
	}

	return SUCCESS;
}

int KP_FileIO::writeVectortoFile(const std::string filename,std::vector<std::string> &myEntryVector)
{
	ofstream fs(filename);

	if (!fs.is_open())
		return COULD_NOT_OPEN_FILE_TO_READ;

	for (int i = 0; i < myEntryVector.size(); i++)
	{
		fs << myEntryVector[i] << endl;
	}

	return SUCCESS;
}


