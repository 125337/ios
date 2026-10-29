@interface WAAgentChannelReportContext : NSObject
{
    unsigned long long _channelReadyStartTsMs; // +0x8
    NSString * _channelReadyEventId; // +0x10
    unsigned long long _bizLaunchStartTsMs; // +0x18
    NSString * _bizLaunchEventId; // +0x20
    NSString * _voipConnectEventId; // +0x28
    unsigned long long _voipConnectStartTsMs; // +0x30
}
- (void)beginChannelReadyWithAppid:(id)arg1 isColdLaunch:(BOOL)arg2 needsVoipJoin:(BOOL)arg3 needsBizLaunch:(BOOL)arg4;
- (void)completeChannelReadyWithAppid:(id)arg1 isSuccess:(BOOL)arg2;
- (void)beginBizLaunchWithAppid:(id)arg1;
- (unsigned int)completeBizLaunchWithAppid:(id)arg1 isSuccess:(BOOL)arg2 errMsg:(id)arg3;
- (void)beginVoipConnectWithAppid:(id)arg1 roomId:(id)arg2 voipStartTsMs:(unsigned long long)arg3;
- (unsigned int)reportVoipConnectedWithAppid:(id)arg1 roomId:(id)arg2 isSuccess:(BOOL)arg3 errorCode:(int)arg4 errorMsg:(id)arg5;
- (void)reportVoipDisconnectedWithAppid:(id)arg1 roomId:(id)arg2 voipStartTsMs:(unsigned long long)arg3;
- (unsigned long long)channelReadyStartTsMs;
- (void)setChannelReadyStartTsMs:(unsigned long long)arg1;
- (id)channelReadyEventId;
- (void)setChannelReadyEventId:(id)arg1;
- (unsigned long long)bizLaunchStartTsMs;
- (void)setBizLaunchStartTsMs:(unsigned long long)arg1;
- (id)bizLaunchEventId;
- (void)setBizLaunchEventId:(id)arg1;
- (id)voipConnectEventId;
- (void)setVoipConnectEventId:(id)arg1;
- (unsigned long long)voipConnectStartTsMs;
- (void)setVoipConnectStartTsMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
