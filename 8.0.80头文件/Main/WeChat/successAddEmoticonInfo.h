@interface successAddEmoticonInfo : NSObject
{
    BOOL _isEmojiInfoValid; // +0x8
    AddEmoticonWrap * _addWrap; // +0x10
}
- (id)initWithWrap:(id)arg1 isEmojiInfoValid:(BOOL)arg2;
- (id)addWrap;
- (void)setAddWrap:(id)arg1;
- (BOOL)isEmojiInfoValid;
- (void)setIsEmojiInfoValid:(BOOL)arg1;
- (void).cxx_destruct;
@end
