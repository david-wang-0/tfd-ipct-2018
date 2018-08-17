<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<!-- saved from url=(0075)http://www.opensource.apple.com/source/ncurses/ncurses-31/include/termcap.h -->
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>termcap.h</title>
<style type="text/css">
.enscript-comment { font-style: italic; color: rgb(178,34,34); }
.enscript-function-name { font-weight: bold; color: rgb(0,0,255); }
.enscript-variable-name { font-weight: bold; color: rgb(184,134,11); }
.enscript-keyword { font-weight: bold; color: rgb(160,32,240); }
.enscript-reference { font-weight: bold; color: rgb(95,158,160); }
.enscript-string { font-weight: bold; color: rgb(188,143,143); }
.enscript-builtin { font-weight: bold; color: rgb(218,112,214); }
.enscript-type { font-weight: bold; color: rgb(34,139,34); }
.enscript-highlight { text-decoration: underline; color: 0; }
</style>
<style type="text/css"></style></head>
<body id="top">
<h1 style="margin:8px;" id="f1">termcap.h&nbsp;&nbsp;&nbsp;<span style="font-weight: normal; font-size: 0.5em;">[<a href="http://www.opensource.apple.com/source/ncurses/ncurses-31/include/termcap.h?txt">plain text</a>]</span></h1>
<hr>
<div></div>
<pre><span class="enscript-comment">/****************************************************************************
 * Copyright (c) 1998,2000 Free Software Foundation, Inc.                   *
 *                                                                          *
 * Permission is hereby granted, free of charge, to any person obtaining a  *
 * copy of this software and associated documentation files (the            *
 * "Software"), to deal in the Software without restriction, including      *
 * without limitation the rights to use, copy, modify, merge, publish,      *
 * distribute, distribute with modifications, sublicense, and/or sell       *
 * copies of the Software, and to permit persons to whom the Software is    *
 * furnished to do so, subject to the following conditions:                 *
 *                                                                          *
 * The above copyright notice and this permission notice shall be included  *
 * in all copies or substantial portions of the Software.                   *
 *                                                                          *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS  *
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF               *
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.   *
 * IN NO EVENT SHALL THE ABOVE COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,   *
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR    *
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR    *
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.                               *
 *                                                                          *
 * Except as contained in this notice, the name(s) of the above copyright   *
 * holders shall not be used in advertising or otherwise to promote the     *
 * sale, use or other dealings in this Software without prior written       *
 * authorization.                                                           *
 ****************************************************************************/</span>

<span class="enscript-comment">/****************************************************************************
 *  Author: Zeyd M. Ben-Halim &lt;<a href="mailto:zmbenhal@netcom.com">zmbenhal@netcom.com</a>&gt; 1992,1995               *
 *     and: Eric S. Raymond &lt;<a href="mailto:esr@snark.thyrsus.com">esr@snark.thyrsus.com</a>&gt;                         *
 ****************************************************************************/</span>

<span class="enscript-comment">/* $Id: termcap.h.in,v 1.16 2001/03/24 21:53:27 tom Exp $ */</span>

#<span class="enscript-reference">ifndef</span> <span class="enscript-variable-name">NCURSES_TERMCAP_H_incl</span>
#<span class="enscript-reference">define</span> <span class="enscript-variable-name">NCURSES_TERMCAP_H_incl</span>	1

#<span class="enscript-reference">undef</span>  <span class="enscript-variable-name">NCURSES_VERSION</span>
#<span class="enscript-reference">define</span> <span class="enscript-variable-name">NCURSES_VERSION</span> <span class="enscript-string">"5.7"</span>

#<span class="enscript-reference">include</span> <span class="enscript-string">&lt;ncurses_dll.h&gt;</span>

#<span class="enscript-reference">ifdef</span> <span class="enscript-variable-name">__cplusplus</span>
<span class="enscript-type">extern</span> <span class="enscript-string">"C"</span>
{
#<span class="enscript-reference">endif</span> <span class="enscript-comment">/* __cplusplus */</span>

#<span class="enscript-reference">include</span> <span class="enscript-string">&lt;sys/types.h&gt;</span>

#<span class="enscript-reference">undef</span>  <span class="enscript-variable-name">NCURSES_CONST</span> 
#<span class="enscript-reference">define</span> <span class="enscript-variable-name">NCURSES_CONST</span> <span class="enscript-comment">/*nothing*/</span> 

#<span class="enscript-reference">undef</span>  <span class="enscript-variable-name">NCURSES_OSPEED</span> 
#<span class="enscript-reference">define</span> <span class="enscript-variable-name">NCURSES_OSPEED</span> short 

<span class="enscript-type">extern</span> <span class="enscript-function-name">NCURSES_EXPORT_VAR</span>(<span class="enscript-type">char</span>) PC;
<span class="enscript-type">extern</span> <span class="enscript-function-name">NCURSES_EXPORT_VAR</span>(<span class="enscript-type">char</span> *) UP;
<span class="enscript-type">extern</span> <span class="enscript-function-name">NCURSES_EXPORT_VAR</span>(<span class="enscript-type">char</span> *) BC;
<span class="enscript-type">extern</span> <span class="enscript-function-name">NCURSES_EXPORT_VAR</span>(NCURSES_OSPEED) ospeed; 

#<span class="enscript-reference">if</span> !<span class="enscript-reference">defined</span>(<span class="enscript-variable-name">NCURSES_TERM_H_incl</span>)
<span class="enscript-type">extern</span> <span class="enscript-function-name">NCURSES_EXPORT</span>(<span class="enscript-type">char</span> *) tgetstr (NCURSES_CONST <span class="enscript-type">char</span> *, <span class="enscript-type">char</span> **);
<span class="enscript-type">extern</span> <span class="enscript-function-name">NCURSES_EXPORT</span>(<span class="enscript-type">char</span> *) tgoto (<span class="enscript-type">const</span> <span class="enscript-type">char</span> *, <span class="enscript-type">int</span>, <span class="enscript-type">int</span>);
<span class="enscript-type">extern</span> <span class="enscript-function-name">NCURSES_EXPORT</span>(<span class="enscript-type">int</span>) tgetent (<span class="enscript-type">char</span> *, <span class="enscript-type">const</span> <span class="enscript-type">char</span> *);
<span class="enscript-type">extern</span> <span class="enscript-function-name">NCURSES_EXPORT</span>(<span class="enscript-type">int</span>) tgetflag (NCURSES_CONST <span class="enscript-type">char</span> *);
<span class="enscript-type">extern</span> <span class="enscript-function-name">NCURSES_EXPORT</span>(<span class="enscript-type">int</span>) tgetnum (NCURSES_CONST <span class="enscript-type">char</span> *);
<span class="enscript-type">extern</span> <span class="enscript-function-name">NCURSES_EXPORT</span>(<span class="enscript-type">int</span>) tputs (<span class="enscript-type">const</span> <span class="enscript-type">char</span> *, <span class="enscript-type">int</span>, <span class="enscript-type">int</span> (*)(<span class="enscript-type">int</span>));
#<span class="enscript-reference">endif</span>

#<span class="enscript-reference">ifdef</span> <span class="enscript-variable-name">__cplusplus</span>
}
#<span class="enscript-reference">endif</span>

#<span class="enscript-reference">endif</span> <span class="enscript-comment">/* NCURSES_TERMCAP_H_incl */</span>
</pre>
<hr>
</body></html>