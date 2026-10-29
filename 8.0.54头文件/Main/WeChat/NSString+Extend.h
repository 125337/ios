@interface NSString (Extend)
+ (id)stringWithCharacter:(unsigned short)arg1;
- (id)stringByTrimmingWhitespace;
- (id)characterStringAtIndex:(unsigned long long)arg1;
- (id)firstCharacter;
- (id)lastCharacter;
- (BOOL)isNumber;
- (BOOL)isChinese;
- (BOOL)hasChinese;
- (id)urlQueryParamDict;
- (id)urlStringByAppendQueryDictionary:(id)arg1;
- (id)urlStringByAppendQueryArray:(id)arg1;
- (id)urlStringByAppendQueryString:(id)arg1;
- (id)removeSpaceAndNewline;
- (id)getNumberString;
@end

