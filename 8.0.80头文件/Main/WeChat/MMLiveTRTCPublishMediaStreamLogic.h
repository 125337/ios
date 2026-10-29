@interface MMLiveTRTCPublishMediaStreamLogic : NSObject
{
    BOOL _shouldPublishMediaStreamAfterDelay; // +0x8
    BOOL _shouldRetryPublishMediaStreamWithoutDelay; // +0x9
    TRTCCloud * _trtcInstance; // +0x10
    NSString * _publishMediaStreamTaskId; // +0x18
    NSString * _lastPublishMediaStreamTaskId; // +0x20
    MMLiveTRTCPublishMediaStreamDataWrap * _currentDataWrap; // +0x28
    MMLiveTRTCPublishMediaStreamDataWrap * _nextDataWrap; // +0x30
    unsigned long long _currentState; // +0x38
    unsigned long long _requestFailedCount; // +0x40
    unsigned long long _updatePublishFailedUnknownServerErrorCount; // +0x48
    MMLivePushReporterExtInfo * _reporterExtInfo; // +0x50
    id <MMLiveTRTCPublishMediaStreamLogicDelegate> _logicDelegate; // +0x58
}
- (id)initWithTRTCCloudInstance:(id)arg1 logicDelegate:(id)arg2;
- (void)handleStartPublishMediaStreamResultWithTaskId:(id)arg1 code:(int)arg2 message:(id)arg3 extraInfo:(id)arg4;
- (void)handleUpdatePublishMediaStreamResultWithTaskId:(id)arg1 code:(int)arg2 message:(id)arg3 extraInfo:(id)arg4;
- (void)handleStopPublishMediaStreamResultWithTaskId:(id)arg1 code:(int)arg2 message:(id)arg3 extraInfo:(id)arg4;
- (void)handleConnectionRecovery;
- (void)publishMediaStream:(id)arg1;
- (void)handleExitRoom;
- (void)updateReporterExtInfo:(id)arg1;
- (void)reportPublishMediaStreamResultWithEvent:(unsigned long long)arg1 taskId:(id)arg2 code:(int)arg3 message:(id)arg4 serverErrorCode:(long long)arg5;
- (long long)extractServerErrorCodeFromExtraInfo:(id)arg1;
- (void)handlePublishMediaStreamServerProcessFailedWithTaskId:(id)arg1 message:(id)arg2 serverErrorCode:(long long)arg3 isStartPublishResult:(BOOL)arg4;
- (void)realPublishMediaStream;
- (void)checkNextDataWrapAndForcePublish:(BOOL)arg1;
- (double)currentDelayTime;
- (void)delayPublishMediaStream;
- (void)retryUpdatePublishMediaStream;
- (void)retryStopAndStartPublishMediaStream;
- (void)retryStartPublishMediaStream;
- (void)delayCheckPublishMediaStreamResult;
- (id)trtcInstance;
- (void)setTrtcInstance:(id)arg1;
- (id)publishMediaStreamTaskId;
- (void)setPublishMediaStreamTaskId:(id)arg1;
- (id)lastPublishMediaStreamTaskId;
- (void)setLastPublishMediaStreamTaskId:(id)arg1;
- (id)currentDataWrap;
- (void)setCurrentDataWrap:(id)arg1;
- (id)nextDataWrap;
- (void)setNextDataWrap:(id)arg1;
- (unsigned long long)currentState;
- (void)setCurrentState:(unsigned long long)arg1;
- (unsigned long long)requestFailedCount;
- (void)setRequestFailedCount:(unsigned long long)arg1;
- (unsigned long long)updatePublishFailedUnknownServerErrorCount;
- (void)setUpdatePublishFailedUnknownServerErrorCount:(unsigned long long)arg1;
- (BOOL)shouldPublishMediaStreamAfterDelay;
- (void)setShouldPublishMediaStreamAfterDelay:(BOOL)arg1;
- (BOOL)shouldRetryPublishMediaStreamWithoutDelay;
- (void)setShouldRetryPublishMediaStreamWithoutDelay:(BOOL)arg1;
- (id)reporterExtInfo;
- (void)setReporterExtInfo:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (void).cxx_destruct;
@end
