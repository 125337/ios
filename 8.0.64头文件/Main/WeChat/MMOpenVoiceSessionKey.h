@interface MMOpenVoiceSessionKey : NSObject
{
    NSString * sessionKey; // +0x8
    unsigned long long timeoutStamp; // +0x10
}
- (id)initWithKey:(id)arg1 now:(unsigned long long)arg2 lifespan:(unsigned int)arg3;
- (BOOL)isValid;
- (id)sessionKey;
- (void)setSessionKey:(id)arg1;
- (unsigned long long)timeoutStamp;
- (void)setTimeoutStamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
