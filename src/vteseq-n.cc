/* C++ code produced by gperf version 3.0.4 */
/* Command-line: /usr/bin/gperf -m 100 vteseq-n.gperf  */
/* Computed positions: -k'1-2,8,12,18' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 17 "vteseq-n.gperf"
struct vteseq_n_struct {
	int seq;
	VteTerminalSequenceHandler handler;
};
#include <string.h>
/* maximum key range = 153, duplicates = 0 */

class vteseq_n_hash
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct vteseq_n_struct *lookup (const char *str, unsigned int len);
};

inline unsigned int
vteseq_n_hash::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168,  41, 168, 168,  41,  59,
      168, 168, 168, 168, 168,  40, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168, 168,  10,  13,  10,
       10,   6,  23,   6,  26,   6, 168,  42,  45,  19,
        6,   6,  13, 168,   7,   6,   7,  39,  25,   8,
      168,  28, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
      168, 168, 168, 168, 168, 168
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[17]];
      /*FALLTHROUGH*/
      case 17:
      case 16:
      case 15:
      case 14:
      case 13:
      case 12:
        hval += asso_values[(unsigned char)str[11]];
      /*FALLTHROUGH*/
      case 11:
      case 10:
      case 9:
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
      case 6:
      case 5:
      case 4:
      case 3:
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

