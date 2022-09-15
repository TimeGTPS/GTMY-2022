#pragma once

enum RIFT_CAPE_FLAGS {
	TIME_DILATION_ON = 1 << 12,

	STYLE1_COLLAR_ON = 1 << 0,
	STYLE2_COLLAR_ON = 1 << 1,

	STYLE1_CLOSED_CAPE = 1 << 2,
	STYLE2_CLOSED_CAPE = 1 << 3,

	STYLE1_OPEN_CAPE_ON_MOVEMENT = 1 << 4,
	STYLE2_OPEN_CAPE_ON_MOVEMENT = 1 << 5,

	STYLE1_AURA_ON = 1 << 6,
	STYLE2_AURA_ON = 1 << 7,

	STYLE1_PORTAL = 1 << 8,
	STYLE2_PORTAL = 1 << 10,

	STYLE1_STARFIELD = 1 << 9,
	STYLE2_STARFIELD = 1 << 11,

	STYLE1_ELECTRICAL = 3 << 8,
	STYLE2_ELECTRICAL = 3 << 10,
};

struct color_t
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


struct RiftCape
{
	color_t* cape_color1 = new color_t();
	color_t* cape_collar_color1 = new color_t();
	color_t* cape_color2 = new color_t();
	color_t* cape_collar_color2 = new color_t();

	int time = 30;
	int style1_aura = 768;
	int style2_aura = 2048;
	void enableClosed(int style) {
		if (style == 1) {
			if (function[0] == 0)
				function[0] = STYLE1_CLOSED_CAPE;
		}
		else {
			if (function2[0] == 0)
				function2[0] = STYLE2_CLOSED_CAPE;
		}
	}
	void enableAura(int style) {
		if (style == 1) {
			if (function[1] == 0)
				function[1] = STYLE1_AURA_ON;
		}
		else {
			if (function2[1] == 0)
				function2[1] = STYLE2_AURA_ON;
		}
	}
	void enableCollar(int style) {
		if (style == 1) {
			if (function[2] == 0)
				function[2] = STYLE1_COLLAR_ON;
		}
		else {
			if (function2[2] == 0)
				function2[2] = STYLE2_COLLAR_ON;
		}
	}
	void enableMovement(int style) {
		if (style == 1) {
			if (function[3] == 0)
				function[3] = STYLE1_OPEN_CAPE_ON_MOVEMENT;
		}
		else {
			if (function2[3] == 0)
				function2[3] = STYLE2_OPEN_CAPE_ON_MOVEMENT;
		}
	}
	void enableDilation() {
		if (function[4] == 0)
			function[4] = TIME_DILATION_ON;
	}

	void disableClosed(int style) {
		if (style == 1) {
			if (function[0] == STYLE1_CLOSED_CAPE)
				function[0] = 0;
		}
		else {
			if (function2[0] == STYLE2_CLOSED_CAPE)
				function2[0] = 0;
		}
	}
	void disableAura(int style) {
		if (style == 1) {
			if (function[1] == STYLE1_AURA_ON)
				function[1] = 0;
		}
		else {
			if (function2[1] == STYLE2_AURA_ON)
				function2[1] = 0;
		}
	}
	void disableCollar(int style) {
		if (style == 1) {
			if (function[2] == STYLE1_COLLAR_ON)
				function[2] = 0;
		}
		else {
			if (function2[2] == STYLE2_COLLAR_ON)
				function2[2] = 0;
		}
	}
	void disableMovement(int style) {
		if (style == 1) {
			if (function[3] == STYLE1_OPEN_CAPE_ON_MOVEMENT)
				function[3] = 0;
		}
		else {
			if (function2[3] == STYLE2_OPEN_CAPE_ON_MOVEMENT)
				function2[3] = 0;
		}
	}
	void disableDilation() {
		if (function[4] == TIME_DILATION_ON)
			function[4] = 0;
	}

	void setAura1(RIFT_CAPE_FLAGS flags) {
		style1_aura = flags;
	}
	void setAura2(RIFT_CAPE_FLAGS flags) {
		style2_aura = flags;
	}

	int getFunction1() {
		int result = 81;
		result =
			function[0] +
			function[1] +
			function[2] +
			function[3] +
			function[4];
		return result;
	}
	int getFunction2() {
		int result = 81;
		result =
			function2[0] +
			function2[1] +
			function2[2] +
			function2[3];
		return result;
	}

	int getType() {
		int result = 3067;
		result =
			style1_aura +
			style2_aura +
			getFunction1() +
			getFunction2();
		return result;
	}

	int getClosed1() {
		if (function[0] == 0) return 0;
		else if (function[0] == STYLE1_CLOSED_CAPE) return 1;
		return 0;
	}
	int getAura1() {
		if (function[1] == 0) return 0;
		else if (function[1] == STYLE1_AURA_ON) return 1;
		return 0;
	}
	int getCollar1() {
		if (function[2] == 0) return 0;
		else if (function[2] == STYLE1_COLLAR_ON) return 1;
		return 0;
	}
	int getMovement1() {
		if (function[3] == 0) return 0;
		else if (function[3] == STYLE1_OPEN_CAPE_ON_MOVEMENT) return 1;
		return 0;
	}

	int getClosed2() {
		if (function2[0] == 0) return 0;
		else if (function2[0] == STYLE2_CLOSED_CAPE) return 1;
		return 0;
	}
	int getAura2() {
		if (function2[1] == 0) return 0;
		else if (function2[1] == STYLE2_AURA_ON) return 1;
		return 0;
	}
	int getCollar2() {
		if (function2[2] == 0) return 0;
		else if (function2[2] == STYLE2_COLLAR_ON) return 1;
		return 0;
	}
	int getMovement2() {
		if (function2[3] == 0) return 0;
		else if (function2[3] == STYLE2_OPEN_CAPE_ON_MOVEMENT) return 1;
		return 0;
	}

	int getDelay() {
		if (function[4] == 0) return 0;
		else if (function[4] == TIME_DILATION_ON) return 1;
		return 0;
	}

private:
	int* function = new int[5]{ 0, 64, 1, 16 , 0 };
	int* function2 = new int[4]{ 8, 128, 2, 32 };
};
