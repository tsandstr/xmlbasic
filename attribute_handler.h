#include <string>

using std::string;

struct BadAttributeException : exception {
	const char* what() { return "Bad Attribute"; }

class AttributeHandler {
public:
	virtual void set(string value) = 0;
};

class BooleanAttributeHandler : public AttributeHandler {
public:
	void set(string xml_value);
private:
	bool value;
};
