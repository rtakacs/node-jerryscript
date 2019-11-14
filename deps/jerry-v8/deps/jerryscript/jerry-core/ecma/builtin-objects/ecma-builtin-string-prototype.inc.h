/* Copyright JS Foundation and other contributors, http://js.foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * String.prototype built-in description
 */

#include "ecma-builtin-helpers-macro-defines.inc.h"

#if ENABLED (JERRY_BUILTIN_STRING)

/* Object properties:
 *  (property name, object pointer getter) */

/* ECMA-262 v5, 15.5.4.1 */
OBJECT_VALUE (LIT_MAGIC_STRING_CONSTRUCTOR,
              ECMA_BUILTIN_ID_STRING,
              ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

/* Number properties:
 *  (property name, number value) */

/* ECMA-262 v5, 15.5.4 (String.prototype is itself a String object whose value is an empty String), 15.5.5.1 */
NUMBER_VALUE (LIT_MAGIC_STRING_LENGTH,
              0,
              ECMA_PROPERTY_FIXED)

/* Routine properties:
 *  (property name, C routine name, arguments number or NON_FIXED, value of the routine's length property) */
ROUTINE (LIT_MAGIC_STRING_TO_STRING_UL, ECMA_STRING_PROTOTYPE_TO_STRING, 0, 0)
ROUTINE (LIT_MAGIC_STRING_VALUE_OF_UL, ECMA_STRING_PROTOTYPE_VALUE_OF, 0, 0)
ROUTINE (LIT_MAGIC_STRING_CONCAT, ECMA_STRING_PROTOTYPE_CONCAT, NON_FIXED, 1)
ROUTINE (LIT_MAGIC_STRING_SLICE, ECMA_STRING_PROTOTYPE_SLICE, 2, 2)
ROUTINE (LIT_MAGIC_STRING_INDEX_OF_UL, ECMA_STRING_PROTOTYPE_INDEX_OF, 2, 1)
ROUTINE (LIT_MAGIC_STRING_LAST_INDEX_OF_UL, ECMA_STRING_PROTOTYPE_LAST_INDEX_OF, 2, 1)
ROUTINE (LIT_MAGIC_STRING_CHAR_AT_UL, ECMA_STRING_PROTOTYPE_CHAR_AT, 1, 1)
ROUTINE (LIT_MAGIC_STRING_CHAR_CODE_AT_UL, ECMA_STRING_PROTOTYPE_CHAR_CODE_AT, 1, 1)
ROUTINE (LIT_MAGIC_STRING_LOCALE_COMPARE_UL, ECMA_STRING_PROTOTYPE_LOCALE_COMPARE, 1, 1)

#if ENABLED (JERRY_BUILTIN_REGEXP)
ROUTINE (LIT_MAGIC_STRING_MATCH, ECMA_STRING_PROTOTYPE_MATCH, 1, 1)
ROUTINE (LIT_MAGIC_STRING_REPLACE, ECMA_STRING_PROTOTYPE_REPLACE, 2, 2)
ROUTINE (LIT_MAGIC_STRING_SEARCH, ECMA_STRING_PROTOTYPE_SEARCH, 1, 1)
#endif /* ENABLED (JERRY_BUILTIN_REGEXP) */

ROUTINE (LIT_MAGIC_STRING_SPLIT, ECMA_STRING_PROTOTYPE_SPLIT, 2, 2)
ROUTINE (LIT_MAGIC_STRING_SUBSTRING, ECMA_STRING_PROTOTYPE_SUBSTRING, 2, 2)
ROUTINE (LIT_MAGIC_STRING_TO_LOWER_CASE_UL, ECMA_STRING_PROTOTYPE_TO_LOWER_CASE, 0, 0)
ROUTINE (LIT_MAGIC_STRING_TO_LOCALE_LOWER_CASE_UL, ECMA_STRING_PROTOTYPE_TO_LOCAL_LOWER_CASE, 0, 0)
ROUTINE (LIT_MAGIC_STRING_TO_UPPER_CASE_UL, ECMA_STRING_PROTOTYPE_TO_UPPER_CASE, 0, 0)
ROUTINE (LIT_MAGIC_STRING_TO_LOCALE_UPPER_CASE_UL, ECMA_STRING_PROTOTYPE_TO_LOCAL_UPPER_CASE, 0, 0)
ROUTINE (LIT_MAGIC_STRING_TRIM, ECMA_STRING_PROTOTYPE_TRIM, 0, 0)

#if ENABLED (JERRY_BUILTIN_ANNEXB)
ROUTINE (LIT_MAGIC_STRING_SUBSTR, ECMA_STRING_PROTOTYPE_SUBSTR, 2, 2)
#endif /* ENABLED (JERRY_BUILTIN_ANNEXB) */

#if ENABLED (JERRY_ES2015_BUILTIN)
ROUTINE (LIT_MAGIC_STRING_REPEAT, ECMA_STRING_PROTOTYPE_REPEAT, 1, 1)
ROUTINE (LIT_MAGIC_STRING_STARTS_WITH, ECMA_STRING_PROTOTYPE_STARTS_WITH, 2, 1)
ROUTINE (LIT_MAGIC_STRING_INCLUDES, ECMA_STRING_PROTOTYPE_INCLUDES, 2, 1)
ROUTINE (LIT_MAGIC_STRING_ENDS_WITH, ECMA_STRING_PROTOTYPE_ENDS_WITH, 2, 1)
ROUTINE (LIT_MAGIC_STRING_CODE_POINT_AT, ECMA_STRING_PROTOTYPE_CODE_POINT_AT, 1, 1)
#endif /* ENABLED (JERRY_ES2015_BUILTIN) */

#if ENABLED (JERRY_ES2015_BUILTIN_ITERATOR)
ROUTINE (LIT_GLOBAL_SYMBOL_ITERATOR, ECMA_STRING_PROTOTYPE_ITERATOR, 0, 0)
#endif /* ENABLED (JERRY_ES2015_BUILTIN_ITERATOR) */

#endif /* ENABLED (JERRY_BUILTIN_STRING) */

#include "ecma-builtin-helpers-macro-undefs.inc.h"
