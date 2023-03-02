

class rational
{
private:
	int a, b;

public:
	rational();
	rational(int a1, int b1);
	void set(int a1, int b1);
	void show();
	rational operator + (rational r1);
	rational operator - (rational r1);
	rational operator ++ ();
	bool operator == (rational r1);
	bool operator > (rational r1);
	rational operator = (rational r1);

	
};

