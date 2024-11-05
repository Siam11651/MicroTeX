#include "config.h"

#if defined(BUILD_SVG) && !defined(MEM_CHECK)

#include "platform/svg/graphic_svg.h"

#include <utility>

using namespace tex;
using namespace std;

Font_svg::Font_svg(const string& file, float size) {}

float Font_svg::getSize() const {
  return 0;
}

sptr<Font> Font_svg::deriveFont(int style) const {
  return nullptr;
}

bool Font_svg::operator==(const Font& ft) const {
  return false;
}

bool Font_svg::operator!=(const Font& f) const {
  return true;
}

Font* Font::create(const string& file, float size) {
  return new Font_svg(file, size);
}

sptr<Font> Font::_create(const string& name, int style, float size) {
  return nullptr;
}

/**************************************************************************************************/

TextLayout_svg::TextLayout_svg() {
  
}

void TextLayout_svg::getBounds(Rect& r) {
  
}

void TextLayout_svg::draw(Graphics2D& g2, float x, float y) {
  
}

sptr<TextLayout> TextLayout::create(const wstring& src, const sptr<Font>& font) {
  return nullptr;
}

/**************************************************************************************************/

Graphics2D_svg::Graphics2D_svg() {
  
}

void Graphics2D_svg::setColor(color c) {
  
}

color Graphics2D_svg::getColor() const {
  return 0;
}

void Graphics2D_svg::setStroke(const Stroke& s) {
  
}

const Stroke& Graphics2D_svg::getStroke() const {
  return Stroke();
}

void Graphics2D_svg::setStrokeWidth(float w) {
  
}

const Font* Graphics2D_svg::getFont() const {
  return nullptr;
}

void Graphics2D_svg::setFont(const Font* font) {
  
}

void Graphics2D_svg::translate(float dx, float dy) {
  
}

void Graphics2D_svg::scale(float sx, float sy) {
  
}

void Graphics2D_svg::rotate(float angle) {
  
}

void Graphics2D_svg::rotate(float angle, float px, float py) {
  
}

void Graphics2D_svg::reset() {
  
}

float Graphics2D_svg::sx() const {
  return 0.0f;
}

float Graphics2D_svg::sy() const {
  return 0.0f;
}

void Graphics2D_svg::drawChar(wchar_t c, float x, float y) {
  
}

void Graphics2D_svg::drawText(const wstring& t, float x, float y) {
  
}

void Graphics2D_svg::drawLine(float x1, float y1, float x2, float y2) {
  
}

void Graphics2D_svg::drawRect(float x, float y, float w, float h) {
  
}

void Graphics2D_svg::fillRect(float x, float y, float w, float h) {
  
}

void Graphics2D_svg::drawRoundRect(float x, float y, float w, float h, float rx, float ry) {
  
}

void Graphics2D_svg::fillRoundRect(float x, float y, float w, float h, float rx, float ry) {
  
}

#endif
