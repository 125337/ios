@interface WCPayOfflineAckMsgResponse : NSObject
{
    long long _retCode; // +0x8
    NSString * _retMsg; // +0x10
    long long _pollTime; // +0x18
}
- (long long)retCode;
- (void)setRetCode:(long long)arg1;
- (id)retMsg;
- (void)setRetMsg:(id)arg1;
- (long long)pollTime;
- (void)setPollTime:(long long)arg1;
- (void).cxx_destruct;
@end
