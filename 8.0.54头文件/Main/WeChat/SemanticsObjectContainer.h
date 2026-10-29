@interface SemanticsObjectContainer : UIAccessibilityElement
{
    SemanticsObject * _semanticsObject; // +0x8
    WeakPtr<flutter::AccessibilityBridgeIos> _bridge; // +0x10
}
- (id)init;
- (id)initWithSemanticsObject:(id)arg1 bridge:(WeakPtr<flutter::AccessibilityBridgeIos>)arg2;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (BOOL)isAccessibilityElement;
- (CGRect)accessibilityFrame;
- (id)accessibilityContainer;
- (BOOL)accessibilityScroll:(long long)arg1;
- (id)semanticsObject;
- (void)setSemanticsObject:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

