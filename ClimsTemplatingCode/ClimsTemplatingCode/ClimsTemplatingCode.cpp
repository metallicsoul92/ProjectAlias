// ClimsTemplatingCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

enum types { STRUCT, ENUM };



typedef struct dataType
{
	string tn;
	string sec;
	string Variables;
} datatype;

class CCode
{
	string fileName;
	vector<datatype>  types;
	vector<string> funcs;
	vector<string> implement;
	ofstream header;
	ofstream implementation;

public:
	void createTemplate(string name)
	{
		string h = name;
		h.append(".h");
		string cp = name;
		cp.append(".cpp");
		header.open(h);
		header << "#include " << name << "_H_" << endl << "\t";
		implementation.open(cp);
		implementation << "#include \" "<< name << ".h\"" << endl << "\t";
	}
};

string DTtoString(datatype *d)
{
	string temp;
	temp.append(d->sec);
	temp.append(" ");
	temp.append(d->tn);
	temp.append("\n\t");
	temp.append(d->Variables);
	temp.append("\n\t};");
	return temp;
}

void addVariables(dataType *d, string v)
{
	d->Variables.append(v);
};

void addDataType(string dT, string *refer, types ty){
	switch (ty){
	case STRUCT:
		refer->append("typedef struct ");
		break;
	case ENUM:
		refer->append("typedef enum ");
		break;
	}
	refer->append(dT);
	refer->append("{\n\t");
}
//
// Will be use as such : addVariablesToDataType("int age", &reference)
void addVariablesToDataType(string variable, string *datatype){
	datatype->append(variable);
	datatype->append(";\n\t");
}

void completeType(string *datatype)
{
	datatype->append("\n\t};");
}

int main()
{
	string data;
	dataType test;
	addDataType("test", &test.tn, STRUCT);
	addVariablesToDataType("int testing",&test.Variables);
	addVariablesToDataType("bool another", &test.Variables);

	CCode c;
	c.createTemplate("Test");

	cout << DTtoString(&test);
	cin.get();
	//    FILE codeFile;
	string fileName;
	vector<string> dataTypes;
	vector<string> functions;

	return 0;
}

