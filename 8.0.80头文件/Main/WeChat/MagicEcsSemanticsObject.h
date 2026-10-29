@interface MagicEcsSemanticsObject : UIAccessibilityElement
{
    NSMutableArray * _mutableChildren; // +0x8
    BOOL _isStale; // +0x10
    long long _id; // +0x18
    _TtC6WeChat21MagicEcsSemanticsNode * _semanticsNode; // +0x20
    MagicEcsSemanticsObject * _parent; // +0x28
    NSArray * _children; // +0x30
    NSArray * _childrenInHitTestOrder; // +0x38
    MagicEcsSemanticsObjectContainer * _container; // +0x40
    _TtC6WeChat27MagicEcsAccessibilityBridge * _bridge; // +0x48
}
- (id)initWithId:(long long)arg1 semanticsNode:(id)arg2 accessibilityContainer:(id)arg3 bridge:(id)arg4;
- (id)initWithId:(long long)arg1 semanticsNode:(id)arg2 accessibilityContainer:(id)arg3;
- (void)dealloc;
- (void)markStale;
- (void)setChildren:(id)arg1;
- (void)setChildrenInHitTestOrder:(id)arg1;
- (void)updateSemanticsNode:(id)arg1;
- (BOOL)hasChildren;
- (id)nativeAccessibility;
- (void)accessibilityBridgeDidFinishUpdate;
- (BOOL)nodeWillCauseLayoutChangeWithNewNode:(id)arg1;
- (BOOL)nodeWillCauseScrollWithNewNode:(id)arg1;
- (BOOL)nodeShouldTriggerAnnouncementWithNewNode:(id)arg1;
- (void)replaceChildAtIndex:(long long)arg1 withChild:(id)arg2;
- (void)collectRoutes:(id)arg1;
- (id)routeName;
- (void)showOnScreen;
- (BOOL)hasFlag:(long long)arg1;
- (BOOL)hasAction:(long long)arg1;
- (BOOL)isFocusable;
- (id)buildAccessibilityValue;
- (unsigned long long)buildAccessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (CGRect)accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (CGRect)globalRect;
- (CGRect)convertRectToGlobal:(CGRect)arg1;
- (CGPoint)convertPointToGlobal:(CGPoint)arg1;
- (CGAffineTransform)createTransformFromValues:(id)arg1;
- (id)accessibilityContainer;
- (void)setAccessibilityContainer:(id)arg1;
- (id)accessibilityContainerObject;
- (id)_resolveAccessibilityContainerObject;
- (BOOL)accessibilityActivate;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)accessibilityScroll:(long long)arg1;
- (BOOL)accessibilityPerformEscape;
- (long long)getSemanticsActionForScrollDirection:(long long)arg1;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (BOOL)accessibilityRespondsToUserInteractionCheck;
- (BOOL)accessibilityScrollToVisibleAction;
- (id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)searchPoint:(CGPoint)arg1;
- (BOOL)containsPoint:(CGPoint)arg1 inObject:(id)arg2;
- (BOOL)isStale;
- (long long)id;
- (id)semanticsNode;
- (void)setSemanticsNode:(id)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (id)children;
- (id)childrenInHitTestOrder;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)bridge;
- (void)setBridge:(id)arg1;
- (void).cxx_destruct;
@end
