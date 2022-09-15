#pragma once
#include "Player.h"
#define pInfo(peer) ((Player*)(peer->data))
class bandolier_pattern {
public:
    enum : uint8_t {
        HARLEQUIN,
        SLANT,
        STRIPE,
        PANEL,
        CROSS
    };
    static std::pair<std::string, uint32_t> get_pattern_as_display(const uint8_t& pattern) {
        switch (pattern) {
        case HARLEQUIN:
            return { "Harlequin", (uint32_t)5918 };
        case SLANT:
            return { "Slant", (uint32_t)5844 };
        case STRIPE:
            return { "Stripe",  (uint32_t)5848 };
        case PANEL:
            return { "Panel", (uint32_t)5846 };
        case CROSS:
            return { "Cross", (uint32_t)5842 };
        default:
            return { "None", (uint32_t)0 };
        }
    }
};


