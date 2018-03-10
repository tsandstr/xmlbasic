#include "attribute_handler.h"

void BooleanAttributeHandler::set(const string& xml_value) {
	if(xml_value.compare("true"))
		value = true;
	else if(xml_value.compare("false"))
		value = false;
	else
		throw BadAttributeException{}
	return;
