
#line 1 "lexer.rl"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

#include "parse.h"
#include "parser.h"
#include "../query_node.h"
#include "../stopwords.h"

/* forward declarations of stuff generated by lemon */
void RSQuery_Parse(void *yyp, int yymajor, QueryToken yyminor, QueryParseCtx *ctx);
void *RSQuery_ParseAlloc(void *(*mallocProc)(size_t));
void RSQuery_ParseFree(void *p, void (*freeProc)(void *));


#line 194 "lexer.rl"



#line 25 "lexer.c"
static const char _query_actions[] = {
	0, 1, 0, 1, 1, 1, 2, 1, 
	9, 1, 10, 1, 11, 1, 12, 1, 
	13, 1, 14, 1, 15, 1, 16, 1, 
	17, 1, 18, 1, 19, 1, 20, 1, 
	21, 1, 22, 1, 23, 1, 24, 1, 
	25, 1, 26, 1, 27, 1, 28, 1, 
	29, 1, 30, 2, 2, 3, 2, 2, 
	4, 2, 2, 5, 2, 2, 6, 2, 
	2, 7, 2, 2, 8
};

static const char _query_key_offsets[] = {
	0, 10, 11, 12, 14, 24, 58, 69, 
	70, 73, 76, 78, 92, 102, 112, 124
};

static const char _query_trans_keys[] = {
	9, 13, 32, 47, 58, 64, 91, 96, 
	123, 126, 110, 102, 48, 57, 9, 13, 
	32, 47, 58, 64, 91, 96, 123, 126, 
	32, 34, 39, 40, 41, 42, 43, 45, 
	58, 64, 91, 92, 93, 95, 105, 123, 
	124, 125, 126, 127, 0, 8, 9, 13, 
	14, 31, 33, 47, 48, 57, 59, 63, 
	94, 96, 42, 92, 96, 0, 47, 58, 
	64, 91, 94, 123, 127, 105, 105, 48, 
	57, 46, 48, 57, 48, 57, 42, 46, 
	92, 96, 0, 47, 48, 57, 58, 64, 
	91, 94, 123, 127, 92, 96, 0, 47, 
	58, 64, 91, 94, 123, 127, 9, 13, 
	32, 47, 58, 64, 91, 96, 123, 126, 
	42, 92, 96, 110, 0, 47, 58, 64, 
	91, 94, 123, 127, 42, 92, 96, 102, 
	0, 47, 58, 64, 91, 94, 123, 127, 
	0
};

static const char _query_single_lengths[] = {
	0, 1, 1, 0, 0, 20, 3, 1, 
	1, 1, 0, 4, 2, 0, 4, 4
};

static const char _query_range_lengths[] = {
	5, 0, 0, 1, 5, 7, 4, 0, 
	1, 1, 1, 5, 4, 5, 4, 4
};

static const char _query_index_offsets[] = {
	0, 6, 8, 10, 12, 18, 46, 54, 
	56, 59, 62, 64, 74, 81, 87, 96
};

static const char _query_indicies[] = {
	1, 1, 1, 1, 1, 0, 2, 0, 
	3, 0, 5, 4, 6, 6, 6, 6, 
	6, 0, 8, 10, 11, 12, 13, 14, 
	11, 15, 17, 18, 19, 20, 21, 22, 
	23, 24, 25, 26, 27, 7, 7, 8, 
	7, 9, 16, 9, 9, 1, 28, 29, 
	0, 0, 0, 0, 0, 1, 31, 30, 
	31, 33, 32, 35, 33, 34, 5, 34, 
	28, 35, 29, 34, 34, 16, 34, 34, 
	34, 1, 36, 0, 0, 0, 0, 0, 
	6, 1, 1, 1, 1, 1, 30, 28, 
	29, 37, 38, 37, 37, 37, 37, 1, 
	28, 29, 37, 39, 37, 37, 37, 37, 
	1, 0
};

