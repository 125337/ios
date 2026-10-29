@interface TingLyricsView : MMUIButton
{
    NSString * _lyricsId; // +0x8
    MMMusicLyricResolver * _resolver; // +0x10
    MMMusicLiveLyricDisplayView * _lyricsDisplayView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)lyricsDisplayView;
- (void)setTextAlignment:(long long)arg1;
- (void)setLyricFont:(id)arg1;
- (void)setLyricColor:(id)arg1;
- (void)setLyricNumberOfLines:(int)arg1;
- (void)setIsSeeking:(BOOL)arg1;
- (void)updateLyricsId:(id)arg1;
- (void)updateLyricsWithCurrentTime:(double)arg1 animated:(BOOL)arg2;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 updateCurrentTime:(double)arg3 displayTime:(double)arg4 duration:(double)arg5;
- (void)updateWithCurrentTime:(double)arg1 animated:(BOOL)arg2;
- (BOOL)isValid;
- (id)lyricsId;
- (void)setLyricsId:(id)arg1;
- (id)resolver;
- (void)setResolver:(id)arg1;
- (void)setLyricsDisplayView:(id)arg1;
- (void).cxx_destruct;
@end

