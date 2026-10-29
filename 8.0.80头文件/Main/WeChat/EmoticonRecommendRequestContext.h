@interface EmoticonRecommendRequestContext : NSObject
{
    BOOL _localModelEnabled; // +0x8
    BOOL _localModelReady; // +0x9
    RecommendEmojiCtx * _emojiCtx; // +0x10
    NSArray * _contextSegResult; // +0x18
    unsigned long long _contextFetchCount; // +0x20
    NSArray * _localFallbackLogItems; // +0x28
}
- (id)emojiCtx;
- (void)setEmojiCtx:(id)arg1;
- (id)contextSegResult;
- (void)setContextSegResult:(id)arg1;
- (unsigned long long)contextFetchCount;
- (void)setContextFetchCount:(unsigned long long)arg1;
- (BOOL)localModelEnabled;
- (void)setLocalModelEnabled:(BOOL)arg1;
- (BOOL)localModelReady;
- (void)setLocalModelReady:(BOOL)arg1;
- (id)localFallbackLogItems;
- (void)setLocalFallbackLogItems:(id)arg1;
- (void).cxx_destruct;
@end