static const char _query_trans_targs[] = {
	5, 6, 2, 5, 5, 10, 12, 5, 
	5, 5, 5, 7, 5, 5, 5, 8, 
	11, 5, 12, 5, 13, 5, 6, 14, 
	5, 5, 5, 5, 5, 0, 5, 1, 
	5, 9, 5, 3, 4, 5, 15, 6
};

static const char _query_trans_actions[] = {
	49, 66, 0, 7, 47, 0, 54, 35, 
	31, 33, 9, 63, 13, 15, 25, 60, 
	51, 21, 63, 27, 0, 29, 63, 66, 
	17, 11, 19, 23, 37, 0, 43, 0, 
	41, 5, 39, 0, 0, 45, 66, 57
};

static const char _query_to_state_actions[] = {
	0, 0, 0, 0, 0, 1, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0
};

static const char _query_from_state_actions[] = {
	0, 0, 0, 0, 0, 3, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0
};

static const char _query_eof_trans[] = {
	1, 1, 1, 5, 1, 0, 1, 31, 
	33, 35, 35, 35, 1, 31, 38, 38
};

static const int query_start = 5;
static const int query_first_final = 5;
static const int query_error = -1;

static const int query_en_main = 5;


#line 197 "lexer.rl"



QueryNode *Query_Parse(QueryParseCtx *q, char **err) {
  void *pParser = RSQuery_ParseAlloc(malloc);

  
  int cs, act;
  const char* ts = q->raw;
  const char* te = q->raw + q->len;
  
#line 146 "lexer.c"
	{
	cs = query_start;
	ts = 0;
	te = 0;
	act = 0;
	}

#line 208 "lexer.rl"
  QueryToken tok = {.len = 0, .pos = 0, .s = 0};
  
  //parseCtx ctx = {.root = NULL, .ok = 1, .errorMsg = NULL, .q = q};
  const char* p = q->raw;
  const char* pe = q->raw + q->len;
  const char* eof = pe;
  
  
#line 163 "lexer.c"
	{
	int _klen;
	unsigned int _trans;
	const char *_acts;
	unsigned int _nacts;
	const char *_keys;

	if ( p == pe )
		goto _test_eof;
_resume:
	_acts = _query_actions + _query_from_state_actions[cs];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 ) {
		switch ( *_acts++ ) {
	case 1:
#line 1 "NONE"
	{ts = p;}
	break;
#line 182 "lexer.c"
		}
	}

	_keys = _query_trans_keys + _query_key_offsets[cs];
	_trans = _query_index_offsets[cs];

	_klen = _query_single_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + _klen - 1;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + ((_upper-_lower) >> 1);
			if ( (*p) < *_mid )
				_upper = _mid - 1;
			else if ( (*p) > *_mid )
				_lower = _mid + 1;
			else {
				_trans += (unsigned int)(_mid - _keys);
				goto _match;
			}
		}
		_keys += _klen;
		_trans += _klen;
	}

	_klen = _query_range_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + (_klen<<1) - 2;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + (((_upper-_lower) >> 1) & ~1);
			if ( (*p) < _mid[0] )
				_upper = _mid - 2;
			else if ( (*p) > _mid[1] )
				_lower = _mid + 2;
			else {
				_trans += (unsigned int)((_mid - _keys)>>1);
				goto _match;
			}
		}
		_trans += _klen;
	}

_match:
	_trans = _query_indicies[_trans];
