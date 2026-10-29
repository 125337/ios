@interface OMJAppRequest : NSObject
{
    NSNumber * _commandID; // +0x8
    NSNumber * _timeoutMillis; // +0x10
    NSString * _URL; // +0x18
    NSNumber * _retryCount; // +0x20
    NSNumber * _limitFlow; // +0x28
    NSNumber * _limitFrequency; // +0x30
    NSNumber * _netType; // +0x38
}
- (id)description;
- (id)commandID;
- (void)setCommandID:(id)arg1;
- (id)timeoutMillis;
- (void)setTimeoutMillis:(id)arg1;
- (id)URL;
- (void)setURL:(id)arg1;
- (id)retryCount;
- (void)setRetryCount:(id)arg1;
- (id)limitFlow;
- (void)setLimitFlow:(id)arg1;
- (id)limitFrequency;
- (void)setLimitFrequency:(id)arg1;
- (id)netType;
- (void)setNetType:(id)arg1;
- (void).cxx_destruct;
@end
