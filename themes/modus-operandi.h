static char normbgcolor[]           = "#ffffff";
static char normbordercolor[]       = "#ffffff";
static char normfgcolor[]           = "#000000";
static char selfgcolor[]            = "#000000";
static char selbordercolor[]        = "#000000";
static char selbgcolor[]            = "#dddddd";

static char *colors[][3] = {
                     /* fg           bg           border */
       [SchemeNorm] = { normfgcolor, normbgcolor, normbordercolor },
       [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
       /* [SchemeNorm] = { normfgcolor, normbgcolor, normbgcolor }, */
};
