@interface WXKBBaseRequest : NSObject
{
    unsigned int _timestamp; // +0x8
    NSString * _sessionId; // +0x10
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (BOOL)checkTime;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)timestamp;
- (void)setTimestamp:(unsigned int)arg1;
- (void).cxx_destruct;
@end

