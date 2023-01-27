static char normbgcolor[]           = "#282828";
static char normbordercolor[]       = "#282828";
static char normfgcolor[]           = "#fbf1c7";
static char selfgcolor[]            = "#fbf1c7";
static char selbordercolor[]        = "#fbf1c7";
static char selbgcolor[]            = "#3c3836";

static char *colors[][3] = {
                     /* fg           bg           border */
       [SchemeNorm] = { normfgcolor, normbgcolor, normbordercolor },
       [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
       [SchemeNorm] = { normfgcolor, normbgcolor, normbgcolor },
};
