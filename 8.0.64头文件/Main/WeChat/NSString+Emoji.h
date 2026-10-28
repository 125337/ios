@interface NSString (Emoji)
+ (BOOL)isEmoji:(id)arg1;
+ (id)convertSimpleUnicodeStr:(id)arg1;
+ (unsigned long long)glyphIndexForUnicodeString:(id)arg1;
- (id)emojiUnifiedString;
- (unsigned long long)emojiCharCount;
- (BOOL)isContainComposedEmojiWithLooseCheck;
- (id)getComposedEmojiStrs;
- (id)getEmojiImage:(CGSize)arg1;
- (BOOL)isGlyphSupported;
- (BOOL)isContainLastComposedEmoji;
@end
