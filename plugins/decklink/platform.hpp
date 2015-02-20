#pragma once

#if defined(_WIN32)
// TODO: Windows support
#elif defined(__APPLE__)
#include "mac/decklink-sdk/DeckLinkAPI.h"
#include <CoreFoundation/CoreFoundation.h>
typedef CFStringRef decklink_string_t;
#elif defined(__linux__)
#include "linux/decklink-sdk/DeckLinkAPI.h"
typedef const char *decklink_string_t;
#endif

#include <util/windows/HRError.hpp>
#include <util/windows/ComPtr.hpp>

#include <string>

bool DeckLinkStringToStdString(decklink_string_t input, std::string& output);
