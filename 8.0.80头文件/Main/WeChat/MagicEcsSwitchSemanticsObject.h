@interface MagicEcsSwitchSemanticsObject : MagicEcsSemanticsObject
{
    UISwitch * _nativeSwitch; // +0x8
}
- (id)nativeSwitch;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)buildAccessibilityValue;
- (unsigned long long)buildAccessibilityTraits;
- (void)setNativeSwitch:(id)arg1;
- (void).cxx_destruct;
@end
