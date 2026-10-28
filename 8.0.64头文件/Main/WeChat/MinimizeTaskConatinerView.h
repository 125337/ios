@interface MinimizeTaskConatinerView : UIView
{
    BOOL _isPlaying; // +0x8
    BOOL _customizedLeftViewAutoResize; // +0x9
    unsigned int _bottomStyle; // +0xc
    unsigned int _style; // +0x10
    NSString * _accessibilityBizPrefix; // +0x18
    id <MinimizeTaskConatinerDelegate> _delegate; // +0x20
    MMUIButton * _playPauseButton; // +0x28
    MMUIButton * _closeButton; // +0x30
    MMUIButton * _outerContentButton; // +0x38
    UIView * _outerContentView; // +0x40
    CAGradientLayer * _gradientShadowLayer; // +0x48
    MinimizeTaskContentView * _coverView; // +0x50
    UIView * _customizedLeftView; // +0x58
    UIView * _customizedTopRightView; // +0x60
    double _coverWidth; // +0x68
}
+ (CGSize)fullSizeForOuterContentViewSize:(CGSize)arg1;
- (id)initWitStyle:(unsigned int)arg1;
- (id)initWitStyle:(unsigned int)arg1 coverWidth:(double)arg2;
- (void)setupSubviews;
- (void)setOuterContentView:(id)arg1;
- (void)setCoverImageUrl:(id)arg1;
- (void)setCoverDefaultImage:(id)arg1;
- (void)setCoverImage:(id)arg1;
- (void)setBottomStyle:(unsigned int)arg1;
- (void)setCustomizedLeftView:(id)arg1;
- (void)setCustomizedTopRightView:(id)arg1;
- (id)playPauseButton;
- (id)closeButton;
- (id)outerContentButton;
- (void)setAccessibilityBizPrefix:(id)arg1;
- (id)accessibilityBizPrefix;
- (id)coverView;
- (void)setIsPlaying:(BOOL)arg1;
- (void)setPlayOrPauseButtonDisabled:(BOOL)arg1;
- (void)setShadowShow:(BOOL)arg1;
- (void)setButtonsShow:(BOOL)arg1;
- (void)setOuterContentViewAccessibilityLabel:(id)arg1;
- (id)gradientShadowLayer;
- (id)buttonTintColor;
- (void)layoutSubviews;
- (void)onPlayPauseButtonClicked;
- (void)onCloseButtonClicked;
- (void)onOuterContentViewClicked;
- (void)setCloseButtonState:(unsigned int)arg1;
- (void)setPlayOrPauseButtonState:(unsigned int)arg1;
- (void)setUpButton:(id)arg1 withState:(unsigned int)arg2;
- (BOOL)isPlaying;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)bottomStyle;
- (BOOL)customizedLeftViewAutoResize;
- (void)setCustomizedLeftViewAutoResize:(BOOL)arg1;
- (unsigned int)style;
- (void)setStyle:(unsigned int)arg1;
- (void)setPlayPauseButton:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setOuterContentButton:(id)arg1;
- (id)outerContentView;
- (void)setGradientShadowLayer:(id)arg1;
- (void)setCoverView:(id)arg1;
- (id)customizedLeftView;
- (id)customizedTopRightView;
- (double)coverWidth;
- (void)setCoverWidth:(double)arg1;
- (void).cxx_destruct;
@end
