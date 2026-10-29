@interface LVMinimize : NSObject <MinimizeTaskContainerInfoDelegate, IMinimizeTaskDelegateInterface, LVMinimizeContainerViewDelegate, WCFinderFeedContentMediaActionProtocol, WCFinderLandScapePlayCompleteTipsViewDelegate>
{
    BOOL _supportContinuePlay; // +0x8
    LVMinimizeContext * _minimizeContext; // +0x10
    LVStarHandler * _starHandler; // +0x18
    LVMinimizeContainerView * _containerView; // +0x20
    NSString * _sessionId; // +0x28
    WCFinderLandScapePlayCompleteTipsView * _playCompleteTipsView; // +0x30
}
- (void)dealloc;
- (id)containerView;
- (id)minimizeContainerInfo:(id)arg1 size:(CGSize)arg2;
- (id)minimizeTaskData;
- (id)starHandler;
- (BOOL)checkCanMinimize:(BOOL)arg1;
- (BOOL)canMinimize;
- (BOOL)hasMinimizeTask;
- (BOOL)isPlaying;
- (void)setMinimizeFold:(BOOL)arg1;
- (void)_updateMinimize:(id)arg1 context:(id)arg2 playerView:(id)arg3;
- (BOOL)_activeMinimize:(BOOL)arg1;
- (void)activeMinimize:(id)arg1 animated:(BOOL)arg2;
- (void)deactiveMinimize:(BOOL)arg1;
- (id)clearMinimize;
- (id)takeSnapshot:(id)arg1;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (BOOL)isMinimizeTaskPlaying:(id)arg1;
- (void)minimizeContainerView:(id)arg1 playPauseClicked:(id)arg2;
- (void)minimizeContainerView:(id)arg1 closeClicked:(id)arg2;
- (void)minimizeContainerViewClicked:(id)arg1;
- (void)_enterPlayerDetail;
- (void)finderLandScapePlayCompleteTipsViewDidCountdownActionOver:(id)arg1;
- (void)onSimplePlayerView:(id)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onSimplePlayerRestoreUserInterfaceForPictureInPictureStop:(id)arg1;
- (void)onPlayerMuteByAudioModuleInterruptionBegin:(id)arg1;
- (void)onPlayerUnMuteByAudioModuleInterruptionEnd:(id)arg1;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onVideoShowBufferingView;
- (void)onVideoHiddenBufferingView;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)contentMediaDidEndPlay:(id)arg1;
- (void)_cancelPlayNext;
- (void)_playNextFeed;
- (void)_report:(id)arg1 extraParams:(id)arg2;
- (void)_reportEndPlay:(unsigned long long)arg1;
- (void)_reportPlayTime;
- (id)minimizeContext;
- (void)setMinimizeContext:(id)arg1;
- (void)setStarHandler:(id)arg1;
- (void)setContainerView:(id)arg1;
- (BOOL)supportContinuePlay;
- (void)setSupportContinuePlay:(BOOL)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)playCompleteTipsView;
- (void)setPlayCompleteTipsView:(id)arg1;
- (void).cxx_destruct;
@end

