@interface MMOfflineTranscriptionChannel : NSObject <MMDictationOfflineEngineDelegate, MMDictationOfflineSegmenterDelegate, MMTranscriptionChannel>
{
    BOOL _networkReachable; // +0x8
    BOOL _started; // +0x9
    BOOL _cancelled; // +0xa
    BOOL _failed; // +0xb
    BOOL _finishing; // +0xc
    BOOL _didFinish; // +0xd
    BOOL _enginePrepared; // +0xe
    BOOL _vadPrepared; // +0xf
    BOOL _pipelineReady; // +0x10
    BOOL _didLogCacheOverflow; // +0x11
    id <MMTranscriptionChannelDelegate> _delegate; // +0x18
    NSString * _voiceId; // +0x20
    MMDictationOfflineSegmenter * _segmenter; // +0x28
    MMDictationOfflineActivationController * _activation; // +0x30
    NSMutableArray * _pendingFrames; // +0x38
    MMTranscriptionCoreReporter * _reporter; // +0x40
}
- (id)initWithVoiceId:(id)arg1 networkReachable:(BOOL)arg2 reporter:(id)arg3;
- (void)dealloc;
- (void)start;
- (void)appendPCMData:(id)arg1 endFrameSeq:(unsigned long long)arg2;
- (void)updateExtraData:(id)arg1;
- (void)finish;
- (void)cancel;
- (void)notifyOnlineEndFrameSeq:(unsigned long long)arg1;
- (void)markOnlineFailed;
- (void)activatePipelineIfReady;
- (void)cancelOfflineWork;
- (void)notifyFinished;
- (void)fail:(long long)arg1;
- (void)offlineEngine:(id)arg1 didEmitPartialText:(id)arg2 segmentId:(id)arg3 endFrameSeq:(unsigned long long)arg4 sessionId:(id)arg5;
- (void)offlineEngine:(id)arg1 didFinalizeSegment:(id)arg2 segmentId:(id)arg3 startFrameSeq:(unsigned long long)arg4 endFrameSeq:(unsigned long long)arg5 sessionId:(id)arg6;
- (void)offlineEngine:(id)arg1 didFailWithError:(long long)arg2 sessionId:(id)arg3;
- (void)offlineSegmenter:(id)arg1 didStartSpeakingAt:(unsigned long long)arg2 segmentId:(id)arg3;
- (void)offlineSegmenter:(id)arg1 didEndSpeak:(unsigned long long)arg2 segmentId:(id)arg3;
- (void)offlineSegmenter:(id)arg1 didProducePCM:(id)arg2 endFrameSeq:(unsigned long long)arg3 segmentId:(id)arg4;
- (void)offlineSegmenter:(id)arg1 didFailWithError:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (BOOL)networkReachable;
- (void)setNetworkReachable:(BOOL)arg1;
- (BOOL)started;
- (void)setStarted:(BOOL)arg1;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
- (BOOL)failed;
- (void)setFailed:(BOOL)arg1;
- (BOOL)finishing;
- (void)setFinishing:(BOOL)arg1;
- (BOOL)didFinish;
- (void)setDidFinish:(BOOL)arg1;
- (BOOL)enginePrepared;
- (void)setEnginePrepared:(BOOL)arg1;
- (BOOL)vadPrepared;
- (void)setVadPrepared:(BOOL)arg1;
- (BOOL)pipelineReady;
- (void)setPipelineReady:(BOOL)arg1;
- (BOOL)didLogCacheOverflow;
- (void)setDidLogCacheOverflow:(BOOL)arg1;
- (id)segmenter;
- (void)setSegmenter:(id)arg1;
- (id)activation;
- (void)setActivation:(id)arg1;
- (id)pendingFrames;
- (void)setPendingFrames:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end
