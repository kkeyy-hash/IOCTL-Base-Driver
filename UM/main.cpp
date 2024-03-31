#include <iostream>
#include "main.h"

using namespace std;

void main() 
{
	if (!mem::find_driver()) {
		cout << "driver -> not loaded" << endl;
	}
  
	mem::process_id = mem::find_process("notepad.exe");
	virtualaddress = mem::find_image();

	cout << "base address -> " << virtualaddress << endl;

	cin.get();
}
