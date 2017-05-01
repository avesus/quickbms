/* VEST-32 core accumulator input and output bit permutations */

static const vest_core_inputs	vest_32_structure[vest_32_bits] =
{
	{  0,  1,  2,  3,  4,505},	/*   0 */
	{  0,  1,  2,  3,  4,565},	/*   1 */
	{  0,  1,  2,  3,  4,209},	/*   2 */
	{  0,  1,  2,  3,  4,238},	/*   3 */
	{  0,  1,  2,  3,  4,378},	/*   4 */
	{  4,  4,  1,  3,  2,157},	/*   5 */
	{  5,  5,  2,  4,  3,495},	/*   6 */
	{  1,  1,  3,  0,  4,364},	/*   7 */
	{  7,  7,  4,  1,  5,103},	/*   8 */
	{  8,  8,  5,  2,  6,514},	/*   9 */
	{  9,  0,  7,  3,  5,414},	/*  10 */
	{ 10,  7,  4,  0,  6,345},	/*  11 */
	{ 11,  6,  5,  9,  7,518},	/*  12 */
	{ 12,  9,  6, 10,  8,267},	/*  13 */
	{ 13, 10,  7,  3,  9,124},	/*  14 */
	{ 13, 11,  8,  4,  5,516},	/*  15 */
	{ 15,  2,  9,  5, 11,339},	/*  16 */
	{ 16, 13, 10,  6,  0,248},	/*  17 */
	{ 17, 14, 11,  6, 15,372},	/*  18 */
	{ 14, 15, 12,  8,  2,404},	/*  19 */
	{ 19, 16, 13,  9,  3,100},	/*  20 */
	{ 17, 16,  8, 10,  9,391},	/*  21 */
	{ 18,  8, 15, 11,  5,318},	/*  22 */
	{ 22,  9,  2, 12,  6,440},	/*  23 */
	{ 23, 22, 17,  9,  7,494},	/*  24 */
	{  0,  5, 24, 21,  8,520},	/*  25 */
	{  0, 25,  1,  2,  4,359},	/*  26 */
	{  6,  9, 20, 16, 10,365},	/*  27 */
	{ 22, 24, 21, 23, 11,371},	/*  28 */
	{ 28, 23, 22, 18, 12,300},	/*  29 */
	{  4,  1, 27,  7, 10, 19},	/*  30 */
	{ 21, 27, 24, 17, 14,227},	/*  31 */
	{ 31, 16, 28, 21, 24,247},	/*  32 */
	{ 32, 29, 26, 20,  7, 81},	/*  33 */
	{ 33, 29, 12, 23, 17,469},	/*  34 */
	{ 34, 31, 28, 24, 21, 13},	/*  35 */
	{ 33, 32, 35, 25, 19,187},	/*  36 */
	{ 36, 18,  6, 11, 20,477},	/*  37 */
	{ 35, 15, 28, 27, 21,249},	/*  38 */
	{ 22, 12, 15, 14, 18,259},	/*  39 */
	{ 39, 17, 33, 29, 22,425},	/*  40 */
	{ 40, 28, 34, 30, 14,149},	/*  41 */
	{ 23, 38, 35, 41, 25,389},	/*  42 */
	{ 42, 39, 15, 27, 31,203},	/*  43 */
	{ 43, 40, 14, 31, 21,221},	/*  44 */
	{ 44, 41, 38, 34, 28,158},	/*  45 */
	{ 45, 42, 39, 35, 29,195},	/*  46 */
	{ 46, 43, 40, 44, 30,463},	/*  47 */
	{ 47, 18, 41, 37, 31,448},	/*  48 */
	{ 48, 45, 37, 39, 32,388},	/*  49 */
	{ 42, 36, 43, 39, 33,399},	/*  50 */
	{  3, 47, 50, 40, 44,268},	/*  51 */
	{ 37, 36, 29, 32, 35,461},	/*  52 */
	{ 52, 35, 46, 42, 36,539},	/*  53 */
	{ 53, 48, 47, 16, 37,200},	/*  54 */
	{ 46, 51, 42, 45, 40,314},	/*  55 */
	{  8, 52, 49, 45, 39,279},	/*  56 */
	{ 56, 53, 50, 46, 40,168},	/*  57 */
	{ 57, 43, 33, 44, 23,317},	/*  58 */
	{ 10, 46, 44, 48, 34,336},	/*  59 */
	{ 50, 24, 53, 49, 56,320},	/*  60 */
	{ 49, 20, 41,  3, 26,332},	/*  61 */
	{ 15, 61, 39, 11, 18,258},	/*  62 */
	{ 26, 31, 40, 10, 20,289},	/*  63 */
	{ 63, 49, 57, 53, 47,347},	/*  64 */
	{ 55, 22, 24, 61, 48,397},	/*  65 */
	{ 52, 50, 19, 55, 49,230},	/*  66 */
	{ 45, 63, 60, 56, 38, 90},	/*  67 */
	{ 55, 60, 56, 16, 64,534},	/*  68 */
	{ 68, 65, 62, 58, 52, 12},	/*  69 */
	{ 15, 66, 27,  1, 11,316},	/*  70 */
	{ 70, 67, 64, 60, 54,121},	/*  71 */
	{ 54, 17, 71, 61, 55, 43},	/*  72 */
	{ 25, 19, 66, 62, 56,466},	/*  73 */
	{ 31, 71, 50, 44, 57,554},	/*  74 */
	{ 24, 21, 68, 64, 58,529},	/*  75 */
	{ 75, 68, 69, 64, 59,384},	/*  76 */
	{ 76, 51, 70, 66, 60,  0},	/*  77 */
	{ 76, 62, 34, 28, 61,464},	/*  78 */
	{ 29, 37, 72, 68, 62,101},	/*  79 */
	{ 79, 64, 25, 69, 73,262},	/*  80 */
	{ 44, 14,  8, 55, 80,222},	/*  81 */
	{ 18, 69, 75, 78, 65,170},	/*  82 */
	{ 11, 79, 76, 19, 66,482},	/*  83 */
	{ 83, 80, 77, 49, 67,472},	/*  84 */
	{ 44, 74,  3, 65, 82,538},	/*  85 */
	{ 85, 36, 83, 75, 82,184},	/*  86 */
	{ 86, 83, 80, 76, 71,310},	/*  87 */
	{ 67, 84, 81, 77, 71,288},	/*  88 */
	{ 55, 52, 20, 59, 72,475},	/*  89 */
	{ 47, 86, 31, 79, 73, 22},	/*  90 */
	{ 90, 86, 84, 80, 74,139},	/*  91 */
	{ 72, 38, 41, 42, 75,215},	/*  92 */
	{ 92, 60, 86, 82, 76,224},	/*  93 */
	{ 72, 16, 29, 33, 68,  1},	/*  94 */
	{ 54, 58, 89, 13, 78,574},	/*  95 */
	{ 82, 93, 65, 39, 90,486},	/*  96 */
	{ 54, 93, 92, 86, 80,400},	/*  97 */
	{ 97, 63, 91, 87, 35,271},	/*  98 */
	{ 36, 18, 92, 88, 82,264},	/*  99 */
	{ 87, 96, 64, 44, 45,583},	/* 100 */
	{ 36, 97, 94, 90, 91,110},	/* 101 */
	{101, 97, 58, 83, 85,128},	/* 102 */
	{ 88, 99, 25, 92, 96,206},	/* 103 */
	{ 85, 30, 97, 78, 87,119},	/* 104 */
	{ 73,101, 98, 99, 82,321},	/* 105 */
	{  4, 10, 63,  2,  1,218},	/* 106 */
	{ 58, 71,100, 18,101,569},	/* 107 */
	{107, 85, 36, 97, 91,323},	/* 108 */
	{108,105,102, 98, 61, 74},	/* 109 */
	{109,106, 59, 99, 38,177},	/* 110 */
	{105, 20, 55, 89, 26,441},	/* 111 */
	{111, 61,105, 55, 94,350},	/* 112 */
	{104, 17, 29, 16, 96,164},	/* 113 */
	{113, 64, 91,108, 97,335},	/* 114 */
	{ 73,114,108, 91, 98,508},	/* 115 */
	{ 36, 35,109, 83, 99,325},	/* 116 */
	{ 26, 12,113, 98,100,542},	/* 117 */
	{ 98, 38,112, 13, 14,541},	/* 118 */
	{118, 70,112,108,102,197},	/* 119 */
	{ 63,107, 97,118, 94,506},	/* 120 */
	{ 59, 42,  7,102, 61,552},	/* 121 */
	{102,109, 39,111,105,515},	/* 122 */
	{122,119,116,112, 53,188},	/* 123 */
	{123, 91,118, 71,107,485},	/* 124 */
	{ 73, 19,118,114,108,563},	/* 125 */
	{ 89, 57, 87, 70,109, 79},	/* 126 */
	{113,123, 81,116,110,311},	/* 127 */
	{ 29, 95,121,  2, 73,252},	/* 128 */
	{ 85,101,104, 56,  5,576},	/* 129 */
	{ 81,129,123,110,113,499},	/* 130 */
	{ 96, 83,124,102,114,192},	/* 131 */
	{131, 75,125,128,106, 25},	/* 132 */
	{109, 57,129,122, 63,117},	/* 133 */
	{ 92,122, 99,123,116,285},	/* 134 */
	{113,104,101,124, 41,446},	/* 135 */
	{135,132,129,125,  3,307},	/* 136 */
	{ 94,133,112,126,  3,278},	/* 137 */
	{ 47, 65,107,127, 54,272},	/* 138 */
	{136,135, 23, 54,122,402},	/* 139 */
	{139,136,133,129,127,556},	/* 140 */
	{140, 53,134,130,124,245},	/* 141 */
	{141,138,122,121,125,226},	/* 142 */
	{ 65,135,136,132,126,360},	/* 143 */
	{109,105, 87, 99, 89,299},	/* 144 */
	{ 42, 36, 91, 27, 39,381},	/* 145 */
	{ 63, 32,139,138,129,277},	/* 146 */
	{146,143,139,136,130,423},	/* 147 */
	{134,144,141,137,131,275},	/* 148 */
	{148, 47,131,138,132,408},	/* 149 */
	{149, 27,146, 93,142,282},	/* 150 */
	{ 17,147,144,140,134,386},	/* 151 */
	{ 85,151,145,141,135,557},	/* 152 */
	{131, 51,136,138, 78,291},	/* 153 */
	{ 38,134,153,143,137,562},	/* 154 */
	{154,137, 34, 40,138,390},	/* 155 */
	{ 23,143,121,100,150, 75},	/* 156 */
	{142,153,150, 68,152,309},	/* 157 */
	{144, 96,151,105,141,488},	/* 158 */
	{113,155,152,104,153,330},	/* 159 */
	{159,121, 95,149,143,487},	/* 160 */
	{147,134,154,150,144,329},	/* 161 */
	{ 82,158,155,123,145,362},	/* 162 */
	{ 28,161,156, 43,147,301},	/* 163 */
	{163,112,137,139, 53,302},	/* 164 */
	{122,123,145, 63,128,159},	/* 165 */
	{121,162,122,163,119,543},	/* 166 */
	{ 51, 35,160,153,150,409},	/* 167 */
	{120,  0, 49,112,161,260},	/* 168 */
	{ 26, 94,120,115, 84,231},	/* 169 */
	{144,123,163,165,164, 86},	/* 170 */
	{ 23,170,149,160, 84,261},	/* 171 */
	{171,149,151,161, 10, 70},	/* 172 */
	{ 46,169,126,162,156,108},	/* 173 */
	{ 78,171, 75,173, 89,531},	/* 174 */
	{ 14, 98,168, 89,158, 92},	/* 175 */
	{175,172,169,162,159,167},	/* 176 */
	{ 67,133,146,147,160,528},	/* 177 */
	{156, 67,171, 33,161,403},	/* 178 */
	{178,170,172,151,147,292},	/* 179 */
	{ 76,176, 93,133,158,242},	/* 180 */
	{ 45,177,174,170,164, 95},	/* 181 */
	{150,131,175, 37,165, 61},	/* 182 */
	{134,116,123,164,166,217},	/* 183 */
	{140,180, 28,173,167,214},	/* 184 */
	{ 33,181,177, 77, 43, 52},	/* 185 */
	{113,106,179,140,165,415},	/* 186 */
	{ 72,183, 98,175,121,567},	/* 187 */
	{174,100,181,  5,171,270},	/* 188 */
	{ 86,185,182,178,172,273},	/* 189 */
	{145,186,183,179,173, 93},	/* 190 */
	{118,187,112,180,163, 64},	/* 191 */
	{ 50,188,190,134, 88,411},	/* 192 */
	{159, 76, 48,157,176,582},	/* 193 */
	{ 71,176, 81,183,174,  6},	/* 194 */
	{ 98, 72,115,188,105,585},	/* 195 */
	{ 24, 79,189, 69, 59,156},	/* 196 */
	{189, 20, 88, 48, 59,533},	/* 197 */
	{132,194,191,161, 58, 50},	/* 198 */
	{166,128, 22, 80,171,426},	/* 199 */
	{199, 80,193,178,183,153},	/* 200 */
	{200,197,194,190,179, 67},	/* 201 */
	{194,198,146,191,185, 48},	/* 202 */
	{ 95,149, 89,101,  2,294},	/* 203 */
	{203,140,197,193, 99, 26},	/* 204 */
	{204,201,198,194,188, 72},	/* 205 */
	{205,141,198, 64, 73,104},	/* 206 */
	{187, 88,142,196,190,296},	/* 207 */
	{ 32,204,  7,197,191,136},	/* 208 */
	{ 77, 74, 84, 48, 56,379},	/* 209 */
	{115,204,119,199,106, 34},	/* 210 */
	{196,107, 94,193,120,476},	/* 211 */
	{211,208,205,156,195, 31},	/* 212 */
	{181,152,206,209,160, 57},	/* 213 */
	{213,166,116,203,186, 37},	/* 214 */
	{180,115,169,  5,128, 77},	/* 215 */
	{126, 62, 77,114,206,447},	/* 216 */
	{216,213,154,206,200, 66},	/* 217 */
	{217,214,211,207,201,233},	/* 218 */
	{109,215,212,208,202,571},	/* 219 */
	{155,186,201,111,132,555},	/* 220 */
	{220,217,214,210,204, 69},	/* 221 */
	{202,211,167, 78,107,132},	/* 222 */
	{222,219,216,154,200, 28},	/* 223 */
	{142,196,110,200,190,383},	/* 224 */
	{224,168,203, 84,167,491},	/* 225 */
	{100,222,220, 66, 96,298},	/* 226 */
	{199,206,200, 40,190,368},	/* 227 */
	{144,200,227,130,196,545},	/* 228 */
	{228,225,  8,218,221, 83},	/* 229 */
	{229,226,223,219,213,  5},	/* 230 */
	{147,227,224,196,230,122},	/* 231 */
	{111, 98,225,228,215,269},	/* 232 */
	{ 74,203, 48,181,166,431},	/* 233 */
	{216, 79,222,189,233,342},	/* 234 */
	{103,234,161,125, 37,577},	/* 235 */
	{235,232,229,131,219, 46},	/* 236 */
	{118, 21,134, 65,191,420},	/* 237 */
	{188,106, 30,234,221, 91},	/* 238 */
	{120,175,135,188,115,559},	/* 239 */
	{219, 41,154,229,223,305},	/* 240 */
	{240,237,234,163,224, 88},	/* 241 */
	{241,154,235,231,225,127},	/* 242 */
	{ 88,218, 92,236,226,204},	/* 243 */
	{196,229,237,233, 85,352},	/* 244 */
	{244,241,232,239,182,308},	/* 245 */
	{245,242,239,235,229,444},	/* 246 */
	{246,243,190,236,168, 62},	/* 247 */
	{ 73,196,233,237, 80,547},	/* 248 */
	{ 60,245,242,239,171,284},	/* 249 */
	{ 27, 93,195,221, 38,198},	/* 250 */
	{174, 52,244,127, 32, 41},	/* 251 */
	{142, 57, 43,241,207,171},	/* 252 */
	{245, 19,246,242,152,458},	/* 253 */
	{130,253,144,247,208,213},	/* 254 */
	{ 46, 34,222,244, 98,490},	/* 255 */
	{255,156,249,245,239,142},	/* 256 */
	{179,115,253,173,240,193},	/* 257 */
	{231,244,103,117, 98, 59},	/* 258 */
	{210,184, 78,151,242,120},	/* 259 */
	{166,256,253, 72,187,370},	/* 260 */
	{133,252,216,198,204,427},	/* 261 */
	{261,258,239,255,245,162},	/* 262 */
	{150,259, 97,186,246,138},	/* 263 */
	{256,105,252,260, 44,114},	/* 264 */
	{243,159,263,259,211,568},	/* 265 */
	{265,262, 87,255,249,  7},	/* 266 */
	{102,178,254,125,162, 76},	/* 267 */
	{267,264, 23,257,230,208},	/* 268 */
	{268,265,262,258, 60,181},	/* 269 */
	{210,232, 16,262,218,250},	/* 270 */
	{169,267,264,260,254,326},	/* 271 */
	{211,254,263,244,243,578},	/* 272 */
	{228,219,229,247,272,324},	/* 273 */
	{266,260,264,236,257,550},	/* 274 */
	{171,271,268,264,274,176},	/* 275 */
	{169, 42, 46,265,259,328},	/* 276 */
	{206,268,141,170,205,237},	/* 277 */
	{277,255,239,183,261,465},	/* 278 */
	{212,243,110,249, 58,173},	/* 279 */
	{135,235,165,118,172,306},	/* 280 */
	{195,267,275,270,264,228},	/* 281 */
	{234, 66,275,271,194,135},	/* 282 */
	{252,197,269,272,263,451},	/* 283 */
	{283,241,277,280,273,105},	/* 284 */
	{248, 96,143,142,183,396},	/* 285 */
	{202,282, 51,133,271,511},	/* 286 */
	{241,283,280,243,277,155},	/* 287 */
	{287,284,281,274,185,327},	/* 288 */
	{164, 87,261,151,272,338},	/* 289 */
	{289,228,280,201,273,382},	/* 290 */
	{290,148,284, 65,274, 68},	/* 291 */
	{218,145,285,281,107,255},	/* 292 */
	{275,208,101,282, 20,480},	/* 293 */
	{270,290,287,283,277,179},	/* 294 */
	{ 66,291,288,167,278,468},	/* 295 */
	{164, 83,147,231,285,186},	/* 296 */
	{232,121,157,166,150,548},	/* 297 */
	{102,288,188,294,166,438},	/* 298 */
	{298,295,292,215,290,254},	/* 299 */
	{299,281,230,289,137,413},	/* 300 */
	{189,281, 87,294,284,546},	/* 301 */
	{172,298,108,291,251,361},	/* 302 */
	{180,161,171,262,286,449},	/* 303 */
	{303,300,297,293,287,357},	/* 304 */
	{304,214,220,227,181,416},	/* 305 */
	{231,272,224,247,304,525},	/* 306 */
	{282,133, 12,197,263,219},	/* 307 */
	{248, 79, 78,300, 82,398},	/* 308 */
	{263,234,140,186,305,424},	/* 309 */
	{189, 70,253,291,235,146},	/* 310 */
	{251,307,304,187,181, 84},	/* 311 */
	{157,308,210,311,178, 54},	/* 312 */
	{305,253,147,144,306,561},	/* 313 */
	{310,179,190,240,120,462},	/* 314 */
	{310,114,308,304,303,498},	/* 315 */
	{ 80,193,314,211,312,337},	/* 316 */
	{ 30,196,172,302,130,385},	/* 317 */
	{251,207,293,100,271,497},	/* 318 */
	{199,283,312,306,137, 85},	/* 319 */
	{274,148,288,309,303,191},	/* 320 */
	{304,317,314,310,205,313},	/* 321 */
	{313,266,318,311,276, 44},	/* 322 */
	{322,306,319,141,316,303},	/* 323 */
	{308,323,258,313,307,143},	/* 324 */
	{297,180,289,230, 95,443},	/* 325 */
	{320,325,319,  1,298,513},	/* 326 */
	{165,160,300,171,174,395},	/* 327 */
	{129,185,321,279,202, 87},	/* 328 */
	{315,227,190,226,267,322},	/* 329 */
	{ 84,148,120,319,220,212},	/* 330 */
	{330,192,324,288,314,239},	/* 331 */
	{331,312,146,328,246,180},	/* 332 */
	{125,323,319,322,309,523},	/* 333 */
	{313,285,327,307,145,161},	/* 334 */
	{334, 56,327, 61,272,558},	/* 335 */
	{308,335,111,333, 95,586},	/* 336 */
	{274,333,246, 74,329,417},	/* 337 */
	{276,335, 90,327,321,349},	/* 338 */
	{338,335,332,328,327,433},	/* 339 */
	{212,106,333,329,250,517},	/* 340 */
	{340,337,334,330,324, 20},	/* 341 */
	{315,205,152,319,333,178},	/* 342 */
	{342,339,336,332,326, 29},	/* 343 */
	{186,183,337,334,327,232},	/* 344 */
	{344,341,338,335,328,165},	/* 345 */
	{299,332,339,335,284,380},	/* 346 */
	{346,330,209,336,170,412},	/* 347 */
	{301,190,217, 49,323,481},	/* 348 */
	{ 53,193,247,312,332,455},	/* 349 */
	{348,346,254,293,201, 18},	/* 350 */
	{315,347,344,340,334,130},	/* 351 */
	{139,300,220,351,306, 60},	/* 352 */
	{266,349,346,251,336,183},	/* 353 */
	{269,341,193,188,162,564},	/* 354 */
	{117,351,348,344, 86,202},	/* 355 */
	{167,281,320,182,318,502},	/* 356 */
	{348,353, 74,346,340,148},	/* 357 */
	{155,354,351,347,341, 58},	/* 358 */
	{180,355,213,349,342,484},	/* 359 */
	{317,228,353,349,172,115},	/* 360 */
	{ 32,257, 26,111,311,134},	/* 361 */
	{361,358,355,263,345, 35},	/* 362 */
	{362,356,340,352,346,434},	/* 363 */
	{ 71, 50,339,192,347,151},	/* 364 */
	{301,361,286,285,348,240},	/* 365 */
	{365,362,359,355,356, 65},	/* 366 */
	{340,363,297,356,350, 73},	/* 367 */
	{367,363,295,357,239, 32},	/* 368 */
	{343,126,149,331,310, 21},	/* 369 */
	{117,366,363,359,353, 14},	/* 370 */
	{176,169,365,360,159, 30},	/* 371 */
	{244,178,263,358,338, 56},	/* 372 */
	{102,313,296,318,356, 36},	/* 373 */
	{261,328,311,250,320,293},	/* 374 */
	{ 94,148,371,228,273,145},	/* 375 */
	{199,236,155, 54,302,  8},	/* 376 */
	{  6,130,226,154,323,367},	/* 377 */
	{368,292,293,210,243,522},	/* 378 */
	{182,244,372,301,362,297},	/* 379 */
	{251,113, 50,106, 38,467},	/* 380 */
	{207,377,254,202,373,210},	/* 381 */
	{295,163,375,119,137,109},	/* 382 */
	{382,379,376,227,366,253},	/* 383 */
	{207,317,186,299,175,376},	/* 384 */
	{384,305,192,374,368, 55},	/* 385 */
	{385,282,325,258,215,457},	/* 386 */
	{ 80,255,312,350,370,185},	/* 387 */
	{380,384,387,114,371,510},	/* 388 */
	{388,385,165,382,316,236},	/* 389 */
	{389,386,383,379,298,107},	/* 390 */
	{390,387,384,380,374, 53},	/* 391 */
	{127,153, 69,266,179,401},	/* 392 */
	{392,389,256,382,376,251},	/* 393 */
	{303,250,387,286,297,144},	/* 394 */
	{394,391,305,384,182,129},	/* 395 */
	{109,389,276,194,201,526},	/* 396 */
	{291,396,393,381,380,560},	/* 397 */
	{167,191,397,341,381,489},	/* 398 */
	{376,395,392,375,382,118},	/* 399 */
	{234,260,393,275,115,493},	/* 400 */
	{176,320,354,361,331,205},	/* 401 */
	{182,390,386,259,385,343},	/* 402 */
	{393,338,313,258,387,418},	/* 403 */
	{225,400,212,301,393,355},	/* 404 */
	{361,250,329,351,279,581},	/* 405 */
	{405, 51,404,395,389,340},	/* 406 */
	{371,354,367,358,146,225},	/* 407 */
	{117,349,401,364,391,356},	/* 408 */
	{408,405,399,270,283,116},	/* 409 */
	{409,406,333,403,298,452},	/* 410 */
	{410,342,225,400,394,346},	/* 411 */
	{407,324,265,268,299,287},	/* 412 */
	{169,223,265,392,396,492},	/* 413 */
	{413,386,407,403,397,445},	/* 414 */
	{414,411,408,404,398,199},	/* 415 */
	{136,130,409,415,399, 82},	/* 416 */
	{375,296,252,269, 63,223},	/* 417 */
	{249,223,414,388, 91,211},	/* 418 */
	{266,344,337,127,383,503},	/* 419 */
	{419,416,413,383,403,131},	/* 420 */
	{304,324,181,323,235,459},	/* 421 */
	{269,208,418,262,405,537},	/* 422 */
	{333,419,416,412,406, 38},	/* 423 */
	{423,420,345,413,326, 89},	/* 424 */
	{422,377,402,382,408,333},	/* 425 */
	{316,353,367,360,125,113},	/* 426 */
	{309,423,407,416,413,373},	/* 427 */
	{198,424,421,417,411,160},	/* 428 */
	{428,425,422,418,412,229},	/* 429 */
	{  0,411,279,371,407,572},	/* 430 */
	{357,394,424,330,286,169},	/* 431 */
	{431,428,207,422,415,566},	/* 432 */
	{432,429,426,422,240, 23},	/* 433 */
	{433,430,427, 90,417,125},	/* 434 */
	{434,431,428,424,418,111},	/* 435 */
	{435,116,295,278,419,470},	/* 436 */
	{280,407,290,273,294,570},	/* 437 */
	{358,143,300,415,160,584},	/* 438 */
	{438,435,432,428,422, 78},	/* 439 */
	{127,439,433,429,377,166},	/* 440 */
	{440,437,434,430,243, 49},	/* 441 */
	{385,233,417,215,425,540},	/* 442 */
	{442,343,257,111,426, 71},	/* 443 */
	{290,299,437,341,427,196},	/* 444 */
	{173,265,160,434,406,454},	/* 445 */
	{350,442,325,369,248,579},	/* 446 */
	{423,110,444, 65,345,519},	/* 447 */
	{447,309,441,405,357,483},	/* 448 */
	{448,445,435,438,432,532},	/* 449 */
	{223,256,446,436,203,112},	/* 450 */
	{403,447,444,373,410,509},	/* 451 */
	{436,448,278,441,435,175},	/* 452 */
	{452,408,446,442,436,286},	/* 453 */
	{421,449,420,315,415,256},	/* 454 */
	{354,451,448,444,297,106},	/* 455 */
	{310,360,152,410,434,575},	/* 456 */
	{360,429,434,280,440,189},	/* 457 */
	{184,365,451,447,388,530},	/* 458 */
	{458,454,394,354, 88,453},	/* 459 */
	{450,234,275,405,427,266},	/* 460 */
	{372,437,453,445,322,504},	/* 461 */
	{381,448,115,451,445,351},	/* 462 */
	{462,459,456,452,446,  4},	/* 463 */
	{420,431,369,385,436,319},	/* 464 */
	{190,461,458,454,464, 42},	/* 465 */
	{465,462,459,455,118, 17},	/* 466 */
	{405,400,460,447,450,140},	/* 467 */
	{467,352,396,343,334,375},	/* 468 */
	{348,179,397,387,452,126},	/* 469 */
	{166,256,212,249,383,580},	/* 470 */
	{451,467,468,457,402,437},	/* 471 */
	{471,196,468,354,455,265},	/* 472 */
	{326,128,466, 99,266,150},	/* 473 */
	{363,303,108,329,443, 94},	/* 474 */
	{286,471,393,464,421,334},	/* 475 */
	{475,450,460,465,459, 97},	/* 476 */
	{476,294,470,366,466,331},	/* 477 */
	{445,390,214,381,440,147},	/* 478 */
	{419,110,292,353,475,551},	/* 479 */
	{437,418,248,217,476,512},	/* 480 */
	{428,305,474,250,413,315},	/* 481 */
	{455,276,475,471,439,133},	/* 482 */
	{398,465,476,159,466,521},	/* 483 */
	{177,401,477,473,195,394},	/* 484 */
	{484,481,471,474,468, 40},	/* 485 */
	{225,473,482,475,469,194},	/* 486 */
	{335,461,480,476,470,478},	/* 487 */
	{487,369,379,276,439, 33},	/* 488 */
	{488,485,287,331,472, 98},	/* 489 */
	{489,486,273,479,478, 11},	/* 490 */
	{490,441,124, 96,474,524},	/* 491 */
	{397,293,362,481,365,442},	/* 492 */
	{492,489,406,482,469,241},	/* 493 */
	{493,177,487,483,477, 15},	/* 494 */
	{494,491,488,202,478,421},	/* 495 */
	{379,492,142,485,478,216},	/* 496 */
	{464,493,327,486,496,363},	/* 497 */
	{158,484,491,474,481,544},	/* 498 */
	{296,452,492,203,482,527},	/* 499 */
	{480,309,248,185,130,460},	/* 500 */
	{500,487,494,490,370,137},	/* 501 */
	{501,498,161,292,485,174},	/* 502 */
	{  5,483,378,479,174,163},	/* 503 */
	{503,500,497,493,487, 24},	/* 504 */
	{ 46, 11,367,453,443,220},	/* 505 */
	{352,479,499,468,355,405},	/* 506 */
	{412,480,251,182,501,430},	/* 507 */
	{507,504,501,497,491, 80},	/* 508 */
	{443,474,502,322, 57,263},	/* 509 */
	{304,509,506,499,493,290},	/* 510 */
	{429,430,433,498,419,536},	/* 511 */
	{511,508,450,501,261, 96},	/* 512 */
	{512,509,506,435,474,276},	/* 513 */
	{513,259,507,503,233,535},	/* 514 */
	{373,511,455,504,508,201},	/* 515 */
	{412,515,509,386,499,436},	/* 516 */
	{507,513,279,242,421,172},	/* 517 */
	{325,474,481,471,369,479},	/* 518 */
	{469,435,512,498,502,354},	/* 519 */
	{457,286,395,233,432,377},	/* 520 */
	{308,184, 45,510,504,  3},	/* 521 */
	{521,463,515,511,252,358},	/* 522 */
	{512,454,358,472,237,182},	/* 523 */
	{453,509,517,513,507,  9},	/* 524 */
	{308,437,431,326,496,393},	/* 525 */
	{525,522,423,502,366, 51},	/* 526 */
	{396,168,523,358,484,500},	/* 527 */
	{462,524,521,502,449,280},	/* 528 */
	{528,250,457,216,524,274},	/* 529 */
	{496,526, 59,246,438,344},	/* 530 */
	{525,458,394,232,281,369},	/* 531 */
	{421,104,133,521,516,257},	/* 532 */
	{532,530,265,522,499,553},	/* 533 */
	{480,454,401,447,303,422},	/* 534 */
	{534,531,523,463,521,496},	/* 535 */
	{535,532,529,224,519,244},	/* 536 */
	{522,533,530,492,520,353},	/* 537 */
	{446,351,531,302,430,473},	/* 538 */
	{456,132,445, 57,488,573},	/* 539 */
	{471,536,525,477,523,283},	/* 540 */
	{540,537,439,530,496,190},	/* 541 */
	{453,510,535,400,463,435},	/* 542 */
	{542,539,536,532,526,152},	/* 543 */
	{518,430,357,368,291,207},	/* 544 */
	{531,436,538,534,528, 10},	/* 545 */
	{295,402,539,535,429,450},	/* 546 */
	{546,409,516,384,399,154},	/* 547 */
	{467,544,540, 85,104,366},	/* 548 */
	{517,533,479,294,519,456},	/* 549 */
	{461,527,522,369,532, 63},	/* 550 */
	{537,392,373,544,199,387},	/* 551 */
	{473,388,542,452,519,501},	/* 552 */
	{535,488,197,542,536, 27},	/* 553 */
	{553,550,541,543,233,312},	/* 554 */
	{417,478,410,544,520,341},	/* 555 */
	{555,552,549,545,551,474},	/* 556 */
	{556,553,549,546,540,507},	/* 557 */
	{392,500,470,547,132,  2},	/* 558 */
	{510,321,456,548,459,406},	/* 559 */
	{370,339,553,343,503,410},	/* 560 */
	{560,398,557,353,554,374},	/* 561 */
	{530,407,555,551,545,429},	/* 562 */
	{562,559,556,552,546,243},	/* 563 */
	{335,548,557,553,560,281},	/* 564 */
	{564,561,558,554,553,295},	/* 565 */
	{449,529,192,543,307, 39},	/* 566 */
	{566,529,524,374,550,419},	/* 567 */
	{550,444,460,538,472,348},	/* 568 */
	{559,417,473,527,544,407},	/* 569 */
	{569,566,563,552,374,234},	/* 570 */
	{570,390,564,560,554, 45},	/* 571 */
	{551,571,398,561,500,246},	/* 572 */
	{572,569,566,562,556, 16},	/* 573 */
	{457,570,567,563,557, 47},	/* 574 */
	{574,571,568,564,558,141},	/* 575 */
	{456,470,528,572,396,304},	/* 576 */
	{576,524,456,559,560,439},	/* 577 */
	{577,574,571,567,561,123},	/* 578 */
	{549,517,484,568,562,102},	/* 579 */
	{579,570,567,458,506,428},	/* 580 */
	{580,344,576,123,575,392},	/* 581 */
	{581,283,148,539,578,432},	/* 582 */
	{492,466,462,572,578,549},	/* 583 */
	{372,580,583,573,581,471},	/* 584 */
	{483,578,410,574,579,235},	/* 585 */
	{575,582,207,377,344, 99},	/* 586 */
};

