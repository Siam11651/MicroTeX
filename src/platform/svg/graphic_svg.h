#include "config.h"

#if defined(BUILD_SVG) && !defined(MEM_CHECK)

#ifndef GRAPHIC_SVG_H_INCLUDED
#define GRAPHIC_SVG_H_INCLUDED

#include "graphic/graphic.h"

using namespace std;

namespace tex {

class Font_svg : public Font {
private:
public:
  Font_svg(const string& file, float size);

  float getSize() const override;

  sptr<Font> deriveFont(int style) const override;

  bool operator==(const Font& f) const override;

  bool operator!=(const Font& f) const override;

  ~Font_svg() override = default;
};

/**************************************************************************************************/

class TextLayout_svg : public TextLayout {
private:

public:
  TextLayout_svg();

  void getBounds(Rect& r) override;

  void draw(Graphics2D& g2, float x, float y) override;
};

/**************************************************************************************************/

class Graphics2D_svg : public Graphics2D {
private:

public:
  Graphics2D_svg();

  void setColor(color c) override;

  color getColor() const override;

  void setStroke(const Stroke& s) override;

  const Stroke& getStroke() const override;

  void setStrokeWidth(float w) override;

  const Font* getFont() const override;

  void setFont(const Font* font) override;

  void translate(float dx, float dy) override;

  void scale(float sx, float sy) override;

  void rotate(float angle) override;

  void rotate(float angle, float px, float py) override;

  void reset() override;

  float sx() const override;

  float sy() const override;

  void drawChar(wchar_t c, float x, float y) override;

  void drawText(const wstring& t, float x, float y) override;

  void drawLine(float x, float y1, float x2, float y2) override;

  void drawRect(float x, float y, float w, float h) override;

  void fillRect(float x, float y, float w, float h) override;

  void drawRoundRect(float x, float y, float w, float h, float rx, float ry) override;

  void fillRoundRect(float x, float y, float w, float h, float rx, float ry) override;
};

}  // namespace tex

#endif  // GRAPHIC_SVG_H_INCLUDED
#endif  // BUILD_SVG && !MEM_CHECK
