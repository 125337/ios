@interface InteractionLabel : MMUILabel
{
    UIColor * _normalBackgroundColor; // +0x8
    UIColor * _highlightedBackgroundColor; // +0x10
    id _target; // +0x18
    SEL _selAction; // +0x20
    BOOL _bIsTouchesEnded; // +0x28
    UIEdgeInsets _touchInsets; // +0x30
}
- (void)initMembers;
- (void)becomeNormalBackgroundColor;
- (void)becomeHighlightedBackgroundColor;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (id)normalBackgroundColor;
- (void)setNormalBackgroundColor:(id)arg1;
- (id)highlightedBackgroundColor;
- (void)setHighlightedBackgroundColor:(id)arg1;
- (UIEdgeInsets)touchInsets;
- (void)setTouchInsets:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end

