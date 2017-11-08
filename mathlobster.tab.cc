// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.
#line 1 "mathlobster.yy" // lalr1.cc:404

	#include <cstdlib>
	#include <cmath>
	#include <map>
	#include <string>
	#include <iostream>

	std::map <std::string,double> var;

	extern int yylex ();
	void yyerror(std::string s) {
		std::cout << s << std::endl;
	}

#line 51 "mathlobster.tab.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "mathlobster.tab.hh"

// User implementation prologue.

#line 65 "mathlobster.tab.cc" // lalr1.cc:412


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif



// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 132 "mathlobster.tab.cc" // lalr1.cc:479

  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
     :yydebug_ (false),
      yycdebug_ (&std::cerr)
#endif
  {}

  parser::~parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/

  inline
  parser::syntax_error::syntax_error (const std::string& m)
    : std::runtime_error (m)
  {}

  // basic_symbol.
  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol ()
    : value ()
  {}

  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol (const basic_symbol& other)
    : Base (other)
    , value ()
  {
    value = other.value;
  }


  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const semantic_type& v)
    : Base (t)
    , value (v)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t)
    : Base (t)
    , value ()
  {}

  template <typename Base>
  inline
  parser::basic_symbol<Base>::~basic_symbol ()
  {
    clear ();
  }

  template <typename Base>
  inline
  void
  parser::basic_symbol<Base>::clear ()
  {
    Base::clear ();
  }

  template <typename Base>
  inline
  bool
  parser::basic_symbol<Base>::empty () const
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  inline
  void
  parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move(s);
    value = s.value;
  }

  // by_type.
  inline
  parser::by_type::by_type ()
    : type (empty_symbol)
  {}

  inline
  parser::by_type::by_type (const by_type& other)
    : type (other.type)
  {}

  inline
  parser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
  parser::by_type::clear ()
  {
    type = empty_symbol;
  }

  inline
  void
  parser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  inline
  int
  parser::by_type::type_get () const
  {
    return type;
  }


  // by_state.
  inline
  parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  parser::symbol_number_type
  parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s)
  {
    value = that.value;
    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    return *this;
  }


  template <typename Base>
  inline
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    YYUSE (yysym.type_get ());
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " (";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            yyla.type = yytranslate_ (yylex (&yyla.value));
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;


      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 5:
#line 61 "mathlobster.yy" // lalr1.cc:859
    { std::cout << std::endl << "Result : " << (yystack_[1].value.dval) << std::endl; }
#line 557 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 6:
#line 62 "mathlobster.yy" // lalr1.cc:859
    { var.insert(std::pair((yystack_[2].value.sval),(yystack_[0].value.dval))); }
