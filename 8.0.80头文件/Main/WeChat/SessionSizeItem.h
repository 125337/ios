@interface SessionSizeItem : NSObject
{
    unsigned int _msgOldestTime; // +0x8
    unsigned int _msgNewestTime; // +0xc
    NSString * _userName; // +0x10
    NSString * _sessionName; // +0x18
    unsigned long long _estimateSize; // +0x20
}
- (id)init;
- (id)description;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)sessionName;
- (void)setSessionName:(id)arg1;
- (unsigned int)msgOldestTime;
- (void)setMsgOldestTime:(unsigned int)arg1;
- (unsigned int)msgNewestTime;
- (void)setMsgNewestTime:(unsigned int)arg1;
- (unsigned long long)estimateSize;
- (void)setEstimateSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
