@interface MMLiveXPlatPollingFetchTask : NSObject <LiveURLivePollingTask>
{
    unsigned long long _cmdId; // +0x8
    unsigned long long _waitDurationStorage; // +0x10
}
- (unsigned long long)commandId;
- (unsigned long long)waitDuration;
- (unsigned long long)cmdId;
- (void)setCmdId:(unsigned long long)arg1;
- (unsigned long long)waitDurationStorage;
- (void)setWaitDurationStorage:(unsigned long long)arg1;
@end
