@interface WCAgreementCheckBoxAccessibilityElement : UIAccessibilityElement
{
    id /* block */ _accessibilityActivateHandler; // +0x8
    id /* block */ _accessibilityActivationPointHandler; // +0x10
}
- (BOOL)accessibilityActivate;
- (CGPoint)accessibilityActivationPoint;
- (id /* block */)accessibilityActivateHandler;
- (void)setAccessibilityActivateHandler:(id /* block */)arg1;
- (id /* block */)accessibilityActivationPointHandler;
- (void)setAccessibilityActivationPointHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

