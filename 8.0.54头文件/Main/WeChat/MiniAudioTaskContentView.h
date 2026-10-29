@interface MiniAudioTaskContentView : UIView
{
    BOOL _isPlaying; // +0x8
    BOOL _useBlurBackgroundView; // +0x9
    unsigned int _style; // +0xc
    NSString * _accessibilityBizPrefix; // +0x10
    id <MiniAudioTaskContentViewDelegate> _delegate; // +0x18
    MMUIButton * _playPauseButton; // +0x20
    MMUIButton * _closeButton; // +0x28
    MMUIButton * _outerContentButton; // +0x30
    UIView * _outerContentView; // +0x38
    CAGradientLayer * _gradientShadowLayer; // +0x40
    MinimizeAudioTaskExtendCoverView * _coverView; // +0x48
    UIView * _customizedLeftView; // +0x50
    UIView * _customizedTopRightView; // +0x58
}
+ (CGSize)fullSizeForOuterContentViewSize:(CGSize)arg1;
- (id)initWitStyle:(unsigned int)arg1;
- (void)setupSubviews;
- (void)setOuterContentView:(id)arg1;
- (void)setCoverImageUrl:(id)arg1;
- (void)setCoverDefaultImage:(id)arg1;
- (void)setCoverImage:(id)arg1;
- (void)setUseBlurBackgroundView:(BOOL)arg1;
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
- (BOOL)useBlurBackgroundView;
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
- (void).cxx_destruct;
@end

