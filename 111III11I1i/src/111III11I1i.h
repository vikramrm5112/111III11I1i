#ifndef H_111III11I1I
#define H_111III11I1I
#include <vector>
#include <map>
#include <functional>
#if defined(__has_include)
#  if __has_include(<Arduino.h>)
#    include <Arduino.h>
#  else
int analogRead(unsigned char pin);
void digitalWrite(unsigned char pin, unsigned char value);
#  endif
#else
#  include <Arduino.h>
#endif

typedef int l11111111;
typedef void l11l11l11;
typedef double l1ll1ll1l;
typedef long l1l1l1l1l;
typedef bool lll111lll;

template <typename l1I>
using l11lll11l = std::vector<l1I>;

template <typename l1I, typename l1l>
using l11l11lll = std::map<l1I, l1l>;

template <typename l1I>
using l11llll11 = std::function<l1I>;

struct l11ll11lI {
  static inline l11111111 l1ll1ll11(l11111111 l1I) { return analogRead(l1I); }
  static inline l11l11l11 l11ll11ll(l11111111 l1I, l11111111 l1l) { digitalWrite(l1I, l1l); }
};
#endif
