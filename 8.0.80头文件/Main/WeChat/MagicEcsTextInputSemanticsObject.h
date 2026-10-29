@interface MagicEcsTextInputSemanticsObject : MagicEcsSemanticsObject
{
    MagicEcsInactiveTextInput * _inactiveTextInput; // +0x8
}
- (id)inactiveTextInput;
- (BOOL)accessibilityElementIsFocused;
- (id)buildAccessibilityValue;
- (unsigned long long)buildAccessibilityTraits;
- (void)updateSemanticsNode:(id)arg1;
- (void)setInactiveTextInput:(id)arg1;
- (void).cxx_destruct;
@end
