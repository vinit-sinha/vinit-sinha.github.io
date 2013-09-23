#ifndef BASIC_SOURCE_ENCODING_H_INCLUDED
#define BASIC_SOURCE_ENCODING_H_INCLUDED

#include "core/charset/basic_source/char_types.h"

namespace vinks { namespace core { namespace charset { namespace basic_source {

        /// \brief Checks if passed character is a \ref space_char in basic source character set
        ///
        /// \param c
        /// Character to be tested
        /// \return
        /// + true, if c is representationally equivalent to basic_source::space_char_type::space_char
        /// + false, otherwise
        /// \pre
        /// + `char_type` is assumed to be a type equivalent to a C++ character type.
        /// + object of char_type is said to have a value which is convertible to basic_source::base_type
        /// \remarks
        /// An object `val` of `char_type` is said to be representationally equivalent to basic_source::space_char_type::space_char
        ///     **if oand only if** `val` is bitwise equivalent to ASCII value represented by  source::space_char_type::space_char
        template< typename char_type>
        bool is_representable_as_space_char(char_type c)
        {
            return static_cast<decltype(space_char_type::space_char)>(c) == space_char_type::space_char ;
        }

        /// \brief Checks if passed character is a \ref control_char in basic source character set
        ///
        /// \param c
        /// Character to be tested
        /// \return
        /// + true, if c is representationally equivalent to one of basic_source::control_char_type
        /// + false, otherwise
        /// \pre
        /// + `char_type` is assumed to be a type equivalent to a C++ character type.
        /// + object of char_type is said to have a value which is convertible to basic_source::base_type
        /// \remarks
        /// An object `val` of `char_type` is said to be representationally equivalent to basic_source::control_char_type
        ///     **if oand only if** `val` is bitwise equivalent to ASCII value represented by  one of basic_source::control_char_type
        template< typename char_type>
        bool is_representable_as_control_char(char_type c)
        {
            switch (control_char_type(static_cast<control_char_type>(c)))
            {
            case control_char_type::horizontal_tab:
                break;
            }
            return false;
        }

        /// \brief Checks if passed character is a \ref letters in basic source character set
        ///
        /// \param c
        /// Character to be tested
        /// \return
        /// + true, if c is representationally equivalent to one of basic_source::letter_type
        /// + false, otherwise
        /// \pre
        /// + `char_type` is assumed to be a type equivalent to a C++ character type.
        /// + object of char_type is said to have a value which is convertible to basic_source::base_type
        /// \remarks
        /// An object `val` of `char_type` is said to be representationally equivalent to basic_source::letter_type
        ///     **if oand only if** `val` is bitwise equivalent to ASCII value represented by  one of basic_source::letter_type
        template< typename char_type>
        bool is_representable_as_letter(char_type c)
        {
            return false;
        }

        /// \brief Checks if passed character is a \ref digits in basic source character set
        ///
        /// \param c
        /// Character to be tested
        /// \return
        /// + true, if c is representationally equivalent to one of basic_source::digit_type
        /// + false, otherwise
        /// \pre
        /// + `char_type` is assumed to be a type equivalent to a C++ character type.
        /// + object of char_type is said to have a value which is convertible to basic_source::base_type
        /// \remarks
        /// An object `val` of `char_type` is said to be representationally equivalent to basic_source::digit_type
        ///     **if oand only if** `val` is bitwise equivalent to ASCII value represented by  one of basic_source::digit_type
        template< typename char_type>
        bool is_representable_as_digit(char_type c)
        {
            return false;
        }

        /// \brief Checks if passed character is a \ref punt_or_op in basic source character set
        ///
        /// \param c
        /// Character to be tested
        /// \return
        /// + true, if c is representationally equivalent to one of basic_source::puntuator_or_operator_type
        /// + false, otherwise
        /// \pre
        /// + `char_type` is assumed to be a type equivalent to a C++ character type.
        /// + object of char_type is said to have a value which is convertible to basic_source::base_type
        /// \remarks
        /// An object `val` of `char_type` is said to be representationally equivalent to basic_source::puntuator_or_operator_type
        ///     **if oand only if** `val` is bitwise equivalent to ASCII value represented by  one of basic_source::puntuator_or_operator_type
        template< typename char_type>
        bool is_representable_as_punct_or_op(char_type c)
        {
            return false;
        }
}}}}

#endif // BASIC_SOURCE_CHAR_TYPES_ENCODING_H_INCLUDED
