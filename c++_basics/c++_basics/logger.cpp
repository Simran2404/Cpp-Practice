#include <iostream>

class Log
{
private:
	int m_LogLevel; //the m convention tells me that this is a class member variable which is private 
public:
	void SetLevel(int level)
	{
		m_LogLevel = level;
	}

	void Warn(const char* message)
	{

	}
};

int main()
{
	Log log; //instantiate the log class 

	//because we intend to only see warnings on screen
	log.SetLevel(LogLevelWarning);
	log.Warn("Hello!");
	std::cin.get();
}
