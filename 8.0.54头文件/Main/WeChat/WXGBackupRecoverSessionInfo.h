@interface WXGBackupRecoverSessionInfo : NSObject
{
    NSString * _sessionName; // +0x8
    unsigned long long _startTime; // +0x10
    unsigned long long _endTime; // +0x18
}
- (id)sessionName;
- (void)setSessionName:(id)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)endTime;
- (void)setEndTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

