@interface KindaWebViewUIPage : MMWebViewController <MMIUIPagePlatformFuncDelegate>
{
    MMIUIPage * _kindaUIPage; // +0x68
    KindaProxy * _kindProxy; // +0x70
}
- (void)setKindaUIPage:(id)arg1;
- (void)dealloc;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)description;
- (void)closeUI:(BOOL)arg1;
- (void)beginIgnoringInteractionEvents;
- (void)endEditing;
- (void)endIgnoringInteractionEvents;
- (void)refreshNavigationBar;
- (void)setBackgroundColor:(id)arg1;
- (void)setKeyBoardShowCallbackImpl:(id)arg1;
- (void)setTopLeftBackBtnCallbackImpl:(id)arg1;
- (void)setTopRightBtnImage:(id)arg1;
- (void)setTopRightBtnTitle:(id)arg1 color:(id)arg2;
- (void)setTopRightCallbackImpl:(id)arg1;
- (id)getTitle;
- (void)setWindowSoftInputAdjustMode:(long long)arg1;
- (void)addReportInfo:(id)arg1;
- (void)startLoading:(id)arg1 block:(BOOL)arg2;
- (void)triggerReport:(long long)arg1 customKey:(id)arg2;
- (id)kindaUIPage;
- (id)kindProxy;
- (void)setKindProxy:(id)arg1;
- (void).cxx_destruct;
@end

