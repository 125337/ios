@interface WCTimeLineEditImageView : WCEditImageView
{
    EditImageMusicLyricsWidgetTool * _musicLyricsWidget; // +0xb8
}
- (id)musicLyricsWidget;
- (void)setMusicLyricIsOn:(BOOL)arg1;
- (BOOL)recoverLyricsWidget;
- (void)setMusicLyricWidgetAlpha:(double)arg1;
- (void)updateMusicLyrics:(id)arg1 totalTime:(double)arg2;
- (void)updateMusicLyricsCropTime:(struct)arg1;
- (void)seekMusicLyricsToRelativeTimeSec:(double)arg1;
- (BOOL)checkWhetherEdited;
- (void)useImageTool:(int)arg1;
- (BOOL)isTextToolType:(int)arg1;
- (void)setMusicLyricsWidget:(id)arg1;
- (void).cxx_destruct;
@end
