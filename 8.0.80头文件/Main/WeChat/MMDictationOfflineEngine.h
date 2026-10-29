@interface MMDictationOfflineEngine : NSObject
{
    void * _asrHandle; // +0x8
    BOOL _asrInited; // +0x10
    BOOL _asrStarted; // +0x11
    void * _ppHandle; // +0x18
    BOOL _ppInited; // +0x20
    BOOL _isReady; // +0x21
    id <MMDictationOfflineEngineDelegate> _delegate; // +0x28
    NSObject<OS_dispatch_queue> * _engineQueue; // +0x30
    NSObject<OS_dispatch_queue> * _postProcessQueue; // +0x38
    NSString * _currentSegmentId; // +0x40
    unsigned long long _currentStartFrameSeq; // +0x48
    unsigned long long _currentEndFrameSeq; // +0x50
    NSString * _activeSessionId; // +0x58
}
+ (id)sharedEngine;
- (id)initPrivate;
- (id)init;
- (void)dealloc;
- (void)prepareWithCompletion:(id /* block */)arg1;
- (void)prewarmAsync;
- (void)activateSession:(id)arg1;
- (BOOL)_ensureInitialized;
- (void)processPCM:(id)arg1 endFrameSeq:(unsigned long long)arg2 segmentId:(id)arg3 sessionId:(id)arg4;
- (void)finishCurrentSegmentForSession:(id)arg1 completion:(id /* block */)arg2;
- (void)_finalizeCurrentSegment;
- (void)cancelCurrentSegmentForSession:(id)arg1;
- (id)performPostProcess:(id)arg1 final:(BOOL)arg2;
- (void)drainWithCompletion:(id /* block */)arg1;
- (id)_decodeUTF8:(const void *)arg1;
- (id)_decodeGB18030:(const void *)arg1;
- (void)_firePartial:(id)arg1 segmentId:(id)arg2 endFrameSeq:(unsigned long long)arg3 sessionId:(id)arg4;
- (void)_fireFinal:(id)arg1 segmentId:(id)arg2 startFrameSeq:(unsigned long long)arg3 endFrameSeq:(unsigned long long)arg4 sessionId:(id)arg5;
- (void)_fireFailure:(long long)arg1 sessionId:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isReady;
- (void)setIsReady:(BOOL)arg1;
- (id)engineQueue;
- (void)setEngineQueue:(id)arg1;
- (id)postProcessQueue;
- (void)setPostProcessQueue:(id)arg1;
- (id)currentSegmentId;
- (void)setCurrentSegmentId:(id)arg1;
- (unsigned long long)currentStartFrameSeq;
- (void)setCurrentStartFrameSeq:(unsigned long long)arg1;
- (unsigned long long)currentEndFrameSeq;
- (void)setCurrentEndFrameSeq:(unsigned long long)arg1;
- (id)activeSessionId;
- (void)setActiveSessionId:(id)arg1;
- (void).cxx_destruct;
@end
