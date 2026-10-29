@interface FlutterSemanticsScrollView : UIScrollView <UIFocusItemScrollableContainer, UIScrollViewDelegate>
{
    BOOL _isDoingSystemScrolling; // +0x8
    SemanticsObject * _semanticsObject; // +0x10
}
- (CGSize)visibleSize;
- (void)setContentOffset:(CGPoint)arg1;
- (BOOL)canBecomeFocused;
- (id)parentFocusEnvironment;
- (id)preferredFocusEnvironments;
- (id)focusItemsInRect:(CGRect)arg1;
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
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)semanticsObject;
- (void)setSemanticsObject:(id)arg1;
- (BOOL)isDoingSystemScrolling;
- (void).cxx_destruct;
@end
