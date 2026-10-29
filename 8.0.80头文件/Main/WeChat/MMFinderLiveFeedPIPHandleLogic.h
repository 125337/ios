@interface MMFinderLiveFeedPIPHandleLogic : MMLiveCustomRenderPIPHandleLogic
{
    BOOL _pipCreateDefaultPlaying; // +0x8
    id <MMFinderLiveFeedPIPHandleLogicDelegate> _logicDelegate; // +0x10
    MMFinderLiveFeedPIPContext * _context; // +0x18
    WCFinderFeedContentVM * _curContentVM; // +0x20
    MMFinderLiveFeedPIPSessionInfo * _sessionInfo; // +0x28
    CGSize _currVideoSize; // +0x30
}
- (void)reportPIPCreate:(id)arg1;
- (void)reportPIPClose;
- (void)reportPIPPause;
- (void)reportPIPPlay;
- (void)reportPIPPlayFinished;
- (void)reportEvent:(id)arg1 extra:(id)arg2;
- (id)buildCommonParams;
- (id)transferStopReasonToCloseType:(long long)arg1;
- (id)initWithFeedStreamTaskId:(id)arg1 context:(id)arg2;
- (void)registerExtensions;
- (void)onLiveFeedPlayingChanged:(BOOL)arg1;
- (void)onLiveFeedVCDidAppear;
- (void)onLiveFeedVCWillDisappear;
- (void)onLiveFeedMinimizeWindowExtend;
- (void)onLiveFeedVideoSizeChanged:(CGSize)arg1;
- (void)onLiveFeedPlayerRectChanged:(CGRect)arg1;
- (void)startLoading;
- (void)stopLoading;
- (void)tryPauseLiveByPIPForPlayerStatusPaused;
- (void)tryResumeLiveByPIPForPlayerStatusPlaying;
- (void)checkNeedResumeLiveAndStartTracingForPIP;
- (BOOL)checkCurrHasPIPAuthority;
- (void)destroy;
- (void)enableBackgroundDecoding:(BOOL)arg1;
- (void)enableBackgroundRendering:(BOOL)arg1;
- (unsigned long long)preferPIPAutoStopType;
- (void)autoStopPIP:(unsigned long long)arg1;
- (void)onStartPIP;
- (void)onStopPIP;
- (void)onPlayerTimeControlStatusChanged:(long long)arg1;
- (void)hideLiveMinimizeView;
- (void)showLiveMinimizeView;
- (void)clearLastPIPRunningTags;
- (BOOL)isLiveCurrentPlaying;
- (BOOL)checkRootLiveIsCurrentLive;
- (void)resumeLiveIfNeedWhenEnterForeground;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (id)feedStreamTask;
- (BOOL)needOpenLivePIP;
- (BOOL)isLiveInMinimizeMode;
- (CGSize)currLiveVideoSize;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (CGSize)currVideoSize;
- (void)setCurrVideoSize:(CGSize)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)curContentVM;
- (void)setCurContentVM:(id)arg1;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (BOOL)pipCreateDefaultPlaying;
- (void)setPipCreateDefaultPlaying:(BOOL)arg1;
- (void).cxx_destruct;
@end
