static char normbgcolor[]           = "#282c34";
static char normbordercolor[]       = "#1e2127";
static char normfgcolor[]           = "#abb2bf";
static char selfgcolor[]            = "#61afef";
static char selbordercolor[]        = "#abb2bf";
static char selbgcolor[]            = "#282c34";

static char *colors[][3] = {
                     /* fg           bg           border */
       /* [SchemeNorm] = { normfgcolor, normbgcolor, normbordercolor }, */
       [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
       [SchemeNorm] = { normfgcolor, normbgcolor, normbgcolor },
};
