#pragma once

template <typename T>
class Vector
{
public:
	Vector() //constructor
	{
		//allocate room for 2 elements
		ReAlloc(2);
	}

	void pushback(const T& value) //pushing elements into the vector
	{
		//checking to see if our vector is at capacity or above 
		if(m_Size >= m_Capacity)


		if(m_Size>=m_Capacity)
		m_Data[m_Size++] = value;
	}

private:
	void ReAlloc(size_t newCapacity)
	{
		//1. allocate a new block of memory
		//2. copy/move the elements to the new block of memory
		//3. delete the old block of memory

		T* newBlock = new T[newCapacity];

		//directly change the size of our vector when we're downsizing 
		if (newCapacity < m_Size)
			m_Size = newCapacity;

		for (size_t i = 0; i < m_Size; i++)
			newBlock[i] = m_Data[i];

		delete[] m_Data;
		m_Data = newBlock;
		m_Capacity = newCapacity;
	}


	T* m_Data = nullptr; //vector stores a pointer to whatever our type is 

	size_t m_Size = 0; //keeps track of the number of variables we have 
	size_t m_caapcity = 0; //keeps track of how many element worth of memory have we allocated
	//this isn't the  number of elements but the number of elements we can store in the current allocation


};
