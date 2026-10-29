@interface WCCanvasMusicComponent : WCCanvasComponent <WCCanvasMusicProgressBarDelegate, ICanvasMusicMgrExt>
{
    MMUIView * _musicCardView; // +0x8
    MMUIView * _bgView; // +0x10
    WCAdURLImageView * _bgImageView; // +0x18
    UIVisualEffectView * _bgBlurView; // +0x20
    MMUIView * _bgMaskView; // +0x28
    WCAdURLImageView * _coverImageView; // +0x30
    WCMarqueeLabel * _titleLabel; // +0x38
    WCMarqueeLabel * _subTitleLabel; // +0x40
    WCCanvasMusicPlayButton * _playButton; // +0x48
    WCCanvasMusicProgressBar * _progressBar; // +0x50
    WCCanvasComponentMusicInfo * _canvasMusicInfo; // +0x58
    NSString * _musicId; // +0x60
    MMMusicInfo * _mmMusicInfo; // +0x68
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)initMMMusicInfo;
- (void)initMusicCardView;
- (void)initCoverImageView;
- (void)initTitleAndSubTitle;
- (void)initPlayButton;
- (void)initProgressBar;
- (void)onClickPlayButton:(id)arg1 forEvent:(id)arg2;
- (void)setPlayState:(long long)arg1;
- (void)setCurrentTime:(double)arg1 duration:(double)arg2;
- (void)onSliderSeekToTime:(double)arg1;
- (void)onMusicPlayStatusChanged:(id)arg1 playState:(long long)arg2;
- (void)onMusicPlayTimeChanged:(id)arg1 currentTime:(double)arg2 duration:(double)arg3;
- (id)musicCardView;
- (void)setMusicCardView:(id)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)bgImageView;
- (void)setBgImageView:(id)arg1;
- (id)bgBlurView;
- (void)setBgBlurView:(id)arg1;
- (id)bgMaskView;
- (void)setBgMaskView:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)playButton;
- (void)setPlayButton:(id)arg1;
- (id)progressBar;
- (void)setProgressBar:(id)arg1;
- (id)canvasMusicInfo;
- (void)setCanvasMusicInfo:(id)arg1;
- (id)musicId;
- (void)setMusicId:(id)arg1;
- (id)mmMusicInfo;
- (void)setMmMusicInfo:(id)arg1;
- (void).cxx_destruct;
@end
