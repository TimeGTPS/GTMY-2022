#pragma once
#include "RiftCape.h"
#include "RiftWings.h"
#include "HairDye.h"
#include "Bandoiler.h"
struct Items {
	uint16_t id = 0, count = 0;
};
struct Friends {
	string name = "";
	bool mute = false, block_trade = false;
	long long last_seen = 0;
};
struct PlayMods {
	int id = 0;
	long long time = 0;
	string user = "";
};
struct Player {
	int banner_id = 0;
	int banner_type = 0;
	int banner_item = 0;
	color_t* HairColor = new color_t();
	color_t* EyeColor = new color_t();
	RiftWings m_riftwings;
	RiftCape m_riftcape;
	string ip = "", lo = ""; //real ip 
	vector<string> last_visited_worlds{}, worlds_owned{};
	vector<map<int, int>> trade_items{};
	string name_color = "`0";
	int id = 0, netID = 0, state = 0, trading_with = -1;
	bool trade_accept = false, accept_the_offer = false;
	int x = -1, y = -1;
	int gems = 0;
	long long int xp = 0;
	bool usedmegaphone = 0;
	map<int, int> ac_{};
	bool hit1 = false;
	int skin = 0x8295C3FF;
	int punched = 0;
	bool b_logs = false;
	int enter_game = 0;
	int lock = 0;
	int flagmay = 256;
	int lockeitem = 0;
	bool ghost = false, invis = false;
	int n = 0; //newbie passed save
	string note = "";
	int supp = 0, hs = 0;
	int mod = 0, dev = 0, m_h = 0;
	int wls = 0;
	int csn = -1;
	long long int b_t = 0, b_s = 0; // ban seconds
	long long int c_t = 0, c_s = 0; // curse seconds
	int last_infected = 0;
	string b_r = "", b_b = ""; // ban reason or banned by
	string c_r = "", c_b = ""; // curse reason or curse by
	string m_r = "", m_b = "";
	int hair = 0, shirt = 0, pants = 0, feet = 0, face = 0, hand = 0, back = 0, mask = 0, necklace = 0, ances = 0; /*clothes*/
	string tankIDName = "", tankIDPass = "", requestedName = "", gameversion = "", world = "", email = "", country = "", home_world = "", c_world = "HELL", last_wrenched = "";
	string d_name = "";
	int battle_pet = 0;
	vector<Items> inv{};
	vector<Friends> friends{};
	vector<int> last_friends_selection{};
	vector<string> pending_friends{};
	vector<string> bans{}, logs{}, trade_logs{};
	vector<string> curse{}, clogs{};
	string last_edit = "";

	int i_11818_1 = 0, i_11818_2 = 0;
	int8_t random_fossil = rand() % 3 + 4;

