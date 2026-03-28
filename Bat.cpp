#include <SFML/Graphics.hpp>
using namespace sf;

class Bat {
  private:
    RectangleShape m_Shape;
    Vector2f       m_Position;
    Vector2f       m_Initial_Position;
    float          m_Speed = 500.0f;

    bool m_MovingLeft  = false;
    bool m_MovingRight = false;

  public:
    Bat(float startX, float startY, int width, int height);
    RectangleShape getShape();
    void           moveLeft();
    void           stopLeft();
    void           moveRight();
    void           stopRight();
    void           update(Time dt,Vector2i resolution);
};