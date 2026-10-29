@interface MJShootMusicEntryView : UIView
{
    BOOL _needScrollAnimation; // +0x8
    BOOL _isInMusicPlayingMode; // +0x9
    MMUIButton * _micMuteButton; // +0x10
    id <MJShootMusicEntryViewDelegate> _delegate; // +0x18
    UILabel * _titleLabel; // +0x20
    UIImageView * _musicIconView; // +0x28
    MMUIImageView * _arrowView; // +0x30
    UIView * _leftLineView; // +0x38
    UIView * _rightLineView; // +0x40
    UILabel * _lytricLabel; // +0x48
    MMUIButton * _disableMusicButton; // +0x50
    UIView * _gradientMaskView; // +0x58
    CAGradientLayer * _gradientLayer; // +0x60
    double _titleContentWidth; // +0x68
    double _titleBGViewWidth; // +0x70
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
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
- (void)handleTapGesture:(id)arg1;
- (void)micMuteButtonDidTouchUpInside:(id)arg1;
- (void)disableMusicButtonDidTouchUpInside:(id)arg1;
- (id)micMuteButton;
- (void)setMicMuteButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)musicIconView;
- (void)setMusicIconView:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
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
- (BOOL)isInMusicPlayingMode;
- (void)setIsInMusicPlayingMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

