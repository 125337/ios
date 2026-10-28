@interface FlutterSemanticsScrollView : UIScrollView
{
    SemanticsObject * _semanticsObject; // +0x8
}
- (id)initWithSemanticsObject:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityAttributedLabel;
- (id)accessibilityValue;
- (id)accessibilityAttributedValue;
- (id)accessibilityHint;
- (id)accessibilityAttributedHint;
- (BOOL)accessibilityActivate;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)accessibilityScroll:(long long)arg1;
- (BOOL)accessibilityPerformEscape;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityContainer;
- (long long)accessibilityElementCount;
- (id)semanticsObject;
- (void)setSemanticsObject:(id)arg1;
@end
