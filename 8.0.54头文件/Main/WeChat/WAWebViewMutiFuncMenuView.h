@interface WAWebViewMutiFuncMenuView : MMUIView <WANavAlertTitleViewDelegate>
{
    NSString * _normalLastNavTitle; // +0x8
    MMUILabel * _normalTitleView; // +0x10
    WANavAlertTitleView * _alertTitleView; // +0x18
    BOOL _isActivityIndicatorAnimating; // +0x20
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x28
    MMUIView * _leftButton; // +0x30
    unsigned long long _leftBtnType; // +0x38
    UIView * _menuView; // +0x40
    BOOL _isMenuHidden; // +0x48
    UIButton * _customRightButton; // +0x50
    UILongPressGestureRecognizer * _moreLongPressRecognizer; // +0x58
    BOOL _isTrigerMoreLongPress; // +0x60
    UILongPressGestureRecognizer * _longPressRecognizer; // +0x68
    WAPopOverTaskBarlogic * _popOverLogic; // +0x70
    WAPopOverView * _popOverView; // +0x78
    double _lastSystemNavigationBarHeight; // +0x80
    BOOL _canShowShare; // +0x88
    BOOL _needAdaptIpad; // +0x89
    BOOL _includeStatusBar; // +0x8a
    id <WAWebViewMutiFuncMenuViewDelegate> _delegate; // +0x90
    WAWebViewController * _webview; // +0x98
    id <WAWebViewMutiFuncMenuViewDataSource> _dataSource; // +0xa0
    long long _navMode; // +0xa8
    long long _contentMode; // +0xb0
}
+ (double)barReturnButtonLeftMarginCurOri;
+ (double)barHomeButtonLeftMarginCurOri;
+ (double)menuViewDefaultWidth;
+ (double)menuViewHeightCurOri;
+ (BOOL)shouldUseSmallMenu;
+ (double)getMenuOriginY;
+ (double)getMenuOriginYIncludeStatusBar:(BOOL)arg1;
+ (double)getMenuOriginX:(double)arg1 MenuWidth:(double)arg2;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateMenuViewWithWebContentMode:(long long)arg1 navMode:(long long)arg2;
- (void)layoutSubviews;
- (void)setMenuNavBackgroundColor:(id)arg1;
- (void)setGradientBackground;
- (void)setMenuNavTitle:(id)arg1;
- (void)setMenuViewCapsuleHidden:(BOOL)arg1;
- (void)setMenuTitleViewLoading:(BOOL)arg1;
- (id)getMenuMoreButton;
- (void)alert;
- (double)getStatusBarHeight;
- (double)getInnerMenuOriginY;
- (double)getInnerMenuOriginYIncludeStatusBar:(BOOL)arg1;
- (void)fsnormal_updateContent;
- (void)adjustOverallSizeToAdaptIpadWithOriginalFontSize:(double)arg1;
- (void)goHome;
- (void)resetMenuViewIcon;
- (void)fsnormal_layoutContent;
- (void)fsmenu_updateContent;
- (id)copyMenuView;
- (void)onReturn;
- (id)genMenuView;
- (BOOL)isSupportVisualEffect;
- (id)pluginVideoPlayer;
- (BOOL)shouldShowAlertTitle;
- (BOOL)shouldShowAlertTitleEntryBtn;
- (id)genReturnBtn:(id)arg1;
- (id)genHomeBtn:(id)arg1;
- (id)genCloseBtn:(id)arg1;
- (void)setCustomRightButton:(id)arg1 accessibilityLabel:(id)arg2;
- (void)onCustomButtonClick:(id)arg1;
- (void)updateLeftBtnType;
- (void)onNavAlertTitleViewEntryBtnClicked:(id)arg1;
- (BOOL)shouldShowEntryBtnOnNavAlertTitleView:(id)arg1;
- (id)delegate;
- (id)webview;
- (void)setWebview:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (long long)navMode;
- (void)setNavMode:(long long)arg1;
- (long long)contentMode;
- (void)setContentMode:(long long)arg1;
- (BOOL)canShowShare;
- (void)setCanShowShare:(BOOL)arg1;
- (BOOL)needAdaptIpad;
- (void)setNeedAdaptIpad:(BOOL)arg1;
- (BOOL)includeStatusBar;
- (void)setIncludeStatusBar:(BOOL)arg1;
- (void).cxx_destruct;
@end

