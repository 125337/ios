@interface TingPrivateReactionNativeEffectRequest : NSObject
{
    BOOL _isSelf; // +0x8
    NSString * _requestId; // +0x10
    unsigned long long _effectType; // +0x18
    NSString * _magicEmojiKey; // +0x20
    NSString * _particleEmojiText; // +0x28
    double _anchorLeft; // +0x30
    double _anchorTop; // +0x38
    double _anchorWidth; // +0x40
    double _anchorHeight; // +0x48
    NSString * _sessionId; // +0x50
    NSString * _messageKey; // +0x58
    NSString * _fromUserName; // +0x60
    NSString * _toUserName; // +0x68
    long long _timestampMs; // +0x70
}
+ (id)makeWithRequestId:(id)arg1 effectType:(unsigned long long)arg2 magicEmojiKey:(id)arg3 particleEmojiText:(id)arg4 anchorLeft:(double)arg5 anchorTop:(double)arg6 anchorWidth:(double)arg7 anchorHeight:(double)arg8 sessionId:(id)arg9 messageKey:(id)arg10 isSelf:(BOOL)arg11 fromUserName:(id)arg12 toUserName:(id)arg13 timestampMs:(long long)arg14;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (unsigned long long)effectType;
- (void)setEffectType:(unsigned long long)arg1;
- (id)magicEmojiKey;
- (void)setMagicEmojiKey:(id)arg1;
- (id)particleEmojiText;
- (void)setParticleEmojiText:(id)arg1;
- (double)anchorLeft;
- (void)setAnchorLeft:(double)arg1;
- (double)anchorTop;
- (void)setAnchorTop:(double)arg1;
- (double)anchorWidth;
- (void)setAnchorWidth:(double)arg1;
- (double)anchorHeight;
- (void)setAnchorHeight:(double)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)messageKey;
- (void)setMessageKey:(id)arg1;
- (BOOL)isSelf;
- (void)setIsSelf:(BOOL)arg1;
- (id)fromUserName;
- (void)setFromUserName:(id)arg1;
- (id)toUserName;
- (void)setToUserName:(id)arg1;
- (long long)timestampMs;
- (void)setTimestampMs:(long long)arg1;
- (void).cxx_destruct;
@end
