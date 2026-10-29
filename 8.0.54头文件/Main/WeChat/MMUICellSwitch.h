@interface MMUICellSwitch : UISwitch
{
    UIView * _superContainerView; // +0x8
}
- (id)getSuperContainerView;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (CGRect)accessibilityFrame;
- (CGPoint)accessibilityActivationPoint;
- (void)layoutSubviews;
- (id)superContainerView;
- (void)setSuperContainerView:(id)arg1;
- (void).cxx_destruct;
@end

