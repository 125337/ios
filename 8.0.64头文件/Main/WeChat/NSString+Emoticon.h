@interface NSString (Emoticon)
- (BOOL)isContainEmoticon;
- (BOOL)isContainEmoticonOnly;
- (id)getEmoticonStrs;
- (id)getEmoticonRanges;
- (id)insertIntoEmoticonStrWith:(id)arg1 inRange:(_NSRange)arg2;
- (id)removeLastEmoticon;
@end
