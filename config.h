static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;
static const unsigned int alpha = 0xffa0;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "Hack Nerd Font:style=Regular:size=10" };
static const char *prompt = NULL; /* -p  option; prompt to the left of input field */

static char nrmfg[]    = "#414559";
static char nrmbg[]    = "#ca9ee6";
static char selfg[]    = "#232634";
static char selbg[]    = "#efbfff";
static char midfg[]    = "#292c3c";
static char midbg[]    = "#e0b0f0";
static char outfg[]    = "#a5adce";
static char higselfg[] = "#4455f0";
static char hignrmfg[] = "#4455f0";

static const char *colors[SchemeLast][2] = {
	[SchemeNorm]          = { nrmfg, nrmbg },
	[SchemeMid]           = { midfg, midbg },
    [SchemeSel]           = { selfg, selbg },

	[SchemeSelHighlight]  = { higselfg, "#000000" },
	[SchemeNormHighlight] = { hignrmfg, "#000000" },
	
    [SchemeOut]           = { outfg, "#000000" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel]  = { OPAQUE, alpha },
    [SchemeOut]  = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;
static unsigned int lineheight = 10;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
static unsigned int border_width = 0;
