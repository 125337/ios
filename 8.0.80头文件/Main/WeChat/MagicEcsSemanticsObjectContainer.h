@interface MagicEcsSemanticsObjectContainer : UIAccessibilityElement
{
    MagicEcsSemanticsObject * _semanticsObject; // +0x8
}
- (id)initWithSemanticsObject:(id)arg1 container:(id)arg2;
- (BOOL)isAccessibilityElement;
- (CGRect)accessibilityFrame;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)semanticsObject;
- (void)setSemanticsObject:(id)arg1;
- (void).cxx_destruct;
@end
