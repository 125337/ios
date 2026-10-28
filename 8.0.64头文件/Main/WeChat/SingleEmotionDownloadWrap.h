@interface SingleEmotionDownloadWrap : MMObject
{
    BOOL _isTempFirst; // +0x8
    BOOL _addToFirst; // +0x9
    BOOL _isForWebDisplay; // +0xa
    EmojiInfoObj * _emojiInfoObj; // +0x10
}
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSupportWxam;
- (unsigned long long)hash;
- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)arg1;
- (BOOL)isTempFirst;
- (void)setIsTempFirst:(BOOL)arg1;
- (BOOL)addToFirst;
- (void)setAddToFirst:(BOOL)arg1;
- (BOOL)isForWebDisplay;
- (void)setIsForWebDisplay:(BOOL)arg1;
- (void).cxx_destruct;
@end
