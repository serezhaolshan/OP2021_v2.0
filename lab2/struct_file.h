struct Space {
	char sc[15];
	float percent, apprWeight;
	unsigned long long numberOfStars;
};

#ifndef struct_file
#define struct_file
	void struct_filling(Space* ms);
	void outputting(Space* ms, int size);
	void sorting(Space* ms, int size);
#endif