	int opc = 0;
	int cc = 0;
	bool bb = false;
	int vip = 0, rb = 0;
	int gp = 0, gd = 0, glo = 0;
	int w_w = 0, w_d = 0;
	int mds = 0;
	int offergems = 0;
	int confirm_reset = 0;
	bool show_location_ = true, show_friend_notifications_ = true;
	int level = 1, firesputout = 0, carnivalgameswon = 0;
	long long playtime = 0;
	long long int account_created = 0, seconds = 0;
	string rid = "", mac = "", meta = "", vid = "", platformid = "", wk = "";
	map<string, int> achievements{};
	string lastmsg = "", lastmsgworld = "";
	int gtwl = 0;
	int c_x = 0, c_y = 0;
	int lavaeffect = 0;
	//cooldowns
	long long int i240 = 0, i756 = 0, i758 = 0;
	bool tmod = 0;
	//billboard
	int b_i = 0, b_a = 0, b_w = 0, b_p = 0;
	//
	int same_input = 0, not_same = 0;
	string last_input_text = "";
	long long int last_inf = 0, last_text_input = 0, last_spam_detection = 0, last_consumable = 0, last_world_enter = 0, last_kickall = 0, last_fish_catch = 0, respawn_time = 0, hand_torch = 0, punch_time = 0, lava_time = 0, world_time = 0, geiger_time = 0, valentine_time = 0, remind_time = 0, warp_time = 0, name_time = 0, address_change = 0;
	int dds = 0;
	int hack_ = 0;
	bool cancel_enter = false;
	int lastwrenchx = 0, lastwrenchy = 0, lastwrenchb = 0, lastchoosenitem = 0, lastchoosennr = 0;
	bool invalid_data = false;
	int pps = 0;
	long long lpps = 0;
	long long int punch_count = 0;
	int received = 0;
	int geiger_ = 0;
	int fishing_used = 0, f_x = 0, f_y = 0, move_warning = 0, f_xy = 0, punch_warning = 0, fish_seconds = 0;
	vector<int> glo_p, lvl_p;
	int geiger_x = -1, geiger_y = -1;
	int t_xp = 0, bb_xp = 0, g_xp = 0, p_xp = 0, t_lvl = 0, bb_lvl = 0, g_lvl = 0, p_lvl = 0, ff_xp = 0, ff_lvl = 0, s_lvl = 0, s_xp = 0;
	vector<int> t_p, bb_p, p_p, g_p, ff_p, surg_p;
	bool saved_on_close = false;
	int booty_broken = 0;
	int dd = 0;
	vector<PlayMods> playmods{};
	int b_l = 1;
	vector<pair<int, int>> bp;
	int choosenitem = 0;
	int promo = 0, flagset = 0;
	int radio = 0;
	int tk = 0;
	int b_ra = 0, b_lvl = 1;
	int magnetron_id = 0;
	int magnetron_x = 0;
	int magnetron_y = 0;
	vector<string> gr;
	long long int save_time = 0;
	vector<vector<long long>> completed_blarneys{
		{1, 0},
		{2, 0},
		{3, 0},
		{4, 0},
		{5, 0},
		{6, 0},
		{7, 0},
		{8, 0},
		{9, 0},
	};
	bool block_trade = false;
	int p_x = 0;
	int p_y = 0;
	int guild_id = 0;
	uint32_t pending_guild = 0;
	bool legend = false;
	bool is_legend = false;
	bool is_g4g = false;
	bool is_mentor = false;
	int pps2 = 0;
	long long lpps2 = 0;
	int pps23 = 0;
	long long lpps23 = 0;
	int superdev = 0;
	int roleIcon = 6;
	int roleSkin = 6;



	vector<int> available_surg_items;
	// Stats variables
	bool sounded = false;
	bool labworked = false;
	bool fixed = false;
	bool fixable = false;
	bool flu = false;
	int pulse = 40;
	int site = 0;
	int sleep = 0;
	int dirt = 0;
	int broken = 0;
	int shattered = 0;
	int incisions = 0;
	int bleeding = 0;
	int incneeded = 0;
	int heart = 0;
	double temp = 98.6;
	double fever = 0.0;
	string pretext = "";
	string fixtext = "";
	string postext = "";
	string scantext = "";
	string tooltext = "The patient is prepped for surgery.";
	string endtext = "";
	int failchance = 0;
	bool s = true;
	bool antibs = false;

	int spongUsed = 0;
	int scalpUsed = 0;
	int stitcUsed = 0;
	int antibUsed = 0;
	int antisUsed = 0;
	int ultraUsed = 0;
	int labkiUsed = 0;
	int anestUsed = 0;
	int defibUsed = 0;
	int splinUsed = 0;
	int pinsUsed = 0;
	int clampUsed = 0;
	int transUsed = 0;

	int surgery_skill = 0;
	int surgery_done = 0;
	int su_8552_1 = 0;
	int su_8552_2 = 0;
	bool surgery_started = false;
	int started_type = 0;
	string surgery_world = "";
	string surged_person = "";
	string surged_display = "";
	int surgery_type = -1;
	string surgery_name = "";
	bool hospital_bed = false;
	int egg = 0;
	long long int lastexit = 0;
	int warnexit = 0;
	bool mercy = false;
	bool drtitle = false;
	bool g4g = false;
	bool mentor = false;
	bool drt = false;
	bool on = false;
	bool busy = false;
	bool away = false;
	bool lvl125 = false;
	bool donor = false;
	bool spotlight = false;
	bool master = false;


	int choose_fg = 0;
	int choose_bg = 0;
	int grow4good_day = 0;
	int grow4good_rarity = 0;
	int grow4good_total_rarity = 0;
	int grow4good_wl = 0;
	int grow4good_total_wl = 0;
	bool grow4good_donate_gems = false;
	int grow4good_gems = 0;
	bool grow4good_purchase_waving = false;
	int grow4good_surgery = 0;
	int grow4good_fish = 0;
	int grow4good_points = 0;
	int grow4good_claim_prize = 0;
	int grow4good_claimed_prize = 0;
	int grow4good_break = 0;
	int grow4good_place = 0;
	int grow4good_trade = 0;
	int grow4good_sb = 0;
    int donate_count = 0;
	
	int pinata_day = 0;
	bool pinata_prize = false;
	bool pinata_claimed = false;
	int achievement_total = 0;
};
#define pInfo(peer) ((Player*)(peer->data))
struct PlayerMoving {
	int32_t netID, effect_flags_check;
	int packetType, characterState, plantingTree, punchX, punchY, secondnetID;
	float x, y, XSpeed, YSpeed;
	uint8_t objtype;
	uint8_t count1;
	uint8_t count2;
	int32_t int_dat{};
};
struct FishMoving {
	int8_t packetType = 31, stopped_fishing;
	int32_t netID, x, y;
};
class PlayerDB {
public:
	static string getProperName(string name);
};
inline string PlayerDB::getProperName(string name) {
	string ret = "", ret2 = "", newS = "";
	try {
		for (auto c : name) newS += (c >= 'A' && c <= 'Z') ? c - ('A' - 'a') : c;
		for (auto i = 0; i < newS.length(); i++) {
			if (newS.at(i) == '`') i++;
			else ret += newS.at(i);
		}
		for (auto c : ret) if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) ret2 += c;
	}
	catch (const std::out_of_range& e) {
		std::cout << e.what() << std::endl;
	}
	return ret2;
}

