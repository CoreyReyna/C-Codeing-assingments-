int number_of_employees()
{
	string line;int count=0;
	ifstream fin;fin.open("employee.dat");
	while(getline(fin, line))
	{
		++count;
	}
	return count;
}


int main()
{
	
	
	
	return 0;
}




	