_eof_trans:
	cs = _query_trans_targs[_trans];

	if ( _query_trans_actions[_trans] == 0 )
		goto _again;

	_acts = _query_actions + _query_trans_actions[_trans];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 )
	{
		switch ( *_acts++ )
		{
	case 2:
#line 1 "NONE"
	{te = p+1;}
	break;
	case 3:
#line 44 "lexer.rl"
	{act = 1;}
	break;
	case 4:
#line 56 "lexer.rl"
	{act = 2;}
	break;
	case 5:
#line 65 "lexer.rl"
	{act = 3;}
	break;
	case 6:
#line 128 "lexer.rl"
	{act = 11;}
	break;
	case 7:
#line 164 "lexer.rl"
	{act = 17;}
	break;
	case 8:
#line 166 "lexer.rl"
	{act = 19;}
	break;
	case 9:
#line 65 "lexer.rl"
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    tok.s = ts;
    tok.len = te-ts;
    
    tok.numval = *ts == '-' ? -INFINITY : INFINITY;
    RSQuery_Parse(pParser, NUMBER, tok, q);
    if (!q->ok) {
      {p++; goto _out; }
    }
  }}
	break;
	case 10:
#line 77 "lexer.rl"
	{te = p+1;{
    tok.pos = ts-q->raw;
    RSQuery_Parse(pParser, QUOTE, tok, q);  
    if (!q->ok) {
      {p++; goto _out; }
    }
  }}
	break;
	case 11:
#line 84 "lexer.rl"
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse(pParser, OR, tok, q);
    if (!q->ok) {
      {p++; goto _out; }
    }
  }}
	break;
	case 12:
#line 91 "lexer.rl"
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse(pParser, LP, tok, q);
    if (!q->ok) {
      {p++; goto _out; }
    }
  }}
	break;
	case 13:
#line 98 "lexer.rl"
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse(pParser, RP, tok, q);
    if (!q->ok) {
      {p++; goto _out; }
    }
  }}
	break;
	case 14:
#line 105 "lexer.rl"
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse(pParser, LB, tok, q);
    if (!q->ok) {
      {p++; goto _out; }
    }
  }}
	break;
	case 15:
#line 112 "lexer.rl"
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse(pParser, RB, tok, q);
    if (!q->ok) {
      {p++; goto _out; }
    }
  }}
	break;
	case 16:
#line 119 "lexer.rl"
	{te = p+1;{ 
     tok.pos = ts-q->raw;
     RSQuery_Parse(pParser, COLON, tok, q);
     if (!q->ok) {
      {p++; goto _out; }
    }
   }}
	break;
	case 17:
#line 135 "lexer.rl"
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse(pParser, TILDE, tok, q);  
    if (!q->ok) {
      {p++; goto _out; }
    }
  }}
	break;
	case 18:
#line 142 "lexer.rl"
	{te = p+1;{
    tok.pos = ts-q->raw;
    RSQuery_Parse(pParser, STAR, tok, q);
    if (!q->ok) {
      {p++; goto _out; }
    }
  }}
	break;
	case 19:
#line 149 "lexer.rl"
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse(pParser, LSQB, tok, q);  
    if (!q->ok) {
      {p++; goto _out; }
    }  
  }}
	break;
	case 20:
#line 156 "lexer.rl"
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse(pParser, RSQB, tok, q);   
    if (!q->ok) {
      {p++; goto _out; }
    } 
  }}
	break;
	case 21:
#line 163 "lexer.rl"
	{te = p+1;}
	break;
	case 22:
#line 164 "lexer.rl"
	{te = p+1;}
	break;
	case 23:
#line 165 "lexer.rl"
	{te = p+1;}
	break;
	case 24:
#line 180 "lexer.rl"
	{te = p+1;{
    tok.len = te-ts - 1;
    tok.s = ts;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    
    RSQuery_Parse(pParser, PREFIX, tok, q);
    
    if (!q->ok) {
      {p++; goto _out; }
    }
  }}
	break;
	case 25:
#line 44 "lexer.rl"
	{te = p;p--;{ 
    tok.s = ts;
    tok.len = te-ts;
    char *ne = (char*)te;
    tok.numval = strtod(tok.s, &ne);
    tok.pos = ts-q->raw;
    RSQuery_Parse(pParser, NUMBER, tok, q);
    if (!q->ok) {
      {p++; goto _out; }
    }
    
  }}
	break;
	case 26:
