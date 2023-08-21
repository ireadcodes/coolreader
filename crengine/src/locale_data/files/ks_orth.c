// clang-format off

// This file is autogenerated from fc-lang database.
// https://www.freedesktop.org/wiki/Software/fontconfig/
// https://gitlab.freedesktop.org/fontconfig/fontconfig/-/tree/main/fc-lang
// by convert utility from https://github.com/virxkane/freetype_textdraw

const unsigned int ks_lang_orth_chars[] = {
//
// fontconfig/fc-lang/ks.orth
//
// Copyright © 2009 Roozbeh Pournader
//
// Permission to use, copy, modify, distribute, and sell this software and its
// documentation for any purpose is hereby granted without fee, provided that
// the above copyright notice appear in all copies and that both that
// copyright notice and this permission notice appear in supporting
// documentation, and that the name of the author(s) not be used in
// advertising or publicity pertaining to distribution of the software without
// specific, written prior permission.  The author(s) make(s) no
// representations about the suitability of this software for any purpose.  It
// is provided "as is" without express or implied warranty.
//
// THE AUTHOR(S) DISCLAIM(S) ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
// INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO
// EVENT SHALL THE AUTHOR(S) BE LIABLE FOR ANY SPECIAL, INDIRECT OR
// CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
// DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
// TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
// PERFORMANCE OF THIS SOFTWARE.
//
// Kashmiri (ks)
//
//
// fontconfig/fc-lang/ur.orth
//
// Copyright © 2002 Keith Packard
// Copyright © 2009 Roozbeh Pournader
//
// Permission to use, copy, modify, distribute, and sell this software and its
// documentation for any purpose is hereby granted without fee, provided that
// the above copyright notice appear in all copies and that both that
// copyright notice and this permission notice appear in supporting
// documentation, and that the name of the author(s) not be used in
// advertising or publicity pertaining to distribution of the software without
// specific, written prior permission.  The authors make no
// representations about the suitability of this software for any purpose.  It
// is provided "as is" without express or implied warranty.
//
// THE AUTHOR(S) DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
// INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO
// EVENT SHALL THE AUTHOR(S) BE LIABLE FOR ANY SPECIAL, INDIRECT OR
// CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
// DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
// TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
// PERFORMANCE OF THIS SOFTWARE.
//
// Urdu (ur)
//
// We are assuming that:
// * Most fonts that claim to support an Arabic letter actually do so;
// * Most modern text rendering software use OpenType tables, instead of
//   directly using presentation forms.
// * Some good Arabic fonts do not support codepoints for Arabic presentation
//   forms.
// Thus, we are switching to general forms of Arabic letters.
//
// General forms:
	0xf0f0ffff, 0x0621, 0x0624,	// range
	0xf0f0ffff, 0x0626, 0x0628,	// range
	0x063a,
	0xf0f0ffff, 0x0641, 0x0642,	// range
	0xf0f0ffff, 0x0644, 0x0646,	// range
	0x0648,
	0x0679,
	0x067e,
	0x0686,
	0x0688,
	0x0691,
	0x0698,
	0x06a9,
	0x06af,
	0x06ba,
	0x06be,
	0x06c3,
	0x06cc,
	0x06d2,
// Presentations forms:
//fb56-fb59
//fb66-fb69
//fb7a-fb7d
//fb88-fb8d
//fb8e-fb95
//fb9e-fb9f
//fbfc-fbff
//fbaa-fbaf
//fe80-fe86
//fe89-fed8
//fedd-feee
//#fef5-fef8      // These four happen very rarely
//fefb-fefc
	0x0620,
	0x0657,
	0x065f,
	0x0672,
	0x0673,
	0x06c4,
};
#define KS_LANG_ORTH_SZ	33

// clang-format on