struct vteseq_n_pool_t
  {
    char vteseq_n_pool_str15[sizeof("nop")];
    char vteseq_n_pool_str17[sizeof("index")];
    char vteseq_n_pool_str19[sizeof("repeat")];
    char vteseq_n_pool_str20[sizeof("tab")];
    char vteseq_n_pool_str22[sizeof("decset")];
    char vteseq_n_pool_str23[sizeof("bell")];
    char vteseq_n_pool_str24[sizeof("tab-set")];
    char vteseq_n_pool_str26[sizeof("set-mode")];
    char vteseq_n_pool_str27[sizeof("next-line")];
    char vteseq_n_pool_str28[sizeof("soft-reset")];
    char vteseq_n_pool_str29[sizeof("reset-mode")];
    char vteseq_n_pool_str30[sizeof("reset-color")];
    char vteseq_n_pool_str31[sizeof("decreset")];
    char vteseq_n_pool_str34[sizeof("save-cursor")];
    char vteseq_n_pool_str35[sizeof("save-mode")];
    char vteseq_n_pool_str36[sizeof("tab-clear")];
    char vteseq_n_pool_str37[sizeof("scroll-down")];
    char vteseq_n_pool_str38[sizeof("erase-in-line")];
    char vteseq_n_pool_str39[sizeof("set-icon-title")];
    char vteseq_n_pool_str40[sizeof("set-cursor-style")];
    char vteseq_n_pool_str41[sizeof("erase-in-display")];
    char vteseq_n_pool_str42[sizeof("backspace")];
    char vteseq_n_pool_str44[sizeof("form-feed")];
    char vteseq_n_pool_str45[sizeof("set-window-title")];
    char vteseq_n_pool_str46[sizeof("shift-in")];
    char vteseq_n_pool_str48[sizeof("carriage-return")];
    char vteseq_n_pool_str50[sizeof("set-scrolling-region")];
    char vteseq_n_pool_str53[sizeof("delete-characters")];
    char vteseq_n_pool_str54[sizeof("return-terminal-id")];
    char vteseq_n_pool_str55[sizeof("return-terminal-status")];
    char vteseq_n_pool_str57[sizeof("set-scrolling-region-to-end")];
    char vteseq_n_pool_str58[sizeof("reset-foreground-color")];
    char vteseq_n_pool_str59[sizeof("set-icon-and-window-title")];
    char vteseq_n_pool_str60[sizeof("screen-alignment-test")];
    char vteseq_n_pool_str61[sizeof("set-scrolling-region-from-start")];
    char vteseq_n_pool_str62[sizeof("reset-background-color")];
    char vteseq_n_pool_str63[sizeof("reset-highlight-foreground-color")];
    char vteseq_n_pool_str64[sizeof("scroll-up")];
    char vteseq_n_pool_str65[sizeof("erase-characters")];
    char vteseq_n_pool_str66[sizeof("line-feed")];
    char vteseq_n_pool_str67[sizeof("reset-highlight-background-color")];
    char vteseq_n_pool_str68[sizeof("change-color-st")];
    char vteseq_n_pool_str69[sizeof("change-color-bel")];
    char vteseq_n_pool_str70[sizeof("cursor-down")];
    char vteseq_n_pool_str71[sizeof("window-manipulation")];
    char vteseq_n_pool_str72[sizeof("restore-mode")];
    char vteseq_n_pool_str73[sizeof("reverse-index")];
    char vteseq_n_pool_str74[sizeof("restore-cursor")];
    char vteseq_n_pool_str75[sizeof("insert-lines")];
    char vteseq_n_pool_str76[sizeof("character-attributes")];
    char vteseq_n_pool_str77[sizeof("normal-keypad")];
    char vteseq_n_pool_str78[sizeof("full-reset")];
    char vteseq_n_pool_str79[sizeof("delete-lines")];
    char vteseq_n_pool_str80[sizeof("shift-out")];
    char vteseq_n_pool_str81[sizeof("character-position-absolute")];
    char vteseq_n_pool_str82[sizeof("iterm2-133")];
    char vteseq_n_pool_str83[sizeof("iterm2-1337")];
    char vteseq_n_pool_str84[sizeof("cursor-position")];
    char vteseq_n_pool_str85[sizeof("cursor-backward")];
    char vteseq_n_pool_str86[sizeof("send-primary-device-attributes")];
    char vteseq_n_pool_str87[sizeof("device-status-report")];
    char vteseq_n_pool_str88[sizeof("designate-g0-plain")];
    char vteseq_n_pool_str89[sizeof("send-secondary-device-attributes")];
    char vteseq_n_pool_str90[sizeof("designate-g0-british")];
    char vteseq_n_pool_str91[sizeof("line-position-absolute")];
    char vteseq_n_pool_str92[sizeof("set-current-directory-uri")];
    char vteseq_n_pool_str93[sizeof("dec-device-status-report")];
    char vteseq_n_pool_str94[sizeof("reset-cursor-background-color")];
    char vteseq_n_pool_str95[sizeof("urxvt-777")];
    char vteseq_n_pool_str96[sizeof("cursor-forward")];
    char vteseq_n_pool_str97[sizeof("cursor-up")];
    char vteseq_n_pool_str98[sizeof("cursor-position-top-row")];
    char vteseq_n_pool_str99[sizeof("application-keypad")];
    char vteseq_n_pool_str100[sizeof("insert-blank-characters")];
    char vteseq_n_pool_str101[sizeof("vertical-tab")];
    char vteseq_n_pool_str104[sizeof("cursor-character-absolute")];
    char vteseq_n_pool_str106[sizeof("designate-g1-plain")];
    char vteseq_n_pool_str108[sizeof("designate-g1-british")];
    char vteseq_n_pool_str112[sizeof("cursor-next-line")];
    char vteseq_n_pool_str113[sizeof("request-terminal-parameters")];
    char vteseq_n_pool_str118[sizeof("cursor-back-tab")];
    char vteseq_n_pool_str119[sizeof("set-current-file-uri")];
    char vteseq_n_pool_str120[sizeof("cursor-forward-tabulation")];
    char vteseq_n_pool_str122[sizeof("change-background-color-st")];
    char vteseq_n_pool_str123[sizeof("change-background-color-bel")];
    char vteseq_n_pool_str126[sizeof("set-current-hyperlink")];
    char vteseq_n_pool_str127[sizeof("change-cursor-background-color-st")];
    char vteseq_n_pool_str128[sizeof("change-cursor-background-color-bel")];
    char vteseq_n_pool_str130[sizeof("designate-g0-line-drawing")];
    char vteseq_n_pool_str132[sizeof("change-foreground-color-st")];
    char vteseq_n_pool_str133[sizeof("change-foreground-color-bel")];
    char vteseq_n_pool_str134[sizeof("cursor-preceding-line")];
    char vteseq_n_pool_str139[sizeof("linux-console-cursor-attributes")];
    char vteseq_n_pool_str148[sizeof("designate-g1-line-drawing")];
    char vteseq_n_pool_str156[sizeof("change-highlight-background-color-st")];
    char vteseq_n_pool_str157[sizeof("change-highlight-background-color-bel")];
    char vteseq_n_pool_str166[sizeof("change-highlight-foreground-color-st")];
    char vteseq_n_pool_str167[sizeof("change-highlight-foreground-color-bel")];
  };
