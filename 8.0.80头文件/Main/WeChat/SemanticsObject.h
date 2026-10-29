@interface SemanticsObject : UIAccessibilityElement <UIFocusItem, UIFocusItemContainer>
{
    NSMutableArray * _children; // +0x8
    BOOL _inDealloc; // +0x10
    int _uid; // +0x14
    SemanticsObject * _parent; // +0x18
    NSArray * _childrenInHitTestOrder; // +0x20
    SemanticsObjectContainer * _container; // +0x28
    WeakPtr<flutter::AccessibilityBridgeIos> _bridge; // +0x30
    SemanticsNode _node; // +0x48
}
- (id)focusItem;
- (void)setNeedsFocusUpdate;
- (void)updateFocusIfNeeded;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)parentFocusEnvironment;
- (id)preferredFocusEnvironments;
- (id)focusItemContainer;
- (BOOL)canBecomeFocused;
- (CGRect)frame;
- (id)focusItemsInRect:(CGRect)arg1;
- (id)coordinateSpace;
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
- (BOOL)accessibilityRespondsToUserInteraction;
- (int)uid;
- (id)parent;
- (void)setParent:(id)arg1;
- (WeakPtr<flutter::AccessibilityBridgeIos>)bridge;
- (SemanticsNode)node;
- (id)children;
- (id)childrenInHitTestOrder;
- (id)container;
- (void)setContainer:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
