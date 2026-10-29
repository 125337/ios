@interface MMFinderLiveAiAssistantCppBridge : NSObject <LiveURLiveAiAssistantLogicObserver, MMFinderLiveAiAssistantExt, MMLiveKWSEngineDelegate, MMFinderLiveMusicSettingReportDelegate>
{
    BOOL _isAiAssistantEnabled; // +0x8
    BOOL _useXiaoWeiKWSEngine; // +0x9
    BOOL _hasReportedFirstExposeInLive; // +0xa
    MMFinderLiveTaskId * _taskId; // +0x10
    FinderLiveAiAssistantNotification * _currentAiAssistantInfo; // +0x18
    id <MMFinderLiveAiAssistantLogicDelegate> _delegate; // +0x20
    NSArray * _notificationList; // +0x28
    id <LiveURLiveAiAssistantLogicService> _cppService; // +0x30
    NSString * _kwsResourceName; // +0x38
    id <MMLiveKWSEngine> _kwsProcessor; // +0x40
    MMTimer * _videoFrameTimer; // +0x48
    NSObject<OS_dispatch_queue> * _videoCompressQueue; // +0x50
    CIContext * _ciContext; // +0x58
    __CVBuffer * _cachedPixelBuffer; // +0x60
}
- (id)initWithTaskId:(id)arg1 delegate:(id)arg2;
- (void)stop;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)onFirstJoinLive;
- (void)onAnchorStatusUpdatedForAiAssistant;
- (void)onGetHandledFinderLiveMessageForAiAssistant;
- (void)updateAnchorVoiceVolume:(unsigned long long)arg1;
- (void)processCapturedAudioFrame:(id)arg1;
- (void)onAiAssistantNotificationListUpdated:(id)arg1;
- (void)onRequestUIAction:(id)arg1 displayAction:(int)arg2 isManualTrigger:(BOOL)arg3;
- (void)onAiAssistantEnabledChanged:(BOOL)arg1;
- (void)onUpdateGlowVolume:(float)arg1;
- (void)onToolCallsReceived:(id)arg1 msgId:(id)arg2 sessionId:(id)arg3 requestId:(unsigned long long)arg4;
- (void)onFeatureGuide:(id)arg1;
- (void)onJumpInfo:(id)arg1;
- (void)onInitKWSEngine:(id)arg1;
- (void)onAsrResultUpdate:(id)arg1 resultText:(id)arg2 endFlag:(unsigned int)arg3 vadIsEnd:(BOOL)arg4;
- (void)onAsrEndStateNotify:(int)arg1 errorMsg:(id)arg2;
- (void)onReportWithdrawn:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)onReportInfoReceive:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)processFeatureGuide:(id)arg1;
- (void)onAiAssistantInfoUpdatedWithTaskId:(id)arg1 aiAssistantInfo:(id)arg2 channelType:(unsigned long long)arg3;
- (void)onAiAssistantActionClickBannerWithTaskId:(id)arg1 aiAssistantInfo:(id)arg2;
- (void)onAiAssistantActionClickedWithTaskId:(id)arg1 aiAssistantInfo:(id)arg2;
- (void)onAiAssistantActionClosedWithTaskId:(id)arg1 aiAssistantInfo:(id)arg2;
- (void)onAiAssistantActionClickBGWithTaskId:(id)arg1 aiAssistantInfo:(id)arg2;
- (void)onAiAssistantActionDetailTimerFireWithTaskId:(id)arg1 aiAssistantInfo:(id)arg2;
- (void)onAiAssistantKWSResourceLoadResult:(BOOL)arg1;
- (void)initKWSEngine;
- (void)loadKWSResource;
- (void)triggerKWSResourceUDRCheck;
- (void)loadKWSResourceFromUDRResource:(id)arg1;
- (void)releaseKWSEngine;
- (void)onKWSWakeupDetected:(id)arg1 confidence:(float)arg2;
- (void)onReportMusicSettingActionType:(long long)arg1 songIdList:(id)arg2;
- (void)onReportBGMusicWithAction:(unsigned long long)arg1 tab:(unsigned int)arg2 listenId:(id)arg3 aiAssistantId:(id)arg4;
- (void)onReportBGMusicPlayWithAction:(unsigned long long)arg1 listenId:(id)arg2 playId:(unsigned long long)arg3 playDuration:(unsigned long long)arg4;
- (void)processLocalVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (void)cachePixelBuffer:(__CVBuffer *)arg1;
- (void)startVideoFrameCapture;
- (void)stopVideoFrameCapture;
- (void)onVideoFrameTimerFired;
- (id)compressPixelBuffer:(__CVBuffer *)arg1;
- (id)liveTask;
- (id)anchorReporter;
- (void)reportFirstExposeInLive;
- (id)taskId;
- (BOOL)isAiAssistantEnabled;
- (void)setIsAiAssistantEnabled:(BOOL)arg1;
- (id)currentAiAssistantInfo;
- (void)setCurrentAiAssistantInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)notificationList;
- (void)setNotificationList:(id)arg1;
- (id)cppService;
- (void)setCppService:(id)arg1;
- (BOOL)useXiaoWeiKWSEngine;
- (void)setUseXiaoWeiKWSEngine:(BOOL)arg1;
- (id)kwsResourceName;
- (void)setKwsResourceName:(id)arg1;
- (id)kwsProcessor;
- (void)setKwsProcessor:(id)arg1;
- (id)videoFrameTimer;
- (void)setVideoFrameTimer:(id)arg1;
- (id)videoCompressQueue;
- (void)setVideoCompressQueue:(id)arg1;
- (id)ciContext;
- (void)setCiContext:(id)arg1;
- (__CVBuffer *)cachedPixelBuffer;
- (void)setCachedPixelBuffer:(__CVBuffer *)arg1;
- (BOOL)hasReportedFirstExposeInLive;
- (void)setHasReportedFirstExposeInLive:(BOOL)arg1;
- (void).cxx_destruct;
@end
