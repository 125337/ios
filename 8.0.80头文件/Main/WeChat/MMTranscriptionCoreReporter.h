@interface MMTranscriptionCoreReporter : NSObject
{
    BOOL _didReportTailFinish; // +0x8
    NSString * _voiceId; // +0x10
    long long _scene; // +0x18
    unsigned long long _transportType; // +0x20
    double _tailWaitDuration; // +0x28
    NSString * _onlineSessionId; // +0x30
    NSString * _latestOnlineText; // +0x38
    id <MMTranscriptionReporter> _performanceReporter; // +0x40
    NSDate * _firstRequestDate; // +0x48
    NSMutableDictionary * _requestSendTimes; // +0x50
}
- (id)initWithVoiceId:(id)arg1 configuration:(id)arg2;
- (void)coreDidStartWithNetworkReachable:(BOOL)arg1 offlineResourcesReady:(BOOL)arg2 onlineEnabled:(BOOL)arg3 offlineEnabled:(BOOL)arg4;
- (void)coreDidAppendPCMDataWithLength:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;
- (void)coreDidDeliverResult:(id)arg1;
- (void)coreDidMergeResultBeforeText:(id)arg1 afterText:(id)arg2 offlineDeltaLen:(unsigned long long)arg3 restoredToOnline:(BOOL)arg4 didCommit:(BOOL)arg5;
- (void)coreDidFinishResult:(id)arg1 endFlag:(unsigned int)arg2;
- (void)coreDidFailWithError:(long long)arg1;
- (void)coreDidCancel;
- (void)onlineChannelDidStartWithEncodeType:(unsigned int)arg1;
- (void)onlineTransportDidStartWithSessionId:(id)arg1;
- (void)onlineDidEnqueueEncodedDataWithLength:(unsigned long long)arg1;
- (void)onlineWillSendRequestWithSeq:(unsigned int)arg1 dataLength:(unsigned long long)arg2 isEnd:(BOOL)arg3;
- (void)onlineDidSendRequestWithSeq:(unsigned int)arg1 dataLength:(unsigned long long)arg2 isEnd:(BOOL)arg3;
- (void)onlineDidReceiveResponseForRequestSeq:(unsigned int)arg1 responseSeq:(unsigned int)arg2 originEndSeq:(unsigned int)arg3 text:(id)arg4 endFlag:(unsigned int)arg5 tailWaitTimedOut:(BOOL)arg6;
- (void)onlineDidFinishWithEndFlag:(unsigned int)arg1;
- (void)onlineDidFailWithError:(long long)arg1;
- (void)offlineChannelDidStart;
- (void)offlineEngineDidPrepare:(BOOL)arg1;
- (void)offlineVADDidPrepare:(BOOL)arg1;
- (void)offlineVADSpeakingChanged:(BOOL)arg1;
- (void)offlinePipelineDidBecomeReadyWithPendingFrameCount:(unsigned long long)arg1;
- (void)offlineDidEmitResultWithTextLength:(unsigned long long)arg1 isFinal:(BOOL)arg2;
- (void)offlineDidUpdateAccumulatedText:(id)arg1;
- (void)offlineDidFinish;
- (void)offlineDidFailWithError:(long long)arg1;
- (BOOL)shouldReportDictationNetworkEvent;
- (BOOL)shouldReportVoiceInputOfflineEvent;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (unsigned long long)transportType;
- (void)setTransportType:(unsigned long long)arg1;
- (double)tailWaitDuration;
- (void)setTailWaitDuration:(double)arg1;
- (id)onlineSessionId;
- (void)setOnlineSessionId:(id)arg1;
- (id)latestOnlineText;
- (void)setLatestOnlineText:(id)arg1;
- (id)performanceReporter;
- (void)setPerformanceReporter:(id)arg1;
- (id)firstRequestDate;
- (void)setFirstRequestDate:(id)arg1;
- (id)requestSendTimes;
- (void)setRequestSendTimes:(id)arg1;
- (BOOL)didReportTailFinish;
- (void)setDidReportTailFinish:(BOOL)arg1;
- (void).cxx_destruct;
@end
