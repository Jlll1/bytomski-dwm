/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx  = 1;        /* border pixel of windows */
static const char *fonts[]          = { "monospace:size=10" };
static const char dmenufont[]       = "monospace:size=10";
static const char col_bg1[]         = "#323027";
static const char col_bg2[]         = "#a89984";
static const char col_fg[]          = "#fbf1c7";
static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { col_fg, col_bg1, col_bg2 },
	[SchemeSel]  = { col_bg1, col_fg,  col_fg  },
};

/* workspaces */
static const Workspace workspaces[] = {
        /* Monitor              Tag             Label */
        { 2,                    1,              "1" },
        { 2,                    2,              "2" },
        { 2,                    3,              "3" },
        { 1,                    1,              "4" },
        { 3,                    1,              "5" },
        { 2,                    4,              "6" },
        { 2,                    5,              "7" },
        { 1,                    2,              "8" },
        { 3,                    2,              "9" },
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */

/* key definitions */
#define MODKEY Mod1Mask

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = { "dmenu_run", "-m", dmenumon, "-fn", dmenufont, NULL };
static const char *termcmd[]  = { "alacritty", NULL };

static Key keys[] = {
	/* modifier                     key        function        argument */
	{ MODKEY,                       XK_p,      spawn,          {.v = dmenucmd } },
	{ MODKEY|ShiftMask,             XK_Return, spawn,          {.v = termcmd } },
	{ MODKEY|ShiftMask,             XK_q,      focusstack,     {.i = 1 } },
	{ MODKEY|ShiftMask,             XK_w,      focusstack,     {.i = 2 } },
	{ MODKEY|ShiftMask,             XK_e,      focusstack,     {.i = 3 } },
	{ MODKEY|ShiftMask,             XK_r,      focusstack,     {.i = 4 } },
	{ MODKEY|ShiftMask,             XK_t,      focusstack,     {.i = 5 } },
	{ MODKEY|ShiftMask,             XK_y,      focusstack,     {.i = 6 } },
	{ MODKEY|ShiftMask,             XK_u,      focusstack,     {.i = 7 } },
	{ MODKEY|ShiftMask,             XK_i,      focusstack,     {.i = 8 } },
	{ MODKEY|ShiftMask,             XK_o,      focusstack,     {.i = 9 } },
	{ MODKEY|ShiftMask,             XK_p,      focusstack,     {.i = 10 } },
	{ MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
	{ MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
	{ MODKEY|ShiftMask,             XK_c,      killclient,     {0} },
	{ MODKEY,                       XK_1,      focusworkspace, {.i = 1 } },
	{ MODKEY,                       XK_2,      focusworkspace, {.i = 2 } },
  { MODKEY,                       XK_3,      focusworkspace, {.i = 3 } },
  { MODKEY,                       XK_4,      focusworkspace, {.i = 4 } },
  { MODKEY,                       XK_5,      focusworkspace, {.i = 5 } },
  { MODKEY,                       XK_6,      focusworkspace, {.i = 6 } },
  { MODKEY,                       XK_7,      focusworkspace, {.i = 7 } },
  { MODKEY,                       XK_8,      focusworkspace, {.i = 8 } },
  { MODKEY,                       XK_9,      focusworkspace, {.i = 9 } },
  { MODKEY|ShiftMask,             XK_m,      quit,           {0} },
  { MODKEY|ShiftMask,             XK_1,      tag,            {.i = 1 } },
  { MODKEY|ShiftMask,             XK_2,      tag,            {.i = 2 } },
  { MODKEY|ShiftMask,             XK_3,      tag,            {.i = 3 } },
  { MODKEY|ShiftMask,             XK_4,      tag,            {.i = 4 } },
  { MODKEY|ShiftMask,             XK_5,      tag,            {.i = 5 } },
  { MODKEY|ShiftMask,             XK_6,      tag,            {.i = 6 } },
  { MODKEY|ShiftMask,             XK_7,      tag,            {.i = 7 } },
  { MODKEY|ShiftMask,             XK_8,      tag,            {.i = 8 } },
  { MODKEY|ShiftMask,             XK_9,      tag,            {.i = 9 } },
};
