static char normbgcolor[]           = "#1d1d21";
static char normbordercolor[]       = "#1d1d21";
static char normfgcolor[]           = "#c5c8c6";
static char selfgcolor[]            = "#b294bb";
static char selbordercolor[]        = "#b294bb";
static char selbgcolor[]            = "#1d1d21";

static char *colors[][3] = {
                     /* fg           bg           border */
       [SchemeNorm] = { normfgcolor, normbgcolor, normbordercolor },
       [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
       [SchemeNorm] = { normfgcolor, normbgcolor, normbgcolor },
};
