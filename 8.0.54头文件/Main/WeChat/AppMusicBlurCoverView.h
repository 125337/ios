@interface AppMusicBlurCoverView : UIView
{
    BOOL _isSender; // +0x8
    BOOL _isDarkMode; // +0x9
    CAGradientLayer * _gradientLayer; // +0x10
    CAShapeLayer * _maskLayer; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 isSender:(BOOL)arg2;
- (void)doChange;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (BOOL)isSender;
- (void)setIsSender:(BOOL)arg1;
- (BOOL)isDarkMode;
- (void)setIsDarkMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

