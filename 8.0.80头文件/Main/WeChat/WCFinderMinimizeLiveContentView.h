@interface WCFinderMinimizeLiveContentView : WCFinderMinimizeDisplayContentBaseView <MMLiveCDNPlayerViewDelegate, MMLiveCDNPlayerViewMinimizeModeDelegate>
{
    MMLiveCDNPlayerView * _playerView; // +0x30
    UIImage * _tmpSnapImageForMinimizeAnimation; // +0x38
    UIView * _playerContainerView; // +0x40
    UIImageView * _playerSnapshotImgView; // +0x48
    CGSize _originSize; // +0x50
}
- (void)dealloc;
- (void)cleanUp;
- (void)pausePlay;
- (void)resumePlay;
- (id)animatingSnapView;
- (CGSize)contentSize;
- (void)updateContentVM:(id)arg1;
- (void)layoutSubviews;
- (void)updatePlayerContainerViewFrame;
- (void)onPlayerContainerSizeChanged;
- (void)updatePlayerViewFrame;
- (CGRect)getPlayerViewRect;
- (BOOL)beTakeOverAudioModel;
- (void)didMoveToSuperview;
- (void)onMinimizeFloatingViewDidDisplay;
- (void)setPlayerView:(id)arg1;
- (void)hidePlayerViewIfNeeded:(BOOL)arg1;
- (unsigned long long)getCurAudioModuleOptions;
- (void)onLiveCDNPlayerViewPlayStateChangedTo:(unsigned long long)arg1;
- (void)onLiveCDNPlayerViewEnterPIPMode:(id)arg1;
- (void)onLiveCDNPlayerViewExitPIPMode:(id)arg1;
- (CGRect)getLiveCDNPlayerViewPIPCurrentRenderViewFrame:(id)arg1;
- (double)getLiveCDNPlayerViewPIPRenderSizeHeightWidthPercent:(id)arg1;
- (void)onLiveCDNPlayerViewEnterForegroundWithPIPActive:(id)arg1;
- (void)createPlayerSnapshotImgViewIfNeed;
- (void)releasePlayerSnapshotImgViewIfNeed;
- (BOOL)checkLiveCDNPlayerViewForbidPIPModuleAuthority:(id)arg1;
- (void)onLiveCDNPlayerViewPIPChangePlayingState:(BOOL)arg1;
- (void)onLiveCDNPlayerViewMinimizeSizeStyleChangedTo:(unsigned long long)arg1;
- (void)onLiveCDNPlayerViewRequestFloatingExpandWithoutAnimation;
- (void)notifyPipAudioModuleActiveStateChanged:(BOOL)arg1;
- (BOOL)isAudioModuleDeactiveWhenInterruptionBegin;
- (CGSize)originSize;
- (void)setOriginSize:(CGSize)arg1;
- (id)playerView;
- (id)tmpSnapImageForMinimizeAnimation;
- (void)setTmpSnapImageForMinimizeAnimation:(id)arg1;
- (id)playerContainerView;
- (void)setPlayerContainerView:(id)arg1;
- (id)playerSnapshotImgView;
- (void)setPlayerSnapshotImgView:(id)arg1;
- (void).cxx_destruct;
@end
