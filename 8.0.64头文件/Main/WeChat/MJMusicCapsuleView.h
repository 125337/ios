@interface MJMusicCapsuleView : MMUIView
{
    BOOL _micEnabled; // +0x8
    BOOL _isInMusicPlayingMode; // +0x9
    BOOL _shouldHideLeftLine; // +0xa
    BOOL _needScrollAnimation; // +0xb
    MMUIButton * _micMuteButton; // +0x10
    id <MJMusicCapsuleViewDelegate> _delegate; // +0x18
    UILabel * _titleLabel; // +0x20
    UIImageView * _musicIconView; // +0x28
    UIView * _leftLineView; // +0x30
    UIView * _rightLineView; // +0x38
    UILabel * _lytricLabel; // +0x40
    MMUIButton * _disableMusicButton; // +0x48
    UIView * _gradientMaskView; // +0x50
    CAGradientLayer * _gradientLayer; // +0x58
    double _titleContentWidth; // +0x60
    double _titleBGViewWidth; // +0x68
}
- (id)initWithMicEnabled:(BOOL)arg1;
- (void)commonInit;
- (void)switchToNonMusicPlayingMode;
- (void)updateAccessbililtyLabelForNonMusicPlayingMode;
- (void)switchToMusicPlayingModeWithSongName:(id)arg1;
- (void)updateAccessbililtyLabelForMusicPlayingMode;
- (void)addGradientLayer;
- (void)removeGradientLayer;
- (void)startAnimationIfNeeded;
- (double)calcContentWidth;
- (void)stopAnimation;
- (void)updateForMicMuted;
- (void)updateForMicUnMuted;
- (BOOL)isMicMuted;
- (void)setIsInMusicPlayingMode:(BOOL)arg1;
- (void)setShouldHideLeftLine:(BOOL)arg1;
- (id)currentTitle;
- (void)handleTapGesture:(id)arg1;
- (void)micMuteButtonDidTouchUpInside:(id)arg1;
- (void)disableMusicButtonDidTouchUpInside:(id)arg1;
- (id)getMusicIconAndTitleTintColor;
- (id)getBackgroundColor;
- (id)getlineColor;
- (id)micMuteButton;
- (void)setMicMuteButton:(id)arg1;
- (BOOL)micEnabled;
- (BOOL)isInMusicPlayingMode;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldHideLeftLine;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)musicIconView;
- (void)setMusicIconView:(id)arg1;
- (id)leftLineView;
- (void)setLeftLineView:(id)arg1;
- (id)rightLineView;
- (void)setRightLineView:(id)arg1;
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
- (void).cxx_destruct;
@end
