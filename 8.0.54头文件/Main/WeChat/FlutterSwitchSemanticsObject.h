@interface FlutterSwitchSemanticsObject : SemanticsObject
{
    UISwitch * _nativeSwitch; // +0x8
}
- (id)initWithBridge:(WeakPtr<flutter::AccessibilityBridgeIos>)arg1 uid:(int)arg2;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (id)nativeSwitch;
@end

