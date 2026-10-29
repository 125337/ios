@interface WxpaySemanticElement : UIAccessibilityElement
{
    id /* block */ _activateHandler; // +0x8
    id /* block */ _scrollHandler; // +0x10
}
- (BOOL)accessibilityActivate;
- (BOOL)accessibilityScroll:(long long)arg1;
- (id /* block */)activateHandler;
- (void)setActivateHandler:(id /* block */)arg1;
- (id /* block */)scrollHandler;
- (void)setScrollHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
