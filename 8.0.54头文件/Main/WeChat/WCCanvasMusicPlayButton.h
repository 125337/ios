@interface WCCanvasMusicPlayButton : MMUIButton
{
    BOOL _isAnimating; // +0x8
    long long _playState; // +0x10
    UIColor * _viewColor; // +0x18
    double _iconWidth; // +0x20
    UIImage * _circleImage; // +0x28
    UIImage * _circleLoadingImage; // +0x30
    UIImage * _playIconImage; // +0x38
    UIImage * _pauseIconImage; // +0x40
    MMUIImageView * _bgView; // +0x48
    MMUIImageView * _iconView; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 viewColor:(id)arg2 iconWidth:(double)arg3;
- (void)dealloc;
- (void)initViews;
- (void)setPlayState:(long long)arg1;
- (void)updateViews;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (long long)playState;
- (id)viewColor;
- (void)setViewColor:(id)arg1;
- (double)iconWidth;
- (void)setIconWidth:(double)arg1;
- (id)circleImage;
- (void)setCircleImage:(id)arg1;
- (id)circleLoadingImage;
- (void)setCircleLoadingImage:(id)arg1;
- (id)playIconImage;
- (void)setPlayIconImage:(id)arg1;
- (id)pauseIconImage;
- (void)setPauseIconImage:(id)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end

