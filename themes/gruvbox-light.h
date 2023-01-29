static char normbgcolor[]           = "#fbf1c7";
static char normbordercolor[]       = "#282828";
static char normfgcolor[]           = "#282828";
static char selfgcolor[]            = "#282828";
static char selbordercolor[]        = "#282828";
static char selbgcolor[]            = "#ebdbb2";

static char *colors[][3] = {
                     /* fg           bg           border */
       [SchemeNorm] = { normfgcolor, normbgcolor, normbordercolor },
       [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
       [SchemeNorm] = { normfgcolor, normbgcolor, normbgcolor },
};
