#ifndef DATA_BUFFER_HPP
# define DATA_BUFFER_HPP
# include <iostream>

class Data_Buffer{
	private:

	public:
		data_Buffer();
		data_Buffer (const Data_Buffer &src);
		data_Buffer (std::string _name);
		~data_Buffer();	
		Data_Buffer&	operator=(const Data_Buffer &src);
	
		
};


#endif