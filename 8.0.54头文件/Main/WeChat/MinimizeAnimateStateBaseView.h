@interface MinimizeAnimateStateBaseView : UIView
{
    BOOL _isAnimating; // +0x8
    NSString * _stateIconName; // +0x10
    UIColor * _stateIconColor; // +0x18
    UIImageView * _stateIcon; // +0x20
}
+ (id)genAnimateStateView:(unsigned int)arg1 WithGrayBackground:(BOOL)arg2 isMiniVersion:(BOOL)arg3;
- (id)initWithGrayBackground:(BOOL)arg1 isMiniVersion:(BOOL)arg2;
- (void)setStateIconName:(id)arg1 color:(id)arg2;
- (void)setStateIconColor:(id)arg1;
- (void)setStateIconName:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)tryStartStateAnimation;
- (void)stopStateAnimation;
- (id)stateIconName;
- (id)stateIconColor;
- (id)stateIcon;
- (void)setStateIcon:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end

