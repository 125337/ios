@interface WCFinderMinimizeLiveContentView : WCFinderMinimizeDisplayContentBaseView <MMLiveCDNPlayerViewDelegate, MMLiveCDNPlayerViewMinimizeModeDelegate>
{
    MMLiveCDNPlayerView * _playerView; // +0x38
    UIImage * _tmpSnapImageForMinimizeAnimation; // +0x40
    UIView * _playerContainerView; // +0x48
    CGSize _originSize; // +0x50
}
- (void)dealloc;
- (void)cleanUp;
- (void)pausePlay;
- (void)resumePlay;
- (id)animatingSnapView;
- (CGSize)contentSize;
- (BOOL)needFullCover;
- (void)updateContentVM:(id)arg1;
- (void)layoutSubviews;
- (void)updatePlayerViewFrame;
- (BOOL)beTakeOverAudioModel;
- (void)didMoveToSuperview;
- (void)onMinimizeFloatingViewDidDisplay;
- (void)setPlayerView:(id)arg1;
- (void)hidePlayerViewIfNeeded:(BOOL)arg1;
- (unsigned long long)getCurAudioModuleOptions;
- (void)onLiveCDNPlayerViewPlayStateChangedTo:(unsigned long long)arg1;
- (void)onLiveCDNPlayerViewMinimizeSizeStyleChangedTo:(unsigned long long)arg1;
- (CGSize)originSize;
- (void)setOriginSize:(CGSize)arg1;
- (id)playerView;
- (id)tmpSnapImageForMinimizeAnimation;
- (void)setTmpSnapImageForMinimizeAnimation:(id)arg1;
- (id)playerContainerView;
- (void)setPlayerContainerView:(id)arg1;
- (void).cxx_destruct;
@end
