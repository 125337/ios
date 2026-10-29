@interface MMTextStateEditVideoLayoutView : WCEditVideoLayoutView
{
    NSMutableArray * _currentMusicLyrics; // +0x8
    double _currentLyricTotalTime; // +0x10
}
- (void)initEditImageView;
- (void)onEditSuccess:(BOOL)arg1 withTimeRange:(struct)arg2;
- (id)currentMusicLyrics;
- (void)setCurrentMusicLyrics:(id)arg1;
- (double)currentLyricTotalTime;
- (void)setCurrentLyricTotalTime:(double)arg1;
- (void).cxx_destruct;
@end
