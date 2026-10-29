@interface MMFinderLiveNewShareSettingSessionSelectController : SessionSelectController <SessionSelectViewDelegate, MMUIViewControllerOverrideOrientationMaskProtocol>
- (id)initWithUserInterfaceStyle:(long long)arg1;
- (id)initWithUserInterfaceStyle:(long long)arg1 selectedContacts:(id)arg2;
- (id)navigationBarBackgroundColor;
- (id)getColorProxy;
- (void)onSearchTextFieldEditStateChange:(BOOL)arg1;
- (double)recentForwardMarginForSelectView:(id)arg1 defaultMargin:(double)arg2;
- (void)commonInit;
- (BOOL)shouldOverrideMethods;
- (unsigned long long)supportedInterfaceOrientations;
@end

