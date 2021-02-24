struct Space {
	char sc[str_sz];
	float percent, apprWeight;
	unsigned long long numberOfStars;
};

#ifndef struct_file
#define struct_file
	void keyboard_filling(Space* ms);
	void outputting(Space* ms, int size);
	void sorting(Space* ms, int size);
#endif