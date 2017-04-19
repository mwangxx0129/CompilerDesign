#ifndef _SYMTABRECORD_H_
#define	_SYMTABRECORD_H_
#include <string>

const int IDMAXLENGTH = 256;
const int IDLENGTH = 8;

struct SymTabRecord
{
	char name[IDMAXLENGTH];
	int scope;
	char type;
	int location;
	int isVar;  
};

SymTabRecord  getSymTabRecord(char *name, int scope, char type, int location, int isVar);
std::string toString(SymTabRecord *recPtr);

#endif 
