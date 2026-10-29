@interface EmoticonRecommendWrap : MMObject <NSCopying>
{
    BOOL _needPurchase; // +0x8
    BOOL _isFree; // +0x9
    BOOL _isRecentUsed; // +0xa
    unsigned int _emojiFrom; // +0xc
    EmojiInfoObj * _emojiInfo; // +0x10
    NSString * _emojiDesc; // +0x18
    unsigned long long _resultSource; // +0x20
    unsigned long long _requestId; // +0x28
    NSString * _emojiReason; // +0x30
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
- (BOOL)isRecentUsed;
- (void)setIsRecentUsed:(BOOL)arg1;
- (unsigned int)emojiFrom;
- (void)setEmojiFrom:(unsigned int)arg1;
- (unsigned long long)resultSource;
- (void)setResultSource:(unsigned long long)arg1;
- (unsigned long long)requestId;
- (void)setRequestId:(unsigned long long)arg1;
- (id)emojiReason;
- (void)setEmojiReason:(id)arg1;
- (void).cxx_destruct;
@end
