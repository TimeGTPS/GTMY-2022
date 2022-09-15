#pragma once
enum RIFT_WINGS_FLAGS {
	WINGS_TIME_DILATION_ON = 2 << 15,

	STYLE1_OPEN_WINGS = 1 << 0,
	STYLE2_OPEN_WINGS = 1 << 1,

	STYLE1_CLOSED_WINGS = 1 << 2,
	STYLE2_CLOSED_WINGS = 1 << 3,

	STYLE1_STAMP_PARTICLE = 1 << 4,
	STYLE2_STAMP_PARTICLE = 1 << 5,

	STYLE1_TRAIL_ON = 1 << 6,
	STYLE2_TRAIL_ON = 1 << 7,

	STYLE1_PORTAL_TRAIL = 1 << 8,
	STYLE2_PORTAL_TRAIL = 1 << 10,

	STYLE1_STARFIELD_TRAIL = 1 << 9,
	STYLE2_STARFIELD_TRAIL = 1 << 11,

	STYLE1_ELECTRICAL_TRAIL = 3 << 8,
	STYLE2_ELECTRICAL_TRAIL = 3 << 10,

	STYLE1_FEATHERS_MATERIAL = 1 << 12,
	STYLE2_FEATHERS_MATERIAL = 1 << 14,

	STYLE1_BLADES_MATERIAL = 1 << 13,
	STYLE2_BLADES_MATERIAL = 1 << 15,

	STYLE1_SCAELS_MATERIAL = 3 << 12,
	STYLE2_SCAELS_MATERIAL = 3 << 14,
};

struct RiftWings
{
	color_t* wings_color1 = new color_t();
	color_t* wings_metal_color1 = new color_t();
	color_t* wings_color2 = new color_t();
	color_t* wings_metal_color2 = new color_t();
	int time = 30;
	int style1_material = STYLE1_FEATHERS_MATERIAL;
	int style2_material = STYLE2_BLADES_MATERIAL;

	int style1_trail = STYLE1_PORTAL_TRAIL;
	int style2_trail = STYLE2_STARFIELD_TRAIL;
	void enableClosed(int style) {
		if (style == 1) {
			if (function[0] == 0)
				function[0] = STYLE1_CLOSED_WINGS;
		}
		else {
			if (function2[0] == 0)
				function2[0] = STYLE2_CLOSED_WINGS;
		}
	}
	void enableTrail(int style) {
		if (style == 1) {
			if (function[1] == 0)
				function[1] = STYLE1_TRAIL_ON;
		}
		else {
			if (function2[1] == 0)
				function2[1] = STYLE2_TRAIL_ON;
		}
	}
	void enableOpenWings(int style) {
		if (style == 1) {
			if (function[2] == 0)
				function[2] = STYLE1_OPEN_WINGS;
		}
		else {
			if (function2[2] == 0)
				function2[2] = STYLE2_OPEN_WINGS;
		}
	}
	void enableStampParticle(int style) {
		if (style == 1) {
			if (function[3] == 0)
				function[3] = STYLE1_STAMP_PARTICLE;
		}
		else {
			if (function2[3] == 0)
				function2[3] = STYLE2_STAMP_PARTICLE;
		}
	}
	void enableDilation() {
		if (function[4] == 0)
			function[4] = WINGS_TIME_DILATION_ON;
	}

	void disableClosed(int style) {
		if (style == 1) {
			if (function[0] == STYLE1_CLOSED_WINGS)
				function[0] = 0;
		}
		else {
			if (function2[0] == STYLE2_CLOSED_WINGS)
				function2[0] = 0;
		}
	}
	void disableTrail(int style) {
		if (style == 1) {
			if (function[1] == STYLE1_TRAIL_ON)
				function[1] = 0;
		}
		else {
			if (function2[1] == STYLE2_TRAIL_ON)
				function2[1] = 0;
		}
	}
	void disableOpenWings(int style) {
		if (style == 1) {
			if (function[2] == STYLE1_OPEN_WINGS)
				function[2] = 0;
		}
		else {
			if (function2[2] == STYLE1_OPEN_WINGS)
				function2[2] = 0;
		}
	}
	void disableStampParticle(int style) {
		if (style == 1) {
			if (function[3] == STYLE1_STAMP_PARTICLE)
				function[3] = 0;
		}
		else {
			if (function2[3] == STYLE2_STAMP_PARTICLE)
				function2[3] = 0;
		}
	}
	void disableDilation() {
		if (function[4] == WINGS_TIME_DILATION_ON)
			function[4] = 0;
	}

	void setMaterial1(RIFT_WINGS_FLAGS flags) {
		style1_material = flags;
	}
	void setMaterial2(RIFT_WINGS_FLAGS flags) {
		style2_material = flags;
	}

	void setTrail1(RIFT_WINGS_FLAGS flags) {
		style1_trail = flags;
	}
	void setTrail2(RIFT_WINGS_FLAGS flags) {
		style2_trail = flags;
	}

	int getFunction1() {
		int result = 81;
		result =
			function[0] +
			function[1] +
			function[2] +
			function[3] +
			function[4] +
			style1_trail;
		return result;
	}
	int getFunction2() {
		int result = 81;
		result =
			function2[0] +
			function2[1] +
			function2[2] +
			function2[3] +
			style2_trail;
		return result;
	}

	int getType() {
		int result = 3067;
		result =
			style1_material +
			style2_material +
			getFunction1() +
			getFunction2();
		return result;
	}

	int getClosed1() {
		if (function[0] == 0) return 0;
		else if (function[0] == STYLE1_CLOSED_WINGS) return 1;
		return 0;
	}
	int getTrail1() {
		if (function[1] == 0) return 0;
		else if (function[1] == STYLE1_TRAIL_ON) return 1;
		return 0;
	}
	int getOpenWings1() {
		if (function[2] == 0) return 0;
		else if (function[2] == STYLE1_OPEN_WINGS) return 1;
		return 0;
	}
	int getStampParricle1() {
		if (function[3] == 0) return 0;
		else if (function[3] == STYLE1_STAMP_PARTICLE) return 1;
		return 0;
	}

	int getClosed2() {
		if (function2[0] == 0) return 0;
		else if (function2[0] == STYLE2_CLOSED_WINGS) return 1;
		return 0;
	}
	int getTrail2() {
		if (function2[1] == 0) return 0;
		else if (function2[1] == STYLE2_TRAIL_ON) return 1;
		return 0;
	}
	int getOpenWings2() {
		if (function2[2] == 0) return 0;
		else if (function2[2] == STYLE2_OPEN_WINGS) return 1;
		return 0;
	}
	int getStampParricle2() {
		if (function2[3] == 0) return 0;
		else if (function2[3] == STYLE2_STAMP_PARTICLE) return 1;
		return 0;
	}

	int getDelay() {
		if (function[4] == 0) return 0;
		else if (function[4] == WINGS_TIME_DILATION_ON) return 1;
		return 0;
	}

private:
	int* function = new int[5]{ 0, 64, 0, 16 , 65536 };
	int* function2 = new int[4]{ 0, 128, 0, 0 };
};

struct color_tt
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

