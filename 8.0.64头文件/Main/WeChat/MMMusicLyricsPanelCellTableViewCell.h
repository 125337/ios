@interface MMMusicLyricsPanelCellTableViewCell : UITableViewCell
{
    UILabel * _lyricsLabel; // +0x8
    MMMusicLyricPlayingLabel * _playingLabel; // +0x10
    UIView * _highlightedView; // +0x18
}
+ (id)cellIdentifier;
- (id)init;
- (void)setFrame:(CGRect)arg1;
- (void)updateLyric:(id)arg1 bFocus:(BOOL)arg2;
- (void)updateLyricTextColor:(BOOL)arg1;
- (void)setPlayingProgress:(double)arg1 animated:(BOOL)arg2 animateDuration:(double)arg3;
- (void)pauseProgressAnimation;
- (void)resumeProgressAnimation;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)highlightedView;
- (void)setHighlightedView:(id)arg1;
- (void).cxx_destruct;
@end
