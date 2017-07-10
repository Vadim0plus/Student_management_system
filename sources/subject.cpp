class subject
{
	typedef unsigned int score;
	
	void setName( std::string name );
	std::string getName() const;
	
	void setScore( score scr );
	score getScore() const;
	
private:
	string m_name;
	score m_score;
}
