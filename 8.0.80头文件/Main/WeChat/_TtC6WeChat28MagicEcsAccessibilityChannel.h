@interface _TtC6WeChat28MagicEcsAccessibilityChannel : NSObject
{
     handler; // +0x8
     magicCardStarterHandle; // +0x10
    BOOL isAccessibilityEnabled; // +0x18
    long long currentAccessibilityFeatures; // +0x20
}
- (BOOL)isAccessibilityEnabled;
- (void)setIsAccessibilityEnabled:(BOOL)arg1;
- (long long)currentAccessibilityFeatures;
- (void)setCurrentAccessibilityFeatures:(long long)arg1;
- (void)handleFlutterMessage:(id)arg1;
- (void)dispatchUpdateSemantics:(id)arg1;
- (void)dispatchUpdateSemanticsFromJson:(id)arg1;
- (void)dispatchUpdateCustomAccessibilityActions:(id)arg1;
- (void)oniOSAccessibilityEnabled;
- (void)oniOSAccessibilityDisabled;
- (void)setAccessibilityFeatures:(long long)arg1;
- (void)dispatchSemanticsActionWithVirtualViewId:(long long)arg1 action:(long long)arg2;
- (void)dispatchSemanticsActionWithVirtualViewId:(long long)arg1 action:(long long)arg2 args:(id)arg3;
- (void)onAttachFlutter;
- (void)setAccessibilityMessageHandler:(id)arg1;
- (void)attachMbBizHandle:(id)arg1;
- (void)detachMbBizHandle;
- (id)init;
- (void).cxx_destruct;
@end
