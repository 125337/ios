@interface WCFinderEditVideoBasicLayoutView : WCEditVideoLayoutView
{
    NSMutableArray * _currentMusicLyrics; // +0x8
    double _currentLyricTotalTime; // +0x10
}
- (void)initEditImageView;
- (void)EditVideoBGMViewLyricOnOffStateChange:(BOOL)arg1;
- (void)onEditSuccess:(BOOL)arg1 withTimeRange:(struct)arg2;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (void)editImageViewLyricsWidgetHadBeenDoubleTap;
- (void)EditVideoBGMViewLyricUpdate:(id)arg1 totalTime:(double)arg2;
- (void)setPlayerTimeControlStatusChangeBlock;
- (id)customBottomButtonOrder;
- (unsigned long long)setBGMViewButtonOption;
- (id)getMusicLogoName;
- (BOOL)shouldShowNewBGMPanel;
- (void)bgmSelectedViewController:(id)arg1 didSelectedMusic:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4 isTriggerByTap:(BOOL)arg5;
- (void)bgmSelectedViewController:(id)arg1 didClickLyricOnBtn:(BOOL)arg2;
- (id)currentMusicLyrics;
- (void)setCurrentMusicLyrics:(id)arg1;
- (double)currentLyricTotalTime;
- (void)setCurrentLyricTotalTime:(double)arg1;
- (void).cxx_destruct;
@end
