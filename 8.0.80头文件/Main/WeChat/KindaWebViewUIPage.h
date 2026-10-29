@interface KindaWebViewUIPage : MMWebViewController <MMIUIPagePlatformFuncDelegate>
{
    MMIUIPage * _kindaUIPage; // +0x70
    KindaProxy * _kindProxy; // +0x78
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
- (void)setTopLeftBtnTitleAndCallbackImpl:(id)arg1 callback:(id)arg2;
- (void)setTopRightBtnImage:(id)arg1;
- (void)setTopRightBtnTitle:(id)arg1 color:(id)arg2;
- (void)setTopRightCallbackImpl:(id)arg1;
- (void)setTopRightBtnBgIsGreen:(BOOL)arg1;
- (void)setTopRightBtnDone;
- (void)setTopRightFull:(BOOL)arg1;
- (id)getTitle;
- (void)setWindowSoftInputAdjustMode:(long long)arg1;
- (void)addReportInfo:(id)arg1;
- (void)startLoading:(id)arg1 block:(BOOL)arg2;
- (void)stopLoading;
- (void)triggerReport:(long long)arg1 customKey:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setBackBtnVisible:(BOOL)arg1;
- (void)setSubTitleDefaultColor;
- (void)setSubTitleVisibility:(int)arg1;
- (void)setScreenBrightness:(float)arg1;
- (void)setScreenKeepOn:(BOOL)arg1;
- (id)kindaUIPage;
- (id)kindProxy;
- (void)setKindProxy:(id)arg1;
- (void).cxx_destruct;
@end
