@interface NSString (WAUtility)
- (id)stringWithMaxLength:(unsigned long long)arg1;
- (unsigned long long)characterLengthOfComposedCharacter;
- (id)stringByOmitPrefix:(id)arg1;
- (id)stringByReplacingJavaScriptUnsupportString;
- (id)stringByReplacingJavaScriptUnsupportString:(BOOL)arg1;
- (id)stringByOmitSuffix:(id)arg1;
- (id)stringByOmitPrefixAndSuffix:(id)arg1;
- (id)stringByTruncatingAtString:(id)arg1 toWidth:(double)arg2 withFont:(id)arg3;
- (id)stringByTruncatingToWidth:(double)arg1 withFont:(id)arg2;
- (id)scheme;
- (BOOL)containsAppStoreLinkString;
- (BOOL)containsRegex:(id)arg1;
- (id)wa_formatChinaPhoneString:(id)arg1;
- (id)MD5;
- (id)SHA1;
- (id)validJSONString;
@end