BYTE* packPlayerMoving(PlayerMoving* dataStruct, int size_ = 56) {
	BYTE* data = new BYTE[size_];
	memset(data, 0, size_);
	memcpy(data + 0, &dataStruct->packetType, 4);
	memcpy(data + 1, &dataStruct->objtype, 4);
	memcpy(data + 2, &dataStruct->count1, 4);
	memcpy(data + 3, &dataStruct->count2, 4);
	memcpy(data + 4, &dataStruct->netID, 4);
	memcpy(data + 8, &dataStruct->int_dat, 4);
	memcpy(data + 12, &dataStruct->characterState, 4);
	memcpy(data + 20, &dataStruct->plantingTree, 4);
	memcpy(data + 24, &dataStruct->x, 4);
	memcpy(data + 28, &dataStruct->y, 4);
	memcpy(data + 32, &dataStruct->XSpeed, 4);
	memcpy(data + 36, &dataStruct->YSpeed, 4);
	memcpy(data + 44, &dataStruct->punchX, 4);
	memcpy(data + 48, &dataStruct->punchY, 4);
	return data;
}
BYTE* packFishMoving(FishMoving* dataStruct, int size_ = 56) {
	BYTE* data = new BYTE[size_];
	memset(data, 0, size_);
	memcpy(data + 0, &dataStruct->packetType, 4);
	memcpy(data + 3, &dataStruct->stopped_fishing, 4);
	memcpy(data + 4, &dataStruct->netID, 4);
	memcpy(data + 44, &dataStruct->x, 4);
	memcpy(data + 48, &dataStruct->y, 4);
	return data;
}
void send_raw(ENetPeer* peer, int a1, void* packetData, int packetDataSize, int packetFlag) {
	ENetPacket* p;
	if (peer) {
		if (a1 == 4 && *((BYTE*)packetData + 12) & 8) {
			p = enet_packet_create(0, packetDataSize + *((DWORD*)packetData + 13) + 5, packetFlag);
			int four = 4;
			memcpy(p->data, &four, 4);
			memcpy((char*)p->data + 4, packetData, packetDataSize);
			memcpy((char*)p->data + packetDataSize + 4, 0, *((DWORD*)packetData + 13));
		}
		else {
			p = enet_packet_create(0, packetDataSize + 5, packetFlag);
			memcpy(p->data, &a1, 4);
			memcpy((char*)p->data + 4, packetData, packetDataSize);
		}
		enet_peer_send(peer, 0, p);
	}
}
inline std::string currentDateTime()
{
	auto now = time(nullptr);
	struct tm tstruct;
	char buf[80];
	// ReSharper disable once CppDeprecatedEntity
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%d.%m.%Y %R", &tstruct);
	return buf;
}
inline std::string currentTime()
{
	auto now = time(nullptr);
	struct tm tstruct;
	char buf[80];
	// ReSharper disable once CppDeprecatedEntity
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%R", &tstruct);
	return buf;
}
void send_inventory(ENetPeer* peer) {
	const int inv_size = (int)pInfo(peer)->inv.size(), packetLen = 66 + (inv_size * 4) + 4;
	BYTE* d_ = new BYTE[packetLen];
	int MessageType = 0x4, PacketType = 0x9, NetID = -1, CharState = 0x8;
	memset(d_, 0, packetLen);
	memcpy(d_, &MessageType, 1);
	memcpy(d_ + 4, &PacketType, 4);
	memcpy(d_ + 8, &NetID, 4);
	memcpy(d_ + 16, &CharState, 4);
	int endianInvVal = _byteswap_ulong(inv_size);
	memcpy(d_ + 66 - 4, &endianInvVal, 4);
	endianInvVal = _byteswap_ulong(inv_size - 1);
	memcpy(d_ + 66 - 8, &endianInvVal, 4);
	vector<vector<uint32_t>> send_later{}; // fix mod items invis
	int val = 0;
	for (int i_ = 0; i_ < inv_size; i_++) {
		uint16_t item_id = pInfo(peer)->inv[i_].id;
		uint16_t item_count = pInfo(peer)->inv[i_].count;
		if (items[item_id].properties & Property_Mod || item_id == 7782 || item_id == 9500 || item_id == 9490 || item_id == 9492 || item_id == 9490 || item_id == 9492 || item_id == 9516 || item_id == 9540) {
			send_later.push_back({ item_id, item_count });
		}
		else {
			int val = 0;
			val |= item_id; // cia id
			val |= item_count << 16; // cia count 
			val &= 0x00FFFFFF;
			val |= 0x00 << 24;
			memcpy(d_ + (i_ * 4) + 66, &val, 4);
		}
	}
	ENetPacket* const p_ = enet_packet_create(d_, packetLen, ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, p_);
	delete[] d_;
	for (vector<uint32_t> a_ : send_later) {
		uint32_t item_id = a_[0];
		uint32_t item_count = a_[1];
		if (item_id == 0 or item_count == 0) continue;
		PlayerMoving data_{};
		data_.packetType = 13, data_.plantingTree = item_id;
		BYTE* raw = packPlayerMoving(&data_);
		raw[3] = item_count;
		send_raw(peer, 4, raw, 56, ENET_PACKET_FLAG_RELIABLE);
		delete[]raw;
	}
}