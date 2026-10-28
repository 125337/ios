@interface SemanticsObject : UIAccessibilityElement
{
    scoped_nsobject<SemanticsObjectContainer> _container; // +0x8
    NSMutableArray * _children; // +0x10
    NSMutableArray * _childrenInHitTestOrder; // +0x18
    BOOL _inDealloc; // +0x20
    int _uid; // +0x24
    SemanticsObject * _parent; // +0x28
    WeakPtr<flutter::AccessibilityBridgeIos> _bridge; // +0x30
    SemanticsNode _node; // +0x48
}
- (id)init;
- (id)initWithBridge:(WeakPtr<flutter::AccessibilityBridgeIos>)arg1 uid:(int)arg2;
- (void)dealloc;
- (void)setChildren:(id)arg1;
- (void)setChildrenInHitTestOrder:(id)arg1;
- (BOOL)hasChildren;
- (BOOL)isAccessibilityBridgeAlive;
- (void)setSemanticsNode:(const void *)arg1;
- (void)accessibilityBridgeDidFinishUpdate;
- (BOOL)nodeWillCauseLayoutChange:(const void *)arg1;
- (BOOL)nodeWillCauseScroll:(const void *)arg1;
- (BOOL)nodeShouldTriggerAnnouncement:(const void *)arg1;
- (void)replaceChildAtIndex:(long long)arg1 withChild:(id)arg2;
- (id)routeName;
- (id)nativeAccessibility;
- (void)privateSetParent:(id)arg1;
- (id)createAttributedStringFromString:(id)arg1 withAttributes:(const void *)arg2;
- (void)showOnScreen;
- (BOOL)isAccessibilityElement;
- (BOOL)isFocusable;
- (void)collectRoutes:(id)arg1;
- (BOOL)onCustomAccessibilityAction:(id)arg1;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (BOOL)containsPoint:(CGPoint)arg1;
- (id)search:(CGPoint)arg1;
- (id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)accessibilityScrollToVisible;
- (BOOL)accessibilityScrollToVisibleWithChild:(id)arg1;
- (id)accessibilityAttributedLabel;
- (id)accessibilityHint;
- (id)accessibilityAttributedHint;
- (id)accessibilityValue;
- (id)accessibilityAttributedValue;
- (CGRect)accessibilityFrame;
- (CGRect)globalRect;
- (void)setAccessibilityContainer:(id)arg1;
- (id)accessibilityContainer;
- (BOOL)accessibilityActivate;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)accessibilityScroll:(long long)arg1;
- (BOOL)accessibilityPerformEscape;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (int)uid;
- (id)parent;
- (void)setParent:(id)arg1;
- (WeakPtr<flutter::AccessibilityBridgeIos>)bridge;
- (SemanticsNode)node;
- (id)children;
- (id)childrenInHitTestOrder;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
