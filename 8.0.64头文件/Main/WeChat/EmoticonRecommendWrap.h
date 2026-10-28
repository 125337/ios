@interface EmoticonRecommendWrap : MMObject <NSCopying>
{
    BOOL _needPurchase; // +0x8
    BOOL _isFree; // +0x9
    unsigned int _emojiFrom; // +0xc
    EmojiInfoObj * _emojiInfo; // +0x10
    NSString * _emojiDesc; // +0x18
    unsigned long long _requestId; // +0x20
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)emojiInfo;
- (void)setEmojiInfo:(id)arg1;
- (id)emojiDesc;
- (void)setEmojiDesc:(id)arg1;
- (BOOL)needPurchase;
- (void)setNeedPurchase:(BOOL)arg1;
- (BOOL)isFree;
- (void)setIsFree:(BOOL)arg1;
- (unsigned int)emojiFrom;
- (void)setEmojiFrom:(unsigned int)arg1;
- (unsigned long long)requestId;
- (void)setRequestId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
