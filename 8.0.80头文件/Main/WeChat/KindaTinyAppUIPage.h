@interface KindaTinyAppUIPage : NSObject
{
    BOOL _didNotifyTransparentTinyAppClosed; // +0x8
    MMIUIPage * _kindaUIPage; // +0x10
    id <KindaTinyAppUIPageDelegate> _delegate; // +0x18
    NSString * _username; // +0x20
    KindaProxy * _kindaProxy; // +0x28
    MMUIViewController * _loadingViewController; // +0x30
    MMLiteAppViewController * _liteAppVC; // +0x38
}
- (void)openTinyApp:(id)arg1 extraData:(id)arg2;
- (void)destoryTinyAppPage;
- (void)triggerLiteAppVCAppearanceTransition:(BOOL)arg1;
- (void)notifyLiteAppTransparentTinyAppClosed;
- (void)closeUI:(BOOL)arg1;
- (void)beginIgnoringInteractionEvents;
- (void)endEditing;
- (void)endIgnoringInteractionEvents;
- (void)refreshNavigationBar;
- (void)setBackgroundColor:(long long)arg1;
- (void)setKeyBoardShowCallbackImpl:(id)arg1;
- (void)setTopLeftBackBtnCallbackImpl:(id)arg1;
- (void)setTopRightBtnImage:(id)arg1;
- (void)setTopRightBtnTitle:(id)arg1 color:(id)arg2;
- (void)setTopRightCallbackImpl:(id)arg1;
- (id)getTitle;
- (void)setScreenBrightness:(float)arg1;
- (void)setScreenKeepOn:(BOOL)arg1;
- (id)kindaUIPage;
- (void)setKindaUIPage:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)kindaProxy;
- (void)setKindaProxy:(id)arg1;
- (id)loadingViewController;
- (void)setLoadingViewController:(id)arg1;
- (id)liteAppVC;
- (void)setLiteAppVC:(id)arg1;
- (BOOL)didNotifyTransparentTinyAppClosed;
- (void)setDidNotifyTransparentTinyAppClosed:(BOOL)arg1;
- (void).cxx_destruct;
@end
