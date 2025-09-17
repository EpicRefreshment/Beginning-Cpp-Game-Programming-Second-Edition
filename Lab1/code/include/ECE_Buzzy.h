// Include important C++ libraries here
#include <sstream>
#include <SFML/Graphics.hpp>

// Make code easier to type with "using namespace"
using namespace sf;

class ECE_Buzzy: public Sprite
{
public:
    ECE_Buzzy();
    void reset(float startX, float startY);
    bool isActive();
    FloatRect getPosition();
    FloatRect getGlobalBounds();
    void moveLeft(float dx);
    void moveRight(float dx);
    void setInactive();
};