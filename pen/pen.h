#ifndef pen_h
#define pen_h

class Pen {
std::string pen_name;
public:
Pen(std::string pen_name = "Pen"){
}
std::string getName();
std::string drawLine();
std::string drawCircle();
};

#endif
