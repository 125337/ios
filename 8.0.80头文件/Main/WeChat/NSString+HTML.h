@interface NSString (HTML)
- (unsigned long long)integerValueFromHex;
- (BOOL)isNumeric;
- (float)percentValue;
- (BOOL)hasPrefixCharacterFromSet:(id)arg1;
- (BOOL)hasSuffixCharacterFromSet:(id)arg1;
- (id)stringByAddingHTMLEntities;
- (id)stringByReplacingHTMLEntities;
@end
