#ifndef POOL_HPP
# define POOL_HPP

class Pool{
	private:

	public:
		pool();
		pool (const Data_Buffer &src);
		pool (std::string _name);
		~pool();	
		Pool&	operator=(const Pool &src);
	
        void resize(const size_t& numberOfObjectStored)
		
};

class Object: public Pool
{
	private:

	public:
		data_Buffer();
		data_Buffer (const Data_Buffer &src);
		data_Buffer (std::string _name);
		~data_Buffer();	
		Data_Buffer&	operator=(const Data_Buffer &src);
    
		
};


#endif