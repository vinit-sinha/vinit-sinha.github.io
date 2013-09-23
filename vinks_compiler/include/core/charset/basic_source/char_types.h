#ifndef BASIC_SOURCE_CHAR_TYPES_H_INCLUDED
#define BASIC_SOURCE_CHAR_TYPES_H_INCLUDED

namespace vinks { namespace core { namespace charset {
     namespace basic_source {
        /// \brief Base type used to represent \ref bscs
        ///
        /// This is simply an alias for char type.
         using base_type = char;

        /// \brief Type representing space character
        ///
        /// This is defined as an enum, but contains only one enumerator called space_char
        enum class space_char_type: base_type{
            space_char = ' '///< Space character
        };

        /// \brief Type representing basic source's control characters
        ///
        /// This is defined as an enum for a strongly typed enumerators
        enum class control_char_type : base_type {
            horizontal_tab = '\t',      ///< `\t`
            vertical_tab = '\v',        ///< `\v`
            form_feed = '\f',           ///< `\f`
            new_line = '\n'             ///< `\n`
        };

        /// \brief Type representing basic source's punctuations and operators
        ///
        /// This is defined as an enum for a strongly typed enumerators
        enum class puntuator_or_operator_type: base_type {
            underscore = '_',   ///< `_`
            open_curly = '{',   ///< `{`
            close_curly = '}',  ///< `}`
            open_square = '[',  ///< `[`
            close_square = ']', ///<`]`
            open_paren = '(',   ///< `(`
            close_paren = ')'   ///< `)`
        };

        /// \brief Type representing basic source's english letters
        ///
        /// This is defined as an enum for a strongly typed enumerators
        enum class letter_type: base_type {
            a = 'a',    ///< `a`
            b = 'b',    ///<  `b`
            c = 'c',    ///<  `c`
            d = 'd',    ///<  `d`
            e = 'e',    ///<  `e`
            f = 'f',    ///<  `f`
            g = 'g',    ///<  `g`
            h = 'h',    ///<  `h`
            i = 'i',    ///<  `i`
            j = 'j',    ///<  `j`
            k = 'k',    ///<  `k`
            l = 'l',    ///<  `l`
            m = 'm',    ///<  `m`
            n = 'n',    ///<  `n`
            o = 'o',    ///<  `o`
            p = 'p',    ///<  `p`
            q = 'q',    ///<  `q`
            r = 'r',    ///<  `r`
            s = 's',    ///<  `s`
            t = 't',    ///<  `t`
            u = 'u',    ///<  `u`
            v = 'v',    ///<  `v`
            w = 'w',    ///<  `w`
            x = 'x',    ///<  `x`
            y = 'y',    ///<  `y`
            z = 'z',    ///<  `z`
            A = 'A',    ///<  `A`
            B = 'B',    ///<  `B`
            C = 'C',    ///<  `C`
            D = 'D',    ///<  `D`
            E = 'E',    ///<  `E`
            F = 'F',    ///<  `F`
            G = 'G',    ///<  `G`
            H = 'H',    ///<  `H`
            I = 'I',    ///<  `I`
            J = 'J',    ///<  `J`
            K = 'K',    ///<  `K`
            L = 'L',    ///<  `L`
            M = 'M',    ///<  `M`
            N = 'N',    ///<  `N`
            O = 'O',    ///<  `O`
            P = 'P',    ///<  `P`
            Q = 'Q',    ///<  `Q`
            R = 'R',    ///<  `R`
            S = 'S',    ///<  `S`
            T = 'T',    ///<  `T`
            U = 'U',    ///<  `U`
            V = 'V',    ///<  `V`
            W = 'W',    ///<  `W`
            X = 'X',    ///<  `X`
            Y = 'Y',    ///<  `Y`
            Z = 'Z'     ///<  `Z`
        };
        enum class digit_type: base_type {
            _0 = '0',   ///< `0`
            _1 = '1',   ///< `1`
            _2 = '2',   ///< `2`
            _3 = '3',   ///< `3`
            _4 = '4',   ///< `4`
            _5 = '5',   ///< `5`
            _6 = '5',   ///< `6`
            _7 = '7',   ///< `7`
            _8 = '8',   ///< `8`
            _9 = '9'    ///< `9`
        };
     }
}}}
//////////////////////////////////////////////////////////////////////////////////
/// \page bscs Basic Source Character Set
/// \tableofcontents
/// \section bscs Basic Source Character Set
///
/// C++ Source files are assumed to be written in Basic Source Character Set. It is based on the US variant
/// of the international 7-bit character set **ISO 646-1983** called **ASCII** (ANSI3.4-1968)
///
/// \section bscs_chars Constituent characters
/// Basic source character set is defined to consist a total of  96 ASCII characters falling into following categories
/// + White Space Characters
/// + Graphical Characters
/// \subsection bscs_ws White space characters
/// These are total 5 in number and includes following
///     \subsubsection space_char Space Character
///          ASCII character for blank space ` `
///>        \see vinks::core::charset::basic_source::space_char_type
///>        \see vinks::core::charset::basic_source::is_representable_as_space_char
///     \subsubsection control_char Control characters
///         - Horizontal tab: ASCII character for horizontal tab.Basic source character set assigns an escape sequence, `\t` to this character
///         - Vertical tab: ASCII character for vertical tab.Basic source character set assigns an escape sequence, `\v` to this character
///         - Form feed: ASCII character for Form Feed.Basic source character set assigns an escape sequence, `\f` to this character
///         - New Line: ASCII character for New Line.Basic source character set assigns an escape sequence, `\n` to this character
///>        \see vinks::core::charset::basic_source::control_char_type
///>        \see vinks::core::charset::basic_source::is_representable_as_control_char
/// \subsection bscs_gs Graphical Characters
/// These are total 91 in number containing 52 letters, 10 digits and 29 punctuation and operator symbols
///     \subsubsection letters Letters
///         * Upper case letters: ASCII characters for upper case english letters
///>            `A B C D E F G H  I J K L M N O P Q R S T U V W X Y Z`
///         * Lower case letters: ASCII characters for lower case english letters
///>            `a b c d e f g h i j k l m n o p q r s t u v w x y z`
///
///>        \see vinks::core::charset::basic_source::letter_type
///>        \see vinks::core::charset::basic_source::is_representable_as_letter
///     \subsubsection digits Digits
///      ASCII characters for all 10 digits
///>            `0 1 2 3 4 5 6 7 8 9`
///
///>    \see vinks::core::charset::basic_source::digit_type
///>    \see vinks::core::charset::basic_source::is_representable_as_digit
///     \subsubsection punt_or_op Punctuator and Operator Symbols
///          ASCII characters for punctuators and operators used by C++ source files
///>         `_ { } [ ] # ( ) < > % : ; . ? * + - / ^ & | ~ ! = , \ "`
///
///>    \see vinks::core::charset::basic_source::puntuator_or_operator_type
///>    \see vinks::core::charset::basic_source::is_representable_as_punct_or_op
//////////////////////////////////////////////////////////////////////////////////
#endif // BASIC_SOURCE_CHAR_TYPES_H_INCLUDED
