void function(int a)
{
	int b;			//4 bytes
	int c;			//4 bytes
	int d;			//4 bytes
	char buffer[8];		//8 bytes
				//-------
				//20 bytes
	
	b = 1;
	c = 2;
	d = 3;
}

int main()
{
	function(1);
}
