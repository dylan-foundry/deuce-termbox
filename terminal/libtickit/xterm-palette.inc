static struct {
  unsigned int as16 : 4;
  unsigned int as8 : 3;
} xterm256[] = {
  // 0 - 7
  {  0, 0 }, {  1, 1 }, {  2, 2 }, {  3, 3 }, {  4, 4 }, {  5, 5 }, {  6, 6 }, {  7, 7 }, 
  // 8 - 15
  {  8, 3 }, {  9, 1 }, { 10, 2 }, { 11, 3 }, { 12, 4 }, { 13, 5 }, { 14, 6 }, { 15, 7 }, 
  // 16 - 23
  {  0, 0 }, {  0, 0 }, {  4, 4 }, {  4, 4 }, {  4, 4 }, {  4, 4 }, {  0, 0 }, {  0, 0 }, 
  // 24 - 31
  {  6, 6 }, {  4, 4 }, {  4, 4 }, { 12, 4 }, {  2, 2 }, {  2, 2 }, {  6, 6 }, {  6, 6 }, 
  // 32 - 39
  {  6, 6 }, {  6, 6 }, {  2, 2 }, {  2, 2 }, {  6, 6 }, {  6, 6 }, {  6, 6 }, {  6, 6 }, 
  // 40 - 47
  {  2, 2 }, {  2, 2 }, {  6, 6 }, {  6, 6 }, {  6, 6 }, { 14, 6 }, { 10, 2 }, { 10, 2 }, 
  // 48 - 55
  {  6, 6 }, {  6, 6 }, { 14, 6 }, { 14, 6 }, {  0, 0 }, {  0, 0 }, {  5, 5 }, {  4, 4 }, 
  // 56 - 63
  {  4, 4 }, { 12, 4 }, {  0, 0 }, {  8, 0 }, {  8, 5 }, {  8, 4 }, { 12, 4 }, { 12, 4 }, 
  // 64 - 71
  {  2, 2 }, {  8, 2 }, {  8, 6 }, {  8, 6 }, { 12, 6 }, { 12, 6 }, {  2, 2 }, {  8, 2 }, 
  // 72 - 79
  {  8, 6 }, {  8, 6 }, { 12, 6 }, { 12, 6 }, {  2, 2 }, {  8, 2 }, {  8, 6 }, {  6, 6 }, 
  // 80 - 87
  {  6, 6 }, { 14, 6 }, { 10, 2 }, { 10, 2 }, {  6, 6 }, {  6, 6 }, { 14, 6 }, { 14, 6 }, 
  // 88 - 95
  {  1, 1 }, {  1, 1 }, {  5, 5 }, {  5, 5 }, {  5, 5 }, {  5, 5 }, {  1, 1 }, {  8, 1 }, 
  // 96 - 103
  {  8, 5 }, {  8, 5 }, { 12, 5 }, { 12, 5 }, {  3, 3 }, {  8, 3 }, {  8, 7 }, {  8, 7 }, 
  // 104 - 111
  { 12, 7 }, { 12, 7 }, {  3, 3 }, {  8, 3 }, {  8, 7 }, {  8, 7 }, {  8, 7 }, { 12, 7 }, 
  // 112 - 119
  {  3, 3 }, {  8, 3 }, {  8, 7 }, {  8, 7 }, {  7, 7 }, {  7, 7 }, {  3, 3 }, {  3, 3 }, 
  // 120 - 127
  {  8, 7 }, {  7, 7 }, {  7, 7 }, {  7, 7 }, {  1, 1 }, {  1, 1 }, {  5, 5 }, {  5, 5 }, 
  // 128 - 135
  {  5, 5 }, {  5, 5 }, {  1, 1 }, {  8, 1 }, {  8, 5 }, {  8, 5 }, { 12, 5 }, { 12, 5 }, 
  // 136 - 143
  {  3, 3 }, {  8, 3 }, {  8, 7 }, {  8, 7 }, {  8, 7 }, { 12, 7 }, {  3, 3 }, {  8, 3 }, 
  // 144 - 151
  {  8, 7 }, {  8, 7 }, {  7, 7 }, {  7, 7 }, {  3, 3 }, {  3, 3 }, {  8, 7 }, {  7, 7 }, 
  // 152 - 159
  {  7, 7 }, {  7, 7 }, {  3, 3 }, {  3, 3 }, {  7, 7 }, {  7, 7 }, {  7, 7 }, {  7, 7 }, 
  // 160 - 167
  {  1, 1 }, {  1, 1 }, {  5, 5 }, {  5, 5 }, {  5, 5 }, { 13, 5 }, {  1, 1 }, {  8, 1 }, 
  // 168 - 175
  {  8, 5 }, {  5, 5 }, {  5, 5 }, { 13, 5 }, {  3, 3 }, {  8, 3 }, {  8, 7 }, {  8, 7 }, 
  // 176 - 183
  {  7, 7 }, {  7, 7 }, {  3, 3 }, {  3, 3 }, {  8, 7 }, {  7, 7 }, {  7, 7 }, {  7, 7 }, 
  // 184 - 191
  {  3, 3 }, {  3, 3 }, {  7, 7 }, {  7, 7 }, {  7, 7 }, {  7, 7 }, { 11, 3 }, { 11, 3 }, 
  // 192 - 199
  {  7, 7 }, {  7, 7 }, {  7, 7 }, {  7, 7 }, {  9, 1 }, {  9, 1 }, {  5, 5 }, {  5, 5 }, 
  // 200 - 207
  { 13, 5 }, { 13, 5 }, {  9, 1 }, {  9, 1 }, {  5, 5 }, {  5, 5 }, { 13, 5 }, { 13, 5 }, 
  // 208 - 215
  {  3, 3 }, {  3, 3 }, {  8, 7 }, {  7, 7 }, {  7, 7 }, {  7, 7 }, {  3, 3 }, {  3, 3 }, 
  // 216 - 223
  {  7, 7 }, {  7, 7 }, {  7, 7 }, {  7, 7 }, { 11, 3 }, { 11, 3 }, {  7, 7 }, {  7, 7 }, 
  // 224 - 231
  {  7, 7 }, {  7, 7 }, { 11, 3 }, { 11, 3 }, {  7, 7 }, {  7, 7 }, {  7, 7 }, { 15, 7 }, 
  // 232 - 239
  {  0, 0 }, {  0, 0 }, {  0, 0 }, {  0, 0 }, {  0, 0 }, {  0, 0 }, {  8, 0 }, {  8, 0 }, 
  // 240 - 247
  {  8, 0 }, {  8, 0 }, {  8, 0 }, {  8, 7 }, {  8, 7 }, {  8, 7 }, {  8, 7 }, {  8, 7 }, 
  // 248 - 255
  {  8, 7 }, {  8, 7 }, {  7, 7 }, {  7, 7 }, {  7, 7 }, {  7, 7 }, {  7, 7 }, {  7, 7 }, 
};