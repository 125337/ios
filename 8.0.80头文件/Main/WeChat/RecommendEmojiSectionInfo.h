@interface RecommendEmojiSectionInfo : NSObject
{
    BOOL _isLocal; // +0x8
    unsigned long long _sectionType; // +0x10
    long long _numOfItems; // +0x18
    NSString * _title; // +0x20
    NSMutableArray * _emoticonWraps; // +0x28
}
- (unsigned long long)sectionType;
- (void)setSectionType:(unsigned long long)arg1;
- (long long)numOfItems;
- (void)setNumOfItems:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)emoticonWraps;
- (void)setEmoticonWraps:(id)arg1;
- (BOOL)isLocal;
- (void)setIsLocal:(BOOL)arg1;
- (void).cxx_destruct;
@end