#line 128 "lexer.rl"
	{te = p;p--;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse(pParser, MINUS, tok, q);  
    if (!q->ok) {
      {p++; goto _out; }
    }
  }}
	break;
	case 27:
#line 164 "lexer.rl"
	{te = p;p--;}
	break;
	case 28:
#line 166 "lexer.rl"
	{te = p;p--;{
    tok.len = te-ts;
    tok.s = ts;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    if (!StopWordList_Contains(q->stopwords, tok.s, tok.len)) {
      RSQuery_Parse(pParser, TERM, tok, q);
    } else {
      RSQuery_Parse(pParser, STOPWORD, tok, q);
    }
    if (!q->ok) {
      {p++; goto _out; }
    }
  }}
	break;
	case 29:
#line 44 "lexer.rl"
	{{p = ((te))-1;}{ 
    tok.s = ts;
    tok.len = te-ts;
    char *ne = (char*)te;
    tok.numval = strtod(tok.s, &ne);
    tok.pos = ts-q->raw;
    RSQuery_Parse(pParser, NUMBER, tok, q);
    if (!q->ok) {
      {p++; goto _out; }
    }
    
  }}
	break;
	case 30:
#line 1 "NONE"
	{	switch( act ) {
	case 1:
	{{p = ((te))-1;} 
    tok.s = ts;
    tok.len = te-ts;
    char *ne = (char*)te;
    tok.numval = strtod(tok.s, &ne);
    tok.pos = ts-q->raw;
    RSQuery_Parse(pParser, NUMBER, tok, q);
    if (!q->ok) {
      {p++; goto _out; }
    }
    
  }
	break;
	case 2:
	{{p = ((te))-1;}
    tok.pos = ts-q->raw;
    tok.len = te - (ts + 1);
    tok.s = ts+1;
    RSQuery_Parse(pParser, MODIFIER, tok, q);
    if (!q->ok) {
      {p++; goto _out; }
    }
  }
	break;
	case 3:
	{{p = ((te))-1;} 
    tok.pos = ts-q->raw;
    tok.s = ts;
    tok.len = te-ts;
    
    tok.numval = *ts == '-' ? -INFINITY : INFINITY;
    RSQuery_Parse(pParser, NUMBER, tok, q);
    if (!q->ok) {
      {p++; goto _out; }
    }
  }
	break;
	case 11:
	{{p = ((te))-1;} 
    tok.pos = ts-q->raw;
    RSQuery_Parse(pParser, MINUS, tok, q);  
    if (!q->ok) {
      {p++; goto _out; }
    }
  }
	break;
	case 19:
	{{p = ((te))-1;}
    tok.len = te-ts;
    tok.s = ts;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    if (!StopWordList_Contains(q->stopwords, tok.s, tok.len)) {
      RSQuery_Parse(pParser, TERM, tok, q);
    } else {
      RSQuery_Parse(pParser, STOPWORD, tok, q);
    }
    if (!q->ok) {
      {p++; goto _out; }
    }
  }
	break;
	default:
	{{p = ((te))-1;}}
	break;
	}
	}
	break;
#line 560 "lexer.c"
		}
	}

_again:
	_acts = _query_actions + _query_to_state_actions[cs];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 ) {
		switch ( *_acts++ ) {
	case 0:
#line 1 "NONE"
	{ts = 0;}
	break;
#line 573 "lexer.c"
		}
	}

	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	if ( p == eof )
	{
	if ( _query_eof_trans[cs] > 0 ) {
		_trans = _query_eof_trans[cs] - 1;
		goto _eof_trans;
	}
	}

	_out: {}
	}

#line 216 "lexer.rl"
  

  if (q->ok) {
    RSQuery_Parse(pParser, 0, tok, q);
  }
  RSQuery_ParseFree(pParser, free);
  if (err) {
    *err = q->errorMsg;
  }

 
  return q->root;
}

