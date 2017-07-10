
class StudentProfile
 {
 typedef unsigned int ID;
 typedef unsigned int score;
 	
 	
 	
 	std::string getName() const;
 	void setName(const char* studentName);
 	
 	ID getRegNumber() const;
 	void setRegNumber( ID number );
 	
 	ID getProctorID () const;
 	void setProctorID ( ID id );
 	
 	score getScore( const char* subject_name ) const;
 	void setScore( const char* subject_name, score mScore );
 	
 private:
 	ID reg_number;
 	std::string name;
 	ID proctor_id;	
 	std::map<string,score> scores;
 };
 
 
