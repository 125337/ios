@interface LOTAnimatedControl : UIControl
{
    unsigned long long _priorState; // +0x8
    NSMutableDictionary * _layerMap; // +0x10
    LOTAnimationView * _animationView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)animationComp;
- (void)setAnimationComp:(id)arg1;
- (void)setLayerName:(id)arg1 forState:(unsigned long long)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)checkStateChangedAndUpdate:(BOOL)arg1;
- (id)animationView;
- (void).cxx_destruct;
@end
