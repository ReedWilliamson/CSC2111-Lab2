#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;
//this is a test comment for the mergetool
class WriteFile
{
private:
   ofstream output_file;  
   bool closed;
   
public:
   WriteFile(const char* file_name); //this is the constructor.... Youre welcome
   ~WriteFile();  //destructor
   void writeLine(String* line);
   void close();
   
};


#endif
