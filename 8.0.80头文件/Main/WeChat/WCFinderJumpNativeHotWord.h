@interface WCFinderJumpNativeHotWord : NSObject
{
    unsigned int _actionType; // +0x8
    NSString * _hotwordText; // +0x10
    NSString * _sessionBufferString; // +0x18
    NSData * _sessionBuffer; // +0x20
    unsigned long long _hotwordId; // +0x28
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)sessionBuffer;
- (id)hotwordText;
- (void)setHotwordText:(id)arg1;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (id)sessionBufferString;
- (void)setSessionBufferString:(id)arg1;
- (void)setSessionBuffer:(id)arg1;
- (unsigned long long)hotwordId;
- (void)setHotwordId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