static const struct vteseq_n_pool_t vteseq_n_pool_contents =
  {
    "nop",
    "index",
    "repeat",
    "tab",
    "decset",
    "bell",
    "tab-set",
    "set-mode",
    "next-line",
    "soft-reset",
    "reset-mode",
    "reset-color",
    "decreset",
    "save-cursor",
    "save-mode",
    "tab-clear",
    "scroll-down",
    "erase-in-line",
    "set-icon-title",
    "set-cursor-style",
    "erase-in-display",
    "backspace",
    "form-feed",
    "set-window-title",
    "shift-in",
    "carriage-return",
    "set-scrolling-region",
    "delete-characters",
    "return-terminal-id",
    "return-terminal-status",
    "set-scrolling-region-to-end",
    "reset-foreground-color",
    "set-icon-and-window-title",
    "screen-alignment-test",
    "set-scrolling-region-from-start",
    "reset-background-color",
    "reset-highlight-foreground-color",
    "scroll-up",
    "erase-characters",
    "line-feed",
    "reset-highlight-background-color",
    "change-color-st",
    "change-color-bel",
    "cursor-down",
    "window-manipulation",
    "restore-mode",
    "reverse-index",
    "restore-cursor",
    "insert-lines",
    "character-attributes",
    "normal-keypad",
    "full-reset",
    "delete-lines",
    "shift-out",
    "character-position-absolute",
    "iterm2-133",
    "iterm2-1337",
    "cursor-position",
    "cursor-backward",
    "send-primary-device-attributes",
    "device-status-report",
    "designate-g0-plain",
    "send-secondary-device-attributes",
    "designate-g0-british",
    "line-position-absolute",
    "set-current-directory-uri",
    "dec-device-status-report",
    "reset-cursor-background-color",
    "urxvt-777",
    "cursor-forward",
    "cursor-up",
    "cursor-position-top-row",
    "application-keypad",
    "insert-blank-characters",
    "vertical-tab",
    "cursor-character-absolute",
    "designate-g1-plain",
    "designate-g1-british",
    "cursor-next-line",
    "request-terminal-parameters",
    "cursor-back-tab",
    "set-current-file-uri",
    "cursor-forward-tabulation",
    "change-background-color-st",
    "change-background-color-bel",
    "set-current-hyperlink",
    "change-cursor-background-color-st",
    "change-cursor-background-color-bel",
    "designate-g0-line-drawing",
    "change-foreground-color-st",
    "change-foreground-color-bel",
    "cursor-preceding-line",
    "linux-console-cursor-attributes",
    "designate-g1-line-drawing",
    "change-highlight-background-color-st",
    "change-highlight-background-color-bel",
    "change-highlight-foreground-color-st",
    "change-highlight-foreground-color-bel"
  };
#define vteseq_n_pool ((const char *) &vteseq_n_pool_contents)
const struct vteseq_n_struct *
vteseq_n_hash::lookup (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 98,
      MIN_WORD_LENGTH = 3,
      MAX_WORD_LENGTH = 37,
      MIN_HASH_VALUE = 15,
      MAX_HASH_VALUE = 167
    };

  static const unsigned char lengthtable[] =
    {
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  3,  0,  5,  0,  6,  3,  0,  6,  4,  7,  0,  8,  9,
      10, 10, 11,  8,  0,  0, 11,  9,  9, 11, 13, 14, 16, 16,
       9,  0,  9, 16,  8,  0, 15,  0, 20,  0,  0, 17, 18, 22,
       0, 27, 22, 25, 21, 31, 22, 32,  9, 16,  9, 32, 15, 16,
      11, 19, 12, 13, 14, 12, 20, 13, 10, 12,  9, 27, 10, 11,
      15, 15, 30, 20, 18, 32, 20, 22, 25, 24, 29,  9, 14,  9,
      23, 18, 23, 12,  0,  0, 25,  0, 18,  0, 20,  0,  0,  0,
      16, 27,  0,  0,  0,  0, 15, 20, 25,  0, 26, 27,  0,  0,
      21, 33, 34,  0, 25,  0, 26, 27, 21,  0,  0,  0,  0, 31,
       0,  0,  0,  0,  0,  0,  0,  0, 25,  0,  0,  0,  0,  0,
       0,  0, 36, 37,  0,  0,  0,  0,  0,  0,  0,  0, 36, 37
    };
  static const struct vteseq_n_struct wordlist[] =
    {
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 23 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str15, VTE_SEQUENCE_HANDLER(vte_sequence_handler_nop)},
      {-1},
#line 29 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str17, VTE_SEQUENCE_HANDLER(vte_sequence_handler_index)},
      {-1},
#line 31 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str19, VTE_SEQUENCE_HANDLER(vte_sequence_handler_repeat)},
#line 28 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str20, VTE_SEQUENCE_HANDLER(vte_sequence_handler_tab)},
      {-1},
