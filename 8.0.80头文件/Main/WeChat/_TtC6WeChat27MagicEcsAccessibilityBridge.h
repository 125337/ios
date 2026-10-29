@interface _TtC6WeChat27MagicEcsAccessibilityBridge : NSObject <_TtP6WeChat35MagicEcsAccessibilityMessageHandler_>
{
     accessibilityChannel; // +0x8
     rootAccessibilityView; // +0x10
     objects_; // +0x18
     actions_; // +0x20
     last_focused_semantics_object_id_; // +0x28
     previous_route_id_; // +0x30
     previous_routes_; // +0x38
}
+ (long long)rootNodeId;
+ (long long)invalidNodeId;
+ (long long)focusableFlags;
- (id)initWithAccessibilityChannel:(id)arg1 rootAccessibilityView:(id)arg2;
- (void)announce:(id)arg1;
- (void)onTapWithNodeId:(long long)arg1;
- (void)onLongPressWithNodeId:(long long)arg1;
- (void)onFocusWithNodeId:(long long)arg1;
- (void)onTooltip:(id)arg1;
- (void)updateSemantics:(id)arg1;
- (void)accessibilityObjectDidBecomeFocused:(long long)arg1;
- (void)accessibilityObjectDidBecomeFocusedWithId:(long long)arg1;
- (void)accessibilityObjectDidLoseFocus:(long long)arg1;
- (void)accessibilityObjectDidLoseFocusWithId:(long long)arg1;
- (void)updateCustomAccessibilityActions:(id)arg1;
- (void)handleCustomAccessibilityAction:(id)arg1;
- (id)getSemanticsObjectWithId:(long long)arg1;
- (id)rootSemanticsObject;
- (id)rootSemanticsNode;
- (id)getSemanticsNodeWithId:(long long)arg1;
- (void)reset;
- (void)sendLatestAccessibilityFlagsToFlutter;
- (id)safeParseSemanticsUpdateWithJsonString:(id)arg1;
- (void)handleAccessibilityFocusWithNodeId:(long long)arg1;
- (void)handleTapWithNodeId:(long long)arg1;
- (void)handleLongPressWithNodeId:(long long)arg1;
- (void)handleIncreaseWithNodeId:(long long)arg1;
- (void)handleDecreaseWithNodeId:(long long)arg1;
- (void)handleScrollWithNodeId:(long long)arg1 direction:(long long)arg2;
- (void)handleShowOnScreenWithNodeId:(long long)arg1;
- (void)handleSetTextWithNodeId:(long long)arg1 text:(id)arg2;
- (void)handleSetSelectionWithNodeId:(long long)arg1 base:(long long)arg2 extent:(long long)arg3;
- (void)handleCopyWithNodeId:(long long)arg1;
- (void)handleCutWithNodeId:(long long)arg1;
- (void)handlePasteWithNodeId:(long long)arg1;
- (void)handleMoveCursorForwardByCharacterWithNodeId:(long long)arg1;
- (void)handleMoveCursorBackwardByCharacterWithNodeId:(long long)arg1;
- (void)handleMoveCursorForwardByWordWithNodeId:(long long)arg1;
- (void)handleMoveCursorBackwardByWordWithNodeId:(long long)arg1;
- (void)handleShowOnScreenActionWithNodeId:(long long)arg1;
- (BOOL)handleScrollActionWithNodeId:(long long)arg1 direction:(long long)arg2;
- (void)handleScrollActionWithNodeId:(long long)arg1 action:(long long)arg2;
- (void)handleDismissWithNodeId:(long long)arg1;
- (void)handleDidGainAccessibilityFocusWithNodeId:(long long)arg1;
- (void)handleDidLoseAccessibilityFocusWithNodeId:(long long)arg1;
- (long long)accessibilityElementsCount;
- (id)elementAt:(long long)arg1;
- (id)init;
- (void).cxx_destruct;
@end
