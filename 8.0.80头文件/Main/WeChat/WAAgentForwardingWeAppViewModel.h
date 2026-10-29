@interface WAAgentForwardingWeAppViewModel : CBTCoopV2WeAppViewModel
{
    id /* block */ _onOpenWeApp; // +0x8
    NSString * _overrideTitleText; // +0x10
}
- (void)openWeAppFromViewController:(id)arg1;
- (void)openWeAppOnlyFromViewController:(id)arg1;
- (id)titleText;
- (id /* block */)onOpenWeApp;
- (void)setOnOpenWeApp:(id /* block */)arg1;
- (id)overrideTitleText;
- (void)setOverrideTitleText:(id)arg1;
- (void).cxx_destruct;
@end
