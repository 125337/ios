@interface MMFinderLiveAdvertisementPlayerViewModel : MMFinderLiveWcPlayerViewModel <MMLiveTaskMgrExt>
{
    NSMutableSet * _preloadAdvertisementSet; // +0x8
    unsigned long long _beginShowAdVideoTimeForReport; // +0x10
    WCFinderLivePlayerViewReporter * _playerViewReporter; // +0x18
    MMLiveStorageCleanupPinningToken * _resourcesPinningToken; // +0x20
}
- (id)initTaskId:(id)arg1 config:(id)arg2;
- (void)dealloc;
- (BOOL)play;
- (void)playFinish;
- (id)createPlayerInfo;
- (id)generateDownloadArgsWrap;
- (id)videoSavePath;
- (id)videoFormatPath;
- (id)saveFilename;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)onLiveTask:(id)arg1 synchronizedFinderLiveAnchorTimeInterval:(id)arg2;
- (void)onLiveTaskWillShowLiveAdvertisement:(id)arg1 liveAdId:(id)arg2 liveAdPlayUrl:(id)arg3;
- (void)registerExt;
- (void)unRegisterExt;
- (void)preloadPreloadPlayerDataWithRequest:(id)arg1 liveAdId:(id)arg2;
- (unsigned long long)audienceAdVideoScenReportType:(unsigned long long)arg1;
- (double)adVideoDiffernetValue;
- (void)onExitLive;
- (id)playerId;
- (id)adId;
- (unsigned long long)currentAdTime;
- (unsigned long long)currentAdVideoDuration;
- (void)hiddenBufferingView;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPlayFinish;
- (void)showBufferingView;
- (id)preloadAdvertisementSet;
- (void)setPreloadAdvertisementSet:(id)arg1;
- (unsigned long long)beginShowAdVideoTimeForReport;
- (void)setBeginShowAdVideoTimeForReport:(unsigned long long)arg1;
- (id)playerViewReporter;
- (void)setPlayerViewReporter:(id)arg1;
- (id)resourcesPinningToken;
- (void)setResourcesPinningToken:(id)arg1;
- (void).cxx_destruct;
@end

