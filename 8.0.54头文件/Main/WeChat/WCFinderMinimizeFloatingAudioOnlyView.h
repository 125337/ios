@interface WCFinderMinimizeFloatingAudioOnlyView : UIView
{
    BOOL _soundActive; // +0x8
    double _sideViewMarginCoefficient; // +0x10
    MMUILabel * _indicatorLabel; // +0x18
    WCFinderMinimizeFloatingAudioSoundView * _leftView; // +0x20
    WCFinderMinimizeFloatingAudioSoundView * _rightView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 isStub:(BOOL)arg2;
- (id)labelFont;
- (void)setLabelFont:(id)arg1;
- (void)setSoundActive:(BOOL)arg1;
- (void)setSideViewMarginCoefficient:(double)arg1;
- (id)displayText;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)updateSoundActive:(BOOL)arg1;
- (BOOL)soundActive;
- (double)sideViewMarginCoefficient;
- (id)indicatorLabel;
- (void)setIndicatorLabel:(id)arg1;
- (id)leftView;
- (void)setLeftView:(id)arg1;
- (id)rightView;
- (void)setRightView:(id)arg1;
- (void).cxx_destruct;
@end