/* VEST-32 root cipher family */

static const u32	provest_32[vest_32_family_words] =
{
	/* RNS counters indexes (rns) */
	  0, 16, 17, 18,  1, 19, 20,  2,  3,  4,  5,  6,  7,  8,  9, 10,
	
	/* Feedback functions indexes (vest_f) */
	404,405,406,407,408,409,410,411,412,413,414,415,416,417,418,419,420,421,422,423,
	424,425,426,427,428,429,430,431,432,433,434,435,436,437,438,439,440,441,442,443,
	444,445,446,447,448,449,450,451,452,453,454,455,456,457,458,459,460,461,462,463,
	464,465,466,467,468,469,470,471,472,473,474,475,476,477,478,479,480,481,482,483,
	484,485,486,487,488,489,490,491,492,493,494,495,496,497,498,499,500,501,502,503,
	504,505,506,507,508,509,510,511,512,513,514,515,516,517,518,519,520,521,522,523,
	524,525,526,527,528,529,530,531,532,533,534,535,536,537,538,539,540,541,542,543,
	544,545,546,547,548,549,550,551,552,553,554,555,556,557,558,559,560,561,562,563,
	564,565,566,567,568,569,570,571,572,573,574,575,576,577,578,579,580,581,582,583,
	584,585,586,587,588,589,590,591,592,593,594,595,596,597,598,599,600,601,602,603,
	604,605,606,607,608,609,610,611,612,613,614,615,616,617,618,619,620,621,622,623,
	624,625,626,627,628,629,630,631,632,633,634,635,636,637,638,639,640,641,642,643,
	644,645,646,647,648,649,650,651,652,653,654,655,656,657,658,659,660,661,662,663,
	664,665,666,667,668,669,670,671,672,673,674,675,676,677,678,679,680,681,682,683,
	684,685,686,687,688,689,690,691,692,693,694,695,696,697,698,699,700,701,702,703,
	704,705,706,707,708,709,710,711,712,713,714,715,716,717,718,719,720,721,722,723,
	724,725,726,727,728,729,730,731,732,733,734,735,736,737,738,739,740,741,742,743,
	744,745,746,747,748,749,750,751,752,753,754,755,756,757,758,759,760,761,762,763,
	764,765,766,767,768,769,770,771,772,773,774,775,776,777,778,779,780,781,782,783,
	784,785,786,787,788,789,790,791,792,793,794,795,796,797,798,799,800,801,802,803,
	804,805,806,807,808,809,810,811,812,813,814,815,816,817,818,819,820,821,822,823,
	824,825,826,827,828,829,830,831,832,833,834,835,836,837,838,839,840,841,842,843,
	844,845,846,847,848,849,850,851,852,853,854,855,856,857,858,859,860,861,862,863,
	864,865,866,867,868,869,870,871,872,873,874,875,876,877,878,879,880,881,882,883,
	884,885,886,887,888,889,890,891,892,893,894,895,896,897,898,899,900,901,902,903,
	904,905,906,907,908,909,910,911,912,913,914,915,916,917,918,919,920,921,922,923,
	924,925,926,927,928,929,930,931,932,933,934,935,936,937,938,939,940,941,942,943,
	944,945,946,947,948,949,950,951,952,953,954,955,956,957,958,959,960,961,962,963,
	964,965,966,967,968,969,970,971,972,973,974,975,976,977,978,979,780,981,982,983,
	984,985,
	
	/* Input bit permutation indexes (p5) */
	 15, 60, 99, 94, 56, 42, 89, 46, 96,114, 36, 92,106, 85, 66, 76, 93, 31,105, 44,
	 25,112,113,103,111, 58, 78, 12, 34,  0, 32, 54, 80, 82,118, 72, 49, 20,115, 81,
	 39, 38, 73, 90, 77, 16,109, 10, 84, 14, 83, 21, 11,  4, 41, 98,  6,117, 19, 74,
	 70,101, 95, 86,119, 59, 69,110, 75,  8,  5,104, 27, 71, 48, 13, 37, 30, 35,108,
	 53, 50, 45, 61, 47, 52, 33,102, 67, 18,116, 55, 65, 51, 24, 97,107, 63,  3, 68,
	 40, 43,  9,  1, 57, 88, 87,  2,  7, 17, 29, 23, 26,100, 62, 22, 79, 64, 91, 28,
	101, 92, 24, 53, 97, 78,108,116, 80, 86, 81, 71,114, 50, 40, 89, 47, 42, 59, 77,
	 69,105, 72, 57, 19, 36, 17, 16, 55, 99, 56,106, 26,110, 85, 13,119, 82, 88, 70,
	102, 22, 84, 32, 30,  3, 64, 74, 25,118,  6, 37, 43, 46,100, 79,  1, 73, 12,  9,
	 68, 23, 93, 66, 27, 60, 95, 31,112, 90, 33, 94, 87, 45, 18, 21, 96, 38, 63,117,
	  5, 48,  8,103,107,  0, 76, 62,111,115, 44, 20, 39, 83, 15, 10,  7,  2, 29, 58,
	 61, 67,104, 51,  4, 91,113, 49, 98, 54, 34, 35, 11, 75, 14, 52,109, 65, 28, 41,
	  0, 86, 69, 83, 84, 45, 51, 50, 32, 67,105,112,104,101,114, 32, 70, 97,109,105,
	108,121, 32, 84,114,101,101, 10, 68,101,115,105,103,110,101,100, 32, 98,121, 32,
	 83,101, 97,110, 32, 79, 39, 78,101,105,108, 10, 67, 66, 32, 67, 97,112,105,116,
	 97,108, 32, 77, 97,110, 97,103,101,109,101,110,116, 32, 83, 46, 65, 46,  0, 90,
	102,100, 73, 75, 60, 17, 26, 84, 67, 19,  0, 61, 57, 85, 32,115, 40,  4, 76, 46,
	  2, 83, 77, 36,116, 12, 81,103, 11, 16,113, 55, 27, 94,106, 51, 79,  3, 56, 30,
	 39,112, 29, 66, 69, 74, 10,101, 43, 28,107, 98, 91, 80, 88, 87, 47, 21,118,114,
	  8, 37, 68, 93, 70, 49, 33, 50, 58, 52, 22, 38, 14, 45, 62, 25, 54,105,119,  6,
	 18, 34,  1, 23, 35, 53,109, 96,117, 64, 63,111,108, 24, 48, 78,  5, 15, 89, 42,
	 92, 97, 41, 20, 86,  7, 13, 71, 65, 99, 59,  9, 82,110, 72, 95, 44, 31,104, 13,
	 89,112, 37, 17,106, 55, 81,  5,107, 29,103, 11, 50, 66, 22, 93, 41, 47, 62, 88,
	 79, 60, 82, 49, 18, 87,  2, 23, 99, 25, 76, 45, 16, 57, 68, 64,116, 58, 97,102,
	 36, 65, 92, 30, 48, 19,118,117, 85, 96, 69, 95, 86,  9, 34,108, 98, 28, 72, 70,
	 80, 74, 33, 15, 94, 31,  8, 21, 56, 12,  1, 67, 84, 63, 59,113, 14,100, 24, 78,
	 27, 43,110, 39,  0,111,104, 53, 32, 73,101, 35,115,  7,  3, 77, 44,105, 91, 54,
	 83, 42, 75,119, 90, 20,  6, 26, 10,114,  4,109, 38, 52, 71, 40, 51, 61, 46,  2,
	  3,  5,  7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73,
	 79, 83
};