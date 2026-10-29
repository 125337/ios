@interface WCWebSearchPresenter : WebSearchPluginBase
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (void)onSwitchSearchContext:(id)arg1;
- (void)notyfySwitchSearchContext:(id)arg1;
- (void)performSearchWithParams:(id)arg1;
- (void)hideKeyboard;
- (id)store;
@end

