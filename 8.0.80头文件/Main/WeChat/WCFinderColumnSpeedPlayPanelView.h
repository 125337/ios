@interface WCFinderColumnSpeedPlayPanelView : UIView
{
    UIView * _containerView; // +0x8
    UILabel * _playbackSpeedLabel; // +0x10
    UIImageView * _firstPlayIcon; // +0x18
    UIImageView * _secondPlayIcon; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (id)createPlayIcon;
- (void)updateWithTitle:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)startAnimation;
- (void)stopAnimation;
- (CGSize)_calculateContainerSize;
- (void)_layoutIconsAndLabel;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)playbackSpeedLabel;
- (void)setPlaybackSpeedLabel:(id)arg1;
- (id)firstPlayIcon;
- (void)setFirstPlayIcon:(id)arg1;
- (id)secondPlayIcon;
- (void)setSecondPlayIcon:(id)arg1;
- (void).cxx_destruct;
@end
