@interface MMWebPageSheetConfig : NSObject
{
    BOOL _forcePortrait; // +0x8
    BOOL _hideBgMask; // +0x9
    BOOL _transferTouchEventInBgMask; // +0xa
    BOOL _navTranslucent; // +0xb
    BOOL _bShowNavRefresh; // +0xc
    BOOL _showFromRightToLeftAtLandscape; // +0xd
    BOOL _enableDragToClose; // +0xe
    BOOL _recognizeHorizontalWhenDragToClose; // +0xf
    BOOL _ignoreDragVelocityThreshold; // +0x10
    BOOL _checkLimitedMode; // +0x11
    BOOL _isPushFromWebPageSheet; // +0x12
    BOOL _isInPreviewMode; // +0x13
    unsigned int _dragDownButtonStyle; // +0x14
    unsigned int _webA8keyScene; // +0x18
    unsigned int _reportEnterScene; // +0x1c
    double _pageSheetHeightPercent; // +0x20
    UIColor * _maskBackgroundColor; // +0x28
    double _foldIconAngle; // +0x30
    unsigned long long _leftBtnMode; // +0x38
    id /* block */ _leftBtnActionBlock; // +0x40
    id /* block */ _moreBtnActionBlock; // +0x48
    UIColor * _navButtonTintColor; // +0x50
    NSDictionary * _dictWebEnvInfo; // +0x58
    UIView * _webNavigationLoadingView; // +0x60
    UIColor * _webviewBackgroundColor; // +0x68
    UIColor * _navigationBarColor; // +0x70
    double _dragToCloseRatio; // +0x78
    double _edgeSlideCloseThreshold; // +0x80
}
- (id)init;
- (double)pageSheetHeightPercent;
- (void)setPageSheetHeightPercent:(double)arg1;
- (BOOL)forcePortrait;
- (void)setForcePortrait:(BOOL)arg1;
- (BOOL)hideBgMask;
- (void)setHideBgMask:(BOOL)arg1;
- (BOOL)transferTouchEventInBgMask;
- (void)setTransferTouchEventInBgMask:(BOOL)arg1;
- (id)maskBackgroundColor;
- (void)setMaskBackgroundColor:(id)arg1;
- (BOOL)navTranslucent;
- (void)setNavTranslucent:(BOOL)arg1;
- (double)foldIconAngle;
- (void)setFoldIconAngle:(double)arg1;
- (unsigned long long)leftBtnMode;
- (void)setLeftBtnMode:(unsigned long long)arg1;
- (id /* block */)leftBtnActionBlock;
- (void)setLeftBtnActionBlock:(id /* block */)arg1;
- (id /* block */)moreBtnActionBlock;
- (void)setMoreBtnActionBlock:(id /* block */)arg1;
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
- (BOOL)isPushFromWebPageSheet;
- (void)setIsPushFromWebPageSheet:(BOOL)arg1;
- (BOOL)isInPreviewMode;
- (void)setIsInPreviewMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
