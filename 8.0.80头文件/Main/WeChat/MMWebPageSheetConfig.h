@interface MMWebPageSheetConfig : NSObject
{
    BOOL _forcePortrait; // +0x8
    BOOL _usePercentOnFullPage; // +0x9
    BOOL _hideBgMask; // +0xa
    BOOL _transferTouchEventInBgMask; // +0xb
    BOOL _useBlurBackgroundForNavButtons; // +0xc
    BOOL _navTranslucent; // +0xd
    BOOL _navHidden; // +0xe
    BOOL _useDefaultMoreBtn; // +0xf
    BOOL _bShowNavRefresh; // +0x10
    BOOL _showFromRightToLeftAtLandscape; // +0x11
    BOOL _enableDragToClose; // +0x12
    BOOL _recognizeHorizontalWhenDragToClose; // +0x13
    BOOL _ignoreDragVelocityThreshold; // +0x14
    BOOL _checkLimitedMode; // +0x15
    BOOL _showHostInSubtitle; // +0x16
    BOOL _isPushFromWebPageSheet; // +0x17
    BOOL _isInPreviewMode; // +0x18
    unsigned int _dragDownButtonStyle; // +0x1c
    unsigned int _webA8keyScene; // +0x20
    unsigned int _reportEnterScene; // +0x24
    double _pageSheetHeightPercent; // +0x28
    UIColor * _maskBackgroundColor; // +0x30
    double _foldIconAngle; // +0x38
    unsigned long long _leftBtnMode; // +0x40
    id /* block */ _leftBtnActionBlock; // +0x48
    id /* block */ _moreBtnActionBlock; // +0x50
    UIColor * _navButtonTintColor; // +0x58
    NSDictionary * _dictWebEnvInfo; // +0x60
    NSDictionary * _dictExtInfo; // +0x68
    UIView * _webNavigationLoadingView; // +0x70
    UIColor * _webviewBackgroundColor; // +0x78
    UIColor * _navigationBarColor; // +0x80
    double _dragToCloseRatio; // +0x88
    double _edgeSlideCloseThreshold; // +0x90
    id /* block */ _callbackWebViewDidShare; // +0x98
    id /* block */ _callbackWebViewDidJumpApp; // +0xa0
    id /* block */ _callbackWebViewDidJumpAppStore; // +0xa8
    id /* block */ _callbackWebViewDidCancelJumpApp; // +0xb0
    id /* block */ _callbackWebViewDidAlertJumpApp; // +0xb8
    id /* block */ _callbackWebViewDidShowMenu; // +0xc0
    id /* block */ _callbackWebViewDidReturn; // +0xc8
}
- (id)init;
- (double)pageSheetHeightPercent;
- (void)setPageSheetHeightPercent:(double)arg1;
- (BOOL)forcePortrait;
- (void)setForcePortrait:(BOOL)arg1;
- (BOOL)usePercentOnFullPage;
- (void)setUsePercentOnFullPage:(BOOL)arg1;
- (BOOL)hideBgMask;
- (void)setHideBgMask:(BOOL)arg1;
- (BOOL)transferTouchEventInBgMask;
- (void)setTransferTouchEventInBgMask:(BOOL)arg1;
- (id)maskBackgroundColor;
- (void)setMaskBackgroundColor:(id)arg1;
- (BOOL)useBlurBackgroundForNavButtons;
- (void)setUseBlurBackgroundForNavButtons:(BOOL)arg1;
- (BOOL)navTranslucent;
- (void)setNavTranslucent:(BOOL)arg1;
- (BOOL)navHidden;
- (void)setNavHidden:(BOOL)arg1;
- (double)foldIconAngle;
- (void)setFoldIconAngle:(double)arg1;
- (unsigned long long)leftBtnMode;
- (void)setLeftBtnMode:(unsigned long long)arg1;
- (id /* block */)leftBtnActionBlock;
- (void)setLeftBtnActionBlock:(id /* block */)arg1;
- (id /* block */)moreBtnActionBlock;
- (void)setMoreBtnActionBlock:(id /* block */)arg1;
- (BOOL)useDefaultMoreBtn;
- (void)setUseDefaultMoreBtn:(BOOL)arg1;
- (BOOL)bShowNavRefresh;
- (void)setBShowNavRefresh:(BOOL)arg1;
- (unsigned int)dragDownButtonStyle;
- (void)setDragDownButtonStyle:(unsigned int)arg1;
- (BOOL)showFromRightToLeftAtLandscape;
- (void)setShowFromRightToLeftAtLandscape:(BOOL)arg1;
- (id)navButtonTintColor;
- (void)setNavButtonTintColor:(id)arg1;
- (unsigned int)webA8keyScene;
- (void)setWebA8keyScene:(unsigned int)arg1;
- (unsigned int)reportEnterScene;
- (void)setReportEnterScene:(unsigned int)arg1;
- (id)dictWebEnvInfo;
- (void)setDictWebEnvInfo:(id)arg1;
- (id)dictExtInfo;
- (void)setDictExtInfo:(id)arg1;
- (id)webNavigationLoadingView;
- (void)setWebNavigationLoadingView:(id)arg1;
- (id)webviewBackgroundColor;
- (void)setWebviewBackgroundColor:(id)arg1;
- (id)navigationBarColor;
- (void)setNavigationBarColor:(id)arg1;
- (BOOL)enableDragToClose;
- (void)setEnableDragToClose:(BOOL)arg1;
- (BOOL)recognizeHorizontalWhenDragToClose;
- (void)setRecognizeHorizontalWhenDragToClose:(BOOL)arg1;
- (BOOL)ignoreDragVelocityThreshold;
- (void)setIgnoreDragVelocityThreshold:(BOOL)arg1;
- (double)dragToCloseRatio;
- (void)setDragToCloseRatio:(double)arg1;
- (BOOL)checkLimitedMode;
- (void)setCheckLimitedMode:(BOOL)arg1;
- (double)edgeSlideCloseThreshold;
- (void)setEdgeSlideCloseThreshold:(double)arg1;
- (BOOL)showHostInSubtitle;
- (void)setShowHostInSubtitle:(BOOL)arg1;
- (id /* block */)callbackWebViewDidShare;
- (void)setCallbackWebViewDidShare:(id /* block */)arg1;
- (id /* block */)callbackWebViewDidJumpApp;
- (void)setCallbackWebViewDidJumpApp:(id /* block */)arg1;
- (id /* block */)callbackWebViewDidJumpAppStore;
- (void)setCallbackWebViewDidJumpAppStore:(id /* block */)arg1;
- (id /* block */)callbackWebViewDidCancelJumpApp;
- (void)setCallbackWebViewDidCancelJumpApp:(id /* block */)arg1;
- (id /* block */)callbackWebViewDidAlertJumpApp;
- (void)setCallbackWebViewDidAlertJumpApp:(id /* block */)arg1;
- (id /* block */)callbackWebViewDidShowMenu;
- (void)setCallbackWebViewDidShowMenu:(id /* block */)arg1;
- (id /* block */)callbackWebViewDidReturn;
- (void)setCallbackWebViewDidReturn:(id /* block */)arg1;
- (BOOL)isPushFromWebPageSheet;
- (void)setIsPushFromWebPageSheet:(BOOL)arg1;
- (BOOL)isInPreviewMode;
- (void)setIsInPreviewMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
