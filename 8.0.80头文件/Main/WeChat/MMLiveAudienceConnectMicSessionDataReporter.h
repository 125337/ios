@interface MMLiveAudienceConnectMicSessionDataReporter : NSObject
{
    unsigned int _liveMode; // +0x8
    unsigned int _liveSubMode; // +0xc
    MMFinderLiveTaskId * _taskId; // +0x10
    NSString * _subSessionId; // +0x18
    unsigned long long _connectMicScene; // +0x20
}
- (id)initWithTaskId:(id)arg1;
- (void)updateConnectMicScene:(unsigned long long)arg1;
- (void)updateDataWithSubSessionId:(id)arg1 liveMode:(unsigned int)arg2 liveSubMode:(unsigned int)arg3;
- (void)reportSessionBegin;
- (void)reportSessionEnd;
- (void)reportSessionWithType:(unsigned long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)subSessionId;
- (void)setSubSessionId:(id)arg1;
- (unsigned int)liveMode;
- (void)setLiveMode:(unsigned int)arg1;
- (unsigned int)liveSubMode;
- (void)setLiveSubMode:(unsigned int)arg1;
- (unsigned long long)connectMicScene;
- (void)setConnectMicScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
