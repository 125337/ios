@interface MJExpMusicCapsuleView : MMUIView <MJMusicCapsuleViewProtocol, MJShootFrontFillLightAppearanceAdjusting>
{
    BOOL _micEnabled; // +0x8
    BOOL _isInMusicPlayingMode; // +0x9
    BOOL _shouldHideLeftLine; // +0xa
    BOOL _needScrollAnimation; // +0xb
    BOOL _isFrontFillLightAppearance; // +0xc
    MMUIButton * _micMuteButton; // +0x10
    id <MJMusicCapsuleViewDelegate> _delegate; // +0x18
    MJShootComposingAdaptiveBlurView * _blurView; // +0x20
    UILabel * _titleLabel; // +0x28
    UIImageView * _musicIconView; // +0x30
    UIImageView * _rightArrowView; // +0x38
    UILabel * _lytricLabel; // +0x40
    MMUIButton * _disableMusicButton; // +0x48
    UIView * _gradientMaskView; // +0x50
    CAGradientLayer * _gradientLayer; // +0x58
    double _titleContentWidth; // +0x60
    double _titleBGViewWidth; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMicEnabled:(BOOL)arg1;
- (void)commonInit;
- (void)setupMusicIconViewWithMusic:(BOOL)arg1;
- (void)setupBackgroundBlurView;
- (void)switchToNonMusicPlayingMode;
- (void)updateAccessbililtyLabelForNonMusicPlayingMode;
- (void)switchToMusicPlayingModeWithSongName:(id)arg1;
- (void)updateAccessbililtyLabelForMusicPlayingMode;
- (void)addGradientLayer;
- (void)removeGradientLayer;
- (void)startAnimationIfNeeded;
- (double)calcContentWidth;
- (void)stopAnimation;
- (id)currentTitle;
- (void)updateUIWithOSTEnabled:(BOOL)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)disableMusicButtonDidTouchUpInside:(id)arg1;
- (id)getMusicIconAndTitleTintColor;
- (id)blurView;
- (void)shootComposingFrontFillLightStateDidChange:(BOOL)arg1;
- (BOOL)micEnabled;
- (BOOL)isInMusicPlayingMode;
- (void)setIsInMusicPlayingMode:(BOOL)arg1;
- (id)micMuteButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldHideLeftLine;
- (void)setShouldHideLeftLine:(BOOL)arg1;
- (void)setBlurView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)musicIconView;
- (void)setMusicIconView:(id)arg1;
- (id)rightArrowView;
- (void)setRightArrowView:(id)arg1;
- (id)lytricLabel;
- (void)setLytricLabel:(id)arg1;
- (id)disableMusicButton;
- (void)setDisableMusicButton:(id)arg1;
- (id)gradientMaskView;
- (void)setGradientMaskView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (BOOL)needScrollAnimation;
- (void)setNeedScrollAnimation:(BOOL)arg1;
- (double)titleContentWidth;
- (void)setTitleContentWidth:(double)arg1;
- (double)titleBGViewWidth;
- (void)setTitleBGViewWidth:(double)arg1;
- (BOOL)isFrontFillLightAppearance;
- (void)setIsFrontFillLightAppearance:(BOOL)arg1;
- (void).cxx_destruct;
@end