#line 30 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str22, VTE_SEQUENCE_HANDLER(vte_sequence_handler_decset)},
#line 26 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str23, VTE_SEQUENCE_HANDLER(vte_sequence_handler_bell)},
#line 32 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str24, VTE_SEQUENCE_HANDLER(vte_sequence_handler_tab_set)},
      {-1},
#line 34 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str26, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_mode)},
#line 37 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str27, VTE_SEQUENCE_HANDLER(vte_sequence_handler_next_line)},
#line 44 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str28, VTE_SEQUENCE_HANDLER(vte_sequence_handler_soft_reset)},
#line 43 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str29, VTE_SEQUENCE_HANDLER(vte_sequence_handler_reset_mode)},
#line 51 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str30, VTE_SEQUENCE_HANDLER(vte_sequence_handler_reset_color)},
#line 33 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str31, VTE_SEQUENCE_HANDLER(vte_sequence_handler_decreset)},
      {-1}, {-1},
#line 47 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str34, VTE_SEQUENCE_HANDLER(vte_sequence_handler_save_cursor)},
#line 38 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str35, VTE_SEQUENCE_HANDLER(vte_sequence_handler_save_mode)},
#line 40 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str36, VTE_SEQUENCE_HANDLER(vte_sequence_handler_tab_clear)},
#line 48 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str37, VTE_SEQUENCE_HANDLER(vte_sequence_handler_scroll_down)},
#line 58 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str38, VTE_SEQUENCE_HANDLER(vte_sequence_handler_erase_in_line)},
#line 68 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str39, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_icon_title)},
#line 80 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str40, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_cursor_style)},
#line 78 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str41, VTE_SEQUENCE_HANDLER(vte_sequence_handler_erase_in_display)},
#line 27 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str42, VTE_SEQUENCE_HANDLER(vte_sequence_handler_backspace)},
      {-1},
#line 36 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str44, VTE_SEQUENCE_HANDLER(vte_sequence_handler_form_feed)},
#line 79 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str45, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_window_title)},
#line 129 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str46, VTE_SEQUENCE_HANDLER(vte_sequence_handler_shift_in)},
      {-1},
#line 25 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str48, VTE_SEQUENCE_HANDLER(vte_sequence_handler_carriage_return)},
      {-1},
#line 94 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str50, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_scrolling_region)},
      {-1}, {-1},
#line 82 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str53, VTE_SEQUENCE_HANDLER(vte_sequence_handler_delete_characters)},
#line 85 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str54, VTE_SEQUENCE_HANDLER(vte_sequence_handler_return_terminal_id)},
#line 107 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str55, VTE_SEQUENCE_HANDLER(vte_sequence_handler_return_terminal_status)},
      {-1},
