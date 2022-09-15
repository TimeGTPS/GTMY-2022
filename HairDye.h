#pragma once
struct color_ty
{
public:
	void set(const uint8_t& r, const uint8_t& g, const uint8_t& b, const uint8_t& a = 255) {
		m_color[0] = b;
		m_color[1] = g;
		m_color[2] = r;
		m_color[3] = a;
	}
	void set(const uint32_t& col) {
		m_color[0] = (col >> 24) & 0xFF;
		m_color[1] = (col >> 16) & 0xFF;
		m_color[2] = (col >> 8) & 0xFF;
		m_color[3] = (col) & 0xFF;
	}
	uint32_t get_uint() const {
		uint32_t result = 0;
		for (unsigned index = 0; index < sizeof(uint32_t); index++)
			result = (result << 8) + m_color[index];
		return result;
	}
	void set_red(const uint8_t& col) {
		m_color[2] = col;
	}
	void set_green(const uint8_t& col) {
		m_color[1] = col;
	}
	void set_blue(const uint8_t& col) {
		m_color[0] = col;
	}
	void set_alpha(const uint8_t& col) {
		m_color[3] = col;
	}
	uint8_t get_red() {
		return m_color[2];
	}
	uint8_t get_green() {
		return m_color[1];
	}
	uint8_t get_blue() {
		return m_color[0];
	}
	uint8_t get_alpha() {
		return m_color[3];
	}
private:
	uint8_t* m_color = new uint8_t[4]{ 0xFF, 0xFF, 0xFF, 0xFF };
};