#line 563 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 7:
#line 66 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = (yystack_[0].value.dval);				/* std::cout << $1 << std::endl; */ }
#line 569 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 8:
#line 67 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = var[(yystack_[0].value.sval)]; }
#line 575 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 9:
#line 68 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = (yystack_[1].value.dval); }
#line 581 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 10:
#line 69 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = (yystack_[2].value.dval) + (yystack_[0].value.dval);			std::cout << (yystack_[2].value.dval) << "+" << (yystack_[0].value.dval) << "=" << (yylhs.value.dval) << std::endl; }
#line 587 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 11:
#line 70 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = (yystack_[2].value.dval) - (yystack_[0].value.dval);			std::cout << (yystack_[2].value.dval) << "-" << (yystack_[0].value.dval) << "=" << (yylhs.value.dval) << std::endl; }
#line 593 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 12:
#line 71 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = (yystack_[2].value.dval) * (yystack_[0].value.dval);			std::cout << (yystack_[2].value.dval) << "*" << (yystack_[0].value.dval) << "=" << (yylhs.value.dval) << std::endl; }
#line 599 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 13:
#line 72 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = (yystack_[2].value.dval) / (yystack_[0].value.dval);			std::cout << (yystack_[2].value.dval) << "/" << (yystack_[0].value.dval) << "=" << (yylhs.value.dval) << std::endl; }
#line 605 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 14:
#line 73 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = (yystack_[2].value.dval) ^ (yystack_[0].value.dval);			std::cout << (yystack_[2].value.dval) << "^" << (yystack_[0].value.dval) << "=" << (yylhs.value.dval) << std::endl; }
#line 611 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 15:
#line 74 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = pow((yystack_[3].value.dval), (yystack_[1].value.dval));		std::cout << (yystack_[3].value.dval) << "^" << (yystack_[1].value.dval) << "=" << (yylhs.value.dval) << std::endl; }
#line 617 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 16:
#line 75 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = sin((yystack_[1].value.dval));			std::cout <<  "sin (" << (yystack_[1].value.dval) << ") = " << (yylhs.value.dval) << std::endl; }
#line 623 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 17:
#line 76 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = asin((yystack_[1].value.dval));		std::cout << "asin (" << (yystack_[1].value.dval) << ") = " << (yylhs.value.dval) << std::endl; }
#line 629 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 18:
#line 77 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = sinh((yystack_[1].value.dval));		std::cout << "sinh (" << (yystack_[1].value.dval) << ") = " << (yylhs.value.dval) << std::endl; }
#line 635 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 19:
#line 78 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = cos((yystack_[1].value.dval));			std::cout <<  "cos (" << (yystack_[1].value.dval) << ") = " << (yylhs.value.dval) << std::endl; }
#line 641 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 20:
#line 79 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = acos((yystack_[1].value.dval));		std::cout << "acos (" << (yystack_[1].value.dval) << ") = " << (yylhs.value.dval) << std::endl; }
#line 647 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 21:
#line 80 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = cosh((yystack_[1].value.dval));		std::cout << "cosh (" << (yystack_[1].value.dval) << ") = " << (yylhs.value.dval) << std::endl; }
#line 653 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 22:
#line 81 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = tan((yystack_[1].value.dval));			std::cout <<  "tan (" << (yystack_[1].value.dval) << ") = " << (yylhs.value.dval) << std::endl; }
#line 659 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 23:
#line 82 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = atan((yystack_[1].value.dval));		std::cout << "atan (" << (yystack_[1].value.dval) << ") = " << (yylhs.value.dval) << std::endl; }
#line 665 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 24:
#line 83 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = tanh((yystack_[1].value.dval));		std::cout << "tanh (" << (yystack_[1].value.dval) << ") = " << (yylhs.value.dval) << std::endl; }
#line 671 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 25:
#line 84 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = exp((yystack_[1].value.dval));			std::cout <<  "exp (" << (yystack_[1].value.dval) << ") = " << (yylhs.value.dval) << std::endl; }
#line 677 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 26:
#line 85 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = sqrt((yystack_[1].value.dval));		std::cout << "sqrt (" << (yystack_[1].value.dval) << ") = " << (yylhs.value.dval) << std::endl; }
#line 683 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 27:
#line 86 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = log((yystack_[1].value.dval));			std::cout <<   "ln (" << (yystack_[1].value.dval) << ") = " << (yylhs.value.dval) << std::endl; }
#line 689 "mathlobster.tab.cc" // lalr1.cc:859
    break;

  case 28:
#line 87 "mathlobster.yy" // lalr1.cc:859
    { (yylhs.value.dval) = log10((yystack_[1].value.dval));		std::cout <<  "log (" << (yystack_[1].value.dval) << ") = " << (yylhs.value.dval) << std::endl; }
#line 695 "mathlobster.tab.cc" // lalr1.cc:859
    break;


#line 699 "mathlobster.tab.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yysyntax_error_ (yystack_[0].state, yyla));
      }


    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }


      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.what());
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type, const symbol_type&) const
  {
    return YY_("syntax error");
  }


  const signed char parser::yypact_ninf_ = -25;

  const signed char parser::yytable_ninf_ = -1;

  const short int
  parser::yypact_[] =
  {
     -25,    25,   -25,   -25,   -24,    -8,    -7,     0,     1,     7,
       8,    24,    26,    29,    30,    31,    32,    48,    49,   -25,
      50,   -25,   224,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,   -25,    77,
      50,    50,    50,    50,    50,   -25,   229,    82,    87,   110,
     115,   120,   125,   148,   153,   158,   163,   186,   191,    72,
     196,   -25,    23,    23,    88,    88,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,    50,
     -25,   201,   -25
  };

  const unsigned char
  parser::yydefact_[] =
  {
       2,     0,     1,     7,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8,     0,
       0,     0,     0,     0,     0,     5,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    27,    28,     0,
      26,     0,    15
  };

  const signed char
  parser::yypgoto_[] =
  {
     -25,   -25,   -25,   -20
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     1,    21,    22
  };

  const unsigned char
  parser::yytable_[] =
  {
      39,    23,     0,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    24,    25,
      62,    63,    64,    65,    66,     2,    26,    27,     3,     4,
      42,    43,    44,    28,    29,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      30,    20,    31,     3,    38,    32,    33,    34,    35,    81,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    36,    37,    20,    40,    41,    42,
      43,    44,    40,    41,    42,    43,    44,    40,    41,    42,
      43,    44,    40,    41,    42,    43,    44,    44,     0,     0,
      79,     0,     0,     0,    61,     0,     0,     0,     0,    67,
       0,     0,     0,     0,    68,    40,    41,    42,    43,    44,
      40,    41,    42,    43,    44,    40,    41,    42,    43,    44,
      40,    41,    42,    43,    44,     0,     0,    69,     0,     0,
       0,     0,    70,     0,     0,     0,     0,    71,     0,     0,
       0,     0,    72,    40,    41,    42,    43,    44,    40,    41,
      42,    43,    44,    40,    41,    42,    43,    44,    40,    41,
      42,    43,    44,     0,     0,    73,     0,     0,     0,     0,
      74,     0,     0,     0,     0,    75,     0,     0,     0,     0,
      76,    40,    41,    42,    43,    44,    40,    41,    42,    43,
      44,    40,    41,    42,    43,    44,    40,    41,    42,    43,
      44,     0,     0,    77,     0,     0,     0,     0,    78,     0,
       0,     0,     0,    80,     0,     0,     0,     0,    82,    40,
      41,    42,    43,    44,    40,    41,    42,    43,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    45
  };

  const signed char
  parser::yycheck_[] =
  {
      20,    25,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    26,    26,
      40,    41,    42,    43,    44,     0,    26,    26,     3,     4,
       7,     8,     9,    26,    26,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      26,    26,    26,     3,     4,    26,    26,    26,    26,    79,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    26,    26,    26,     5,     6,     7,
       8,     9,     5,     6,     7,     8,     9,     5,     6,     7,
       8,     9,     5,     6,     7,     8,     9,     9,    -1,    -1,
      28,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    27,     5,     6,     7,     8,     9,
       5,     6,     7,     8,     9,     5,     6,     7,     8,     9,
       5,     6,     7,     8,     9,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    27,     5,     6,     7,     8,     9,     5,     6,
       7,     8,     9,     5,     6,     7,     8,     9,     5,     6,
       7,     8,     9,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      27,     5,     6,     7,     8,     9,     5,     6,     7,     8,
       9,     5,     6,     7,     8,     9,     5,     6,     7,     8,
       9,    -1,    -1,    27,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    27,     5,
       6,     7,     8,     9,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,    30,     0,     3,     4,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      26,    31,    32,    25,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,     4,    32,
       5,     6,     7,     8,     9,    24,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    32,    32,
      32,    27,    32,    32,    32,    32,    32,    27,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    28,
      27,    32,    27
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    29,    30,    30,    31,    31,    31,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    32
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     0,     2,     1,     2,     3,     1,     1,     3,
       3,     3,     3,     3,     3,     6,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4
  };


#if YYDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "$end", "error", "$undefined", "NUM", "VAR", "'+'", "'-'", "'*'", "'/'",
  "'^'", "SIN", "ASIN", "SINH", "COS", "ACOS", "COSH", "TAN", "ATAN",
  "TANH", "EXP", "LN", "LOG", "POW", "SQRT", "'\\n'", "'='", "'('", "')'",
  "','", "$accept", "program", "line", "expr", YY_NULLPTR
  };


  const unsigned char
  parser::yyrline_[] =
  {
       0,    54,    54,    56,    60,    61,    62,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  // Symbol number corresponding to token number t.
  inline
  parser::token_number_type
  parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
     0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      24,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      26,    27,     7,     5,    28,     6,     2,     8,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    25,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     9,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23
    };
    const unsigned int user_token_number_max_ = 273;
    const token_number_type undef_token_ = 2;

    if (static_cast<int>(t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned int> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }


} // yy
#line 1096 "mathlobster.tab.cc" // lalr1.cc:1167
#line 89 "mathlobster.yy" // lalr1.cc:1168



int main(void) {
	yyparse();
	return 0;
}
