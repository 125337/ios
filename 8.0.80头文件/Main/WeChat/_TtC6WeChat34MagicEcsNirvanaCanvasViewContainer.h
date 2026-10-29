@interface _TtC6WeChat34MagicEcsNirvanaCanvasViewContainer : _TtC6WeChat24MagicSimpleViewContainer
{
    _TtC6WeChat28MagicEcsAccessibilityChannel * accessibilityChannel; // +0x18
     _accessibilityBridge; // +0x20
     voiceOverStatusObserver; // +0x28
     accessibilityFeatureObservers; // +0x30
     reusableCanvasView; // +0x38
}
- (id)accessibilityChannel;
- (void)setAccessibilityChannel:(id)arg1;
- (id)accessibilityBridge;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)getOrCreateAccessibilityBridge;
- (void)releaseAccessibilityBridge;
- (void)createCanvasViewWithCanvasView:(id)arg1;
- (void)layoutSubviews;
- (void)layoutCanavsViewWithLeft:(long long)arg1 top:(long long)arg2 width:(long long)arg3 height:(long long)arg4;
- (void)destroyCanvasView;
- (id)detachCanvasView;
- (void)attachCanvasView:(id)arg1;
- (BOOL)isAccessibilityElement;
- (void)setIsAccessibilityElement:(BOOL)arg1;
- (unsigned long long)accessibilityTraits;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)didMoveToWindow;
- (void)removeFromSuperview;
- (void).cxx_destruct;
@end
