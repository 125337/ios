@interface MMFinderRecordLiveHander : NSObject
{
    BOOL _isBroadcastRecording; // +0x8
    id <MMFinderRecordLiveHanderProtocol> _delegate; // +0x10
    unsigned long long _liveState; // +0x18
}
- (id)init;
- (void)broadcastStartedWithSetupInfo:(id)arg1;
- (void)broadcastPaused;
- (void)broadcastResumed;
- (void)broadcastFinished;
- (void)processSampleBuffer:(opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;
- (void)initRecord;
- (void)stopRecord;
- (void)startPortraitRecord;
- (void)startLandscapeRecord;
- (void)onNoticedBroadcastRecording;
- (void)addNotificationObserver;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)liveState;
- (void)setLiveState:(unsigned long long)arg1;
- (BOOL)isBroadcastRecording;
- (void)setIsBroadcastRecording:(BOOL)arg1;
- (void).cxx_destruct;
@end

