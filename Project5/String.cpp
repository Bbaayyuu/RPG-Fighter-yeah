char* captalise(char* string)
{
string[0] = charupper(string[0]);
int counter = 1;
while (string[counter] != '\0')
{
	if (string[counter - 1] == 32)
	{
		string[counter] = charupper(string[counter]);
	}
	counter++;
}
return string;
}

char charupper()
{

}