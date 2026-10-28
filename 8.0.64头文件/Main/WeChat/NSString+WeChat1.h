@interface NSString (WeChat1)
- (long long)numberOfCharacters;
- (BOOL)containsEmoji;
- (BOOL)isAllEmoji;
- (BOOL)isAllIdeographicOrRadical;
- (BOOL)containsCjkScript;
- (BOOL)containsFullWidthCharacters;
- (unsigned long long)fullWidthWeightedLength;
- (id)trimToFullWidthWeightedLength:(unsigned long long)arg1;
- (_NSRange)utf16UnitsRangeForCharacterAtIndex:(long long)arg1;
- (long long)characterIndexWithUtf16UnitIndex:(long long)arg1;
- (_NSRange)utf16UnitsRangeForCharacterContainingUtf16UnitIndex:(long long)arg1;
- (id)substringToCharacterIndex:(long long)arg1;
- (id)safeSubstringToCharacterIndex:(long long)arg1;
@end
