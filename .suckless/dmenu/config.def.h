/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0.5;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 800;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"SourceCodePro:size=17"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char col_bghisel[]	=	"#d4ff00"; /* background of highlighted letters in selected menu option */
static const char col_hisel[]	=	"#ffffff"; /* color of highlighted letters in selected menu option */
static const char col_scheeme[] = "#737373";
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#d4ff00", "#d4ff00" },
	[SchemeSel] = { "#d4ff00", "#d4ff00" },
	[SchemeSelHighlight] = { "#1e1e1e", col_scheeme }, /* color of highlighted letters in selected menu option; background of highlighted letters in selected menu option */
	[SchemeNormHighlight] = { col_scheeme, "#1e1e1e" }, /* color of highlighted letters in non selected menu options; background of highlighted letters in non selected menu options */
	[SchemeOut] = { "#d4ff00", "#d4ff00" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 20;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 1;
