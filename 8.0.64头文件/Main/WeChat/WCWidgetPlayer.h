@interface WCWidgetPlayer : NSObject <WCAudioModuleDelegate, EditVideoBGMPlayerDelegate>
{
    WCWidgetPlayerParams * _params; // +0x8
    EditVideoBGMPlayer * _bgmPlayer; // +0x10
}
- (id)initWithParams:(id)arg1;
- (void)dealloc;
- (void)_clear;
- (void)bindSuperview:(id)arg1;
- (void)bindSuperview:(id)arg1 aboveView:(id)arg2;
- (BOOL)hasBoundSuperview:(id)arg1;
- (void)bindSuperlayer:(id)arg1;
- (void)bindSuperlayer:(id)arg1 atZPosition:(double)arg2;
- (BOOL)hasBoundSuperlayer:(id)arg1;
- (void)unbindPlayer;
- (void)_unbindSuperview;
- (void)_unbindSuperlayer;
- (void)onPlayerRelayoutToSize:(CGSize)arg1 atOrigin:(CGPoint)arg2 scaleByHeight:(BOOL)arg3;
- (void)onPlayerRelayoutToSize:(CGSize)arg1 atCenter:(CGPoint)arg2 scaleByHeight:(BOOL)arg3;
- (void)onPlayerResumed;
- (void)_resumeOverlayView;
- (void)_resumeOverlayViewLayer;
- (void)_resumeBGMMusic;
- (void)onPlayerPaused;
- (void)_pauseOverlayView;
- (void)_pauseOverlayViewLayer;
- (void)_pauseBGMMusic;
- (void)onPlayerSeekedToTimeSec:(double)arg1;
- (void)_seekOverlayViewToTimeSec:(double)arg1;
- (void)_seekBGMMusicToTimeSec:(double)arg1;
- (void)onPlayerStopped;
- (void)_stopOverlayView;
- (void)_stopBGMMusic;
- (void)onPlayerRestarted;
- (void)_restartOverlayView;
- (void)_restartBGMMusic;
- (void)onPlayerChangedMute:(BOOL)arg1;
- (void)_changeMutedBGMMusic:(BOOL)arg1;
- (BOOL)isPlayerMuted;
- (void)onPlayerChangeHidden:(BOOL)arg1;
- (void)_changeHiddenOverlayView:(BOOL)arg1;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)_updateAudioSession;
- (void)_activeAudioModule;
- (void)_deactiveAudioModule;
- (void)_tryToUpdateBgmPlayerToMute:(BOOL)arg1;
- (void)onEditVideoBGMPlayerReadyToPlay;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)onEditVideoBGMPlayerTimeControlStatusChange:(long long)arg1;
- (void)_initBGMPlayerIfNeeded;
- (id)params;
- (void)setParams:(id)arg1;
- (id)bgmPlayer;
- (void)setBgmPlayer:(id)arg1;
- (void).cxx_destruct;
@end
