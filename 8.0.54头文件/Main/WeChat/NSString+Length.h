@interface NSString (Length)
- (unsigned long long)charLength;
- (unsigned long long)charLengthWithEmoOneCharPolicy:(BOOL)arg1 andIsFullWidth:(BOOL)arg2;
- (unsigned long long)getIndexWithMaxCharCount:(unsigned long long)arg1;
- (unsigned long long)getIndexWithMaxCharCount:(unsigned long long)arg1 withEmojiFullLength:(BOOL)arg2;
- (unsigned long long)getCharacterWithEmoji;
- (unsigned long long)charLengthWithEmojiFullLength;
- (id)prefixWithLength:(unsigned long long)arg1;
- (id)filterNewLineCharacter;
- (unsigned long long)getEmoticonFixedLengthOffset;
- (unsigned long long)getEmojiFixedLengthOffset;
- (id)prefixForLength:(unsigned long long)arg1 WithEmoOneCharPolicy:(BOOL)arg2;
- (id)getCharacterNumberWithIndex:(unsigned long long)arg1;
- (id)removeLastComposedEmoji:(id)arg1;
@end

