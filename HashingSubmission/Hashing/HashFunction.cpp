#include "HashFunction.h"
namespace HashFunction 
{
	// implementation of a basic addition hash
	unsigned int badHash(const char* data, unsigned int length) 
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; ++i)
		{
			hash += data[i];
		}
		return hash;
	}

	unsigned int fredHash(const char* data, unsigned int length)
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; ++i)
		{
			hash = hash * 101 + (unsigned int)data[i];
		}
		return hash;
	}
}