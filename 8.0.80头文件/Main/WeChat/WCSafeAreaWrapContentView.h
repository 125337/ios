@interface WCSafeAreaWrapContentView : WCSafeAreaWrapExtendedView
{
    UIColor * _fallbackBackgroundColor; // +0x8
    UIViewController * _safeAreaWrapViewController; // +0x10
}
- (UIEdgeInsets)safeAreaInsets;
- (void)setBackgroundColor:(id)arg1;
- (id)fallbackBackgroundColor;
- (void)setFallbackBackgroundColor:(id)arg1;
- (id)safeAreaWrapViewController;
- (void)setSafeAreaWrapViewController:(id)arg1;
- (void).cxx_destruct;
@end
