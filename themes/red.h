static char normbgcolor[]           = "#101010";
static char normbordercolor[]       = "#444444";
static char normfgcolor[]           = "#bbbbbb";
static char selfgcolor[]            = "#eeeeee";
static char selbordercolor[]        = "#780000";
static char selbgcolor[]            = "#780000";

static char *colors[][3] = {
                     /* fg           bg           border */
       /* [SchemeNorm] = { normfgcolor, normbgcolor, normbordercolor }, */
       [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
       [SchemeNorm] = { normfgcolor, normbgcolor, normbgcolor },
};
