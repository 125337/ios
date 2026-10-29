@interface WCTimeLineEditImageScrollView : WCEditImageScrollView <WCTimeLineEditImageOperationDelegate>
- (id)getEditImageView;
- (BOOL)recoverLyricsWidget;
- (void)updateMusicLyrics:(id)arg1 totalTime:(double)arg2;
- (void)updateMusicLyricsCropTime:(struct)arg1;
- (void)seekMusicLyricsToRelativeTimeSec:(double)arg1;
- (void)setMusicLyricIsOn:(BOOL)arg1;
- (void)setMusicLyricWidgetAlpha:(double)arg1;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (void)editImageViewLyricsWidgetHadBeenDoubleTap;
@end

