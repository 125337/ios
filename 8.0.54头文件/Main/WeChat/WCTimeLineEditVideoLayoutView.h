@interface WCTimeLineEditVideoLayoutView : WCEditVideoLayoutView
{
    BOOL _shouldRecoverLyricsWidget; // +0x8
    BOOL _shouldShowNewBGMPanel; // +0x9
    NSMutableArray * _currentMusicLyrics; // +0x10
    double _currentLyricTotalTime; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initEditImageView;
- (BOOL)recoverBGMViewForEditVideoAttr:(id)arg1;
- (void)_recoverLyricsWidget;
- (void)EditVideoBGMViewLyricOnOffStateChange:(BOOL)arg1;
- (void)bgmSelectedViewController:(id)arg1 didClickLyricOnBtn:(BOOL)arg2;
- (void)onEditSuccess:(BOOL)arg1 withTimeRange:(struct)arg2;
- (unsigned long long)setBGMViewButtonOption;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (void)editImageViewLyricsWidgetHadBeenDoubleTap;
- (void)EditVideoBGMViewLyricUpdate:(id)arg1 totalTime:(double)arg2;
- (void)setPlayerTimeControlStatusChangeBlock;
- (void)updateLyricInfo:(id)arg1 totoalTimeInSeconds:(double)arg2;
- (BOOL)isLyricOn;
- (void)_updateLyricsWidgetTime;
- (BOOL)scrollViewDidZoom:(id)arg1;
- (BOOL)shouldShowNewBGMPanel;
- (void)onBGMSelectedViewControllerInit;
- (id)createBGMPanelTabModels;
- (id)createBGMSelectedConfigWithPreferDuration:(unsigned long long)arg1;
- (void)handleBGMSelectedViewController:(id)arg1 didSelectedMusic:(id)arg2;
- (void)handleBGMSelectedViewController:(id)arg1 didChangeVisibleHeight:(double)arg2;
- (void)adjustPreviewFrameToFitBGMPanel:(double)arg1;
- (CGSize)editVideoLayoutViewSize;
- (double)videoScaleForHalfScreenHeight:(double)arg1;
- (void)onTimeLineEditVideoViewControllerWillTransitionToSize;
- (id)currentMusicLyrics;
- (void)setCurrentMusicLyrics:(id)arg1;
- (double)currentLyricTotalTime;
- (void)setCurrentLyricTotalTime:(double)arg1;
- (BOOL)shouldRecoverLyricsWidget;
- (void)setShouldRecoverLyricsWidget:(BOOL)arg1;
- (void)setShouldShowNewBGMPanel:(BOOL)arg1;
- (void).cxx_destruct;
@end