#line 96 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str57, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_scrolling_region_to_end)},
#line 136 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str58, VTE_SEQUENCE_HANDLER(vte_sequence_handler_reset_foreground_color)},
#line 143 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str59, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_icon_and_window_title)},
#line 101 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str60, VTE_SEQUENCE_HANDLER(vte_sequence_handler_screen_alignment_test)},
#line 95 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str61, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_scrolling_region_from_start)},
#line 133 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str62, VTE_SEQUENCE_HANDLER(vte_sequence_handler_reset_background_color)},
#line 113 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str63, VTE_SEQUENCE_HANDLER(vte_sequence_handler_reset_highlight_foreground_color)},
#line 39 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str64, VTE_SEQUENCE_HANDLER(vte_sequence_handler_scroll_up)},
#line 77 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str65, VTE_SEQUENCE_HANDLER(vte_sequence_handler_erase_characters)},
#line 24 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str66, VTE_SEQUENCE_HANDLER(vte_sequence_handler_line_feed)},
#line 110 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str67, VTE_SEQUENCE_HANDLER(vte_sequence_handler_reset_highlight_background_color)},
#line 50 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str68, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_color_st)},
#line 49 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str69, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_color_bel)},
#line 45 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str70, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_down)},
#line 88 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str71, VTE_SEQUENCE_HANDLER(vte_sequence_handler_window_manipulation)},
#line 55 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str72, VTE_SEQUENCE_HANDLER(vte_sequence_handler_restore_mode)},
#line 61 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str73, VTE_SEQUENCE_HANDLER(vte_sequence_handler_reverse_index)},
#line 67 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str74, VTE_SEQUENCE_HANDLER(vte_sequence_handler_restore_cursor)},
#line 54 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str75, VTE_SEQUENCE_HANDLER(vte_sequence_handler_insert_lines)},
#line 92 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str76, VTE_SEQUENCE_HANDLER(vte_sequence_handler_character_attributes)},
#line 60 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str77, VTE_SEQUENCE_HANDLER(vte_sequence_handler_normal_keypad)},
#line 41 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str78, VTE_SEQUENCE_HANDLER(vte_sequence_handler_full_reset)},
#line 52 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str79, VTE_SEQUENCE_HANDLER(vte_sequence_handler_delete_lines)},
#line 130 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str80, VTE_SEQUENCE_HANDLER(vte_sequence_handler_shift_out)},
#line 145 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str81, VTE_SEQUENCE_HANDLER(vte_sequence_handler_character_position_absolute)},
#line 174 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str82, VTE_SEQUENCE_HANDLER(vte_sequence_handler_iterm2_133)},
#line 175 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str83, VTE_SEQUENCE_HANDLER(vte_sequence_handler_iterm2_1337)},
#line 71 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str84, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_position)},
#line 70 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str85, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_backward)},
#line 161 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str86, VTE_SEQUENCE_HANDLER(vte_sequence_handler_send_primary_device_attributes)},
#line 93 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str87, VTE_SEQUENCE_HANDLER(vte_sequence_handler_device_status_report)},
#line 123 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str88, VTE_SEQUENCE_HANDLER(vte_sequence_handler_designate_g0_plain)},
#line 163 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str89, VTE_SEQUENCE_HANDLER(vte_sequence_handler_send_secondary_device_attributes)},
#line 125 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str90, VTE_SEQUENCE_HANDLER(vte_sequence_handler_designate_g0_british)},
#line 106 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str91, VTE_SEQUENCE_HANDLER(vte_sequence_handler_line_position_absolute)},
#line 170 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str92, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_current_directory_uri)},
#line 137 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str93, VTE_SEQUENCE_HANDLER(vte_sequence_handler_dec_device_status_report)},
#line 91 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str94, VTE_SEQUENCE_HANDLER(vte_sequence_handler_reset_cursor_background_color)},
#line 173 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str95, VTE_SEQUENCE_HANDLER(vte_sequence_handler_urxvt_777)},
#line 65 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str96, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_forward)},
#line 35 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str97, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_up)},
#line 72 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str98, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_position_top_row)},
#line 83 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str99, VTE_SEQUENCE_HANDLER(vte_sequence_handler_application_keypad)},
#line 115 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str100, VTE_SEQUENCE_HANDLER(vte_sequence_handler_insert_blank_characters)},
#line 57 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str101, VTE_SEQUENCE_HANDLER(vte_sequence_handler_vertical_tab)},
      {-1}, {-1},
#line 140 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str104, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_character_absolute)},
      {-1},
#line 126 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str106, VTE_SEQUENCE_HANDLER(vte_sequence_handler_designate_g1_plain)},
      {-1},
#line 128 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str108, VTE_SEQUENCE_HANDLER(vte_sequence_handler_designate_g1_british)},
      {-1}, {-1}, {-1},
#line 76 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str112, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_next_line)},
#line 146 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str113, VTE_SEQUENCE_HANDLER(vte_sequence_handler_request_terminal_parameters)},
      {-1}, {-1}, {-1}, {-1},
#line 69 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str118, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_back_tab)},
#line 171 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str119, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_current_file_uri)},
#line 141 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str120, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_forward_tabulation)},
      {-1},
#line 132 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str122, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_background_color_st)},
#line 131 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str123, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_background_color_bel)},
      {-1}, {-1},
#line 172 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str126, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_current_hyperlink)},
#line 90 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str127, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_cursor_background_color_st)},
#line 89 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str128, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_cursor_background_color_bel)},
      {-1},
#line 124 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str130, VTE_SEQUENCE_HANDLER(vte_sequence_handler_designate_g0_line_drawing)},
      {-1},
#line 135 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str132, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_foreground_color_st)},
#line 134 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str133, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_foreground_color_bel)},
#line 99 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str134, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_preceding_line)},
      {-1}, {-1}, {-1}, {-1},
#line 162 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str139, VTE_SEQUENCE_HANDLER(vte_sequence_handler_linux_console_cursor_attributes)},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 127 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str148, VTE_SEQUENCE_HANDLER(vte_sequence_handler_designate_g1_line_drawing)},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 109 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str156, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_highlight_background_color_st)},
#line 108 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str157, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_highlight_background_color_bel)},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 112 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str166, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_highlight_foreground_color_st)},
#line 111 "vteseq-n.gperf"
      {(int)(long)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str167, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_highlight_foreground_color_bel)}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        if (len == lengthtable[key])
          {
            register const char *s = wordlist[key].seq + vteseq_n_pool;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &wordlist[key];
          }
    }
  return 0;
}
