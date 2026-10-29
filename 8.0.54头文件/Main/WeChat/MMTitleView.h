@interface MMTitleView : MMBarItemCustomView
{
    BOOL _forceAccessibilityElementDisabled; // +0x8
    id <MMTitleViewDelegate> _delegate; // +0x10
    long long _aligment; // +0x18
    UIFont * _titleFont; // +0x20
    UIGestureRecognizer * _tapGesture; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (id)getTitle;
- (id)getSubTitle;
- (void)setTitleFont:(id)arg1;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (CGRect)accessibilityFrame;
- (void)setDelegate:(id)arg1;
- (void)onTapAtTitleView:(id)arg1;
- (id)delegate;
- (BOOL)forceAccessibilityElementDisabled;
- (void)setForceAccessibilityElementDisabled:(BOOL)arg1;
- (long long)aligment;
- (void)setAligment:(long long)arg1;
- (id)titleFont;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end

