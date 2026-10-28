@interface KindaViewController : MMUIViewController <MMIUIPagePlatformFuncDelegate, MMIUIPagePlatformDelegate>
{
    MMIUIPage * _m_page; // +0x70
    KindaLayout * _m_layout; // +0x78
    MMVoidCallback * _m_leftCallback; // +0x80
    MMVoidCallback * _m_rightCallback; // +0x88
    MMVoidBoolI32Callback * _m_keyboardShowCallback; // +0x90
    id <KindaViewControllerControlDelegate> _m_controlDelegate; // +0x98
    KindaProxy * _kindProxy; // +0xa0
    UIView * _yogaSuperView; // +0xa8
    WCPayBlurViewHelper * _blurViewHelper; // +0xb0
}
- (id)initWithPage:(id)arg1 withDelegate:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)navigationBarBackgroundColor;
- (BOOL)useBlackStatusbar;
- (void)viewDidTransitionToNewSize;
- (BOOL)shouldInteractivePop;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBeInteractivePoped;
- (void)setupNavigationBar;
- (void)onClickLeftItem;
- (void)onClickRightItem;
- (long long)currentPlatform;
- (void)setTitle:(id)arg1;
- (id)getTitle;
- (void)setTopLeftBackBtnCallbackImpl:(id)arg1;
- (void)setTopRightCallbackImpl:(id)arg1;
- (void)setTopRightBtnImage:(id)arg1;
- (void)setTopRightBtnImage:(id)arg1 color:(id)arg2;
- (void)setTopRightBtnTitle:(id)arg1 color:(id)arg2;
- (void)refreshNavigationBar;
- (void)setBackgroundColor:(id)arg1;
- (void)closeUI:(BOOL)arg1;
- (id)previousViewController;
- (void)endEditing;
- (void)beginIgnoringInteractionEvents;
- (void)endIgnoringInteractionEvents;
- (void)keyboardWillShown:(id)arg1;
- (void)keyboardDidShown:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)setKeyBoardShowCallbackImpl:(id)arg1;
- (void)startLoading:(id)arg1 block:(BOOL)arg2;
- (void)stopLoading;
- (void)setWindowSoftInputAdjustMode:(long long)arg1;
- (void)addReportInfo:(id)arg1;
- (void)triggerReport:(long long)arg1 customKey:(id)arg2;
- (id)m_page;
- (void)setM_page:(id)arg1;
- (id)m_layout;
- (void)setM_layout:(id)arg1;
- (id)m_leftCallback;
- (void)setM_leftCallback:(id)arg1;
- (id)m_rightCallback;
- (void)setM_rightCallback:(id)arg1;
- (id)m_keyboardShowCallback;
- (void)setM_keyboardShowCallback:(id)arg1;
- (id)m_controlDelegate;
- (void)setM_controlDelegate:(id)arg1;
- (id)kindProxy;
- (void)setKindProxy:(id)arg1;
- (id)yogaSuperView;
- (void)setYogaSuperView:(id)arg1;
- (id)blurViewHelper;
- (void)setBlurViewHelper:(id)arg1;
- (void).cxx_destruct;
@end
