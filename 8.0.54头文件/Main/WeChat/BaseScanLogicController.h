@interface BaseScanLogicController : MMObject <CameraScanBaseContentViewDelegate>
{
    id <BaseScanLogicDelegate> _delegate; // +0x8
    id <CameraScanLogicDelegate> _reportDelegate; // +0x10
    BOOL _needReportStopScanSession; // +0x18
    unsigned int _enterSessionID; // +0x1c
    unsigned int _tabSessionID; // +0x20
    unsigned int _scanSessionID; // +0x24
    CameraScannerViewWrapper * _cameraScannerWrapper; // +0x28
    CameraScanBaseContentView * _contentView; // +0x30
    CameraScanTabSwitchingView * _tabSwitchingView; // +0x38
    unsigned long long _enterSessionTs; // +0x40
    unsigned long long _scanSessionStartTimeStamp; // +0x48
}
- (id)initWithCameraScannerViewWrapper:(id)arg1;
- (void)startScan;
- (void)restartScan;
- (void)stopScan;
- (void)changePreviewScale;
- (double)getViewControllerViewWidth;
- (CGRect)getDrawCropRect;
- (id)getInfoText;
- (float)getInfoLabelTopPadding;
- (BOOL)isCollisionWithAnyMarkDotView;
- (float)getDefaultInfoLabelBottomPadding;
- (float)getModifiedInfoLabelBottomPadding;
- (double)getTorchBottomPadding;
- (id)getInfoLabelFont;
- (id)getInfoLabelColor;
- (float)getDescriptionLabelTopPadding;
- (id)getDescriptionText;
- (id)getAlertText;
- (id)getLoadingText;
- (float)getPreviewScale;
- (BOOL)shouldPopFromStack;
- (BOOL)shouldHideAlertOnClicked;
- (BOOL)shouldShowInfoLabel;
- (void)onMyQRCodeButtonClicked;
- (void)scanOnePicture:(id)arg1;
- (BOOL)shouldDoAnimationWhenDismiss;
- (BOOL)shouldPopSelfAtPresented;
- (BOOL)isPointInContentButtonView:(CGPoint)arg1;
- (void)setInfoLabelHidden:(BOOL)arg1 bAnim:(BOOL)arg2;
- (void)onRotate;
- (void)autoFocusCropRectCenter;
- (double)getTabViewHeight;
- (BOOL)isTorchViewHiddenNow;
- (void)scannerStartCapture;
- (void)scannerStopCapture;
- (void)onEnterTab;
- (void)onLeaveTab;
- (void)imagePickerOpen;
- (void)imagePickerCancel;
- (void)setupContentView:(CGRect)arg1;
- (void)setupTabSwitchingView:(CGRect)arg1;
- (void)setCloseButtonBottom:(double)arg1 infoLableTop:(double)arg2;
- (void)contentViewAppearFromSwitchTab:(BOOL)arg1;
- (void)contentViewDisappear;
- (void)contentViewStartScanAnimation;
- (void)contentViewStopScanAnimation;
- (void)contentViewNetConnect;
- (void)contentViewNetDisconnect;
- (void)resetContentViewWhenStartScan;
- (void)onVCDidReceiveMemoryWarning;
- (void)onClickHoleMaskView;
- (void)onTapAtPoint:(id)arg1;
- (unsigned int)uiSessionID;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (id)cameraScannerWrapper;
- (void)setCameraScannerWrapper:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)tabSwitchingView;
- (void)setTabSwitchingView:(id)arg1;
- (unsigned int)enterSessionID;
- (void)setEnterSessionID:(unsigned int)arg1;
- (unsigned long long)enterSessionTs;
- (void)setEnterSessionTs:(unsigned long long)arg1;
- (unsigned int)tabSessionID;
- (void)setTabSessionID:(unsigned int)arg1;
- (unsigned int)scanSessionID;
- (void)setScanSessionID:(unsigned int)arg1;
- (unsigned long long)scanSessionStartTimeStamp;
- (void)setScanSessionStartTimeStamp:(unsigned long long)arg1;
- (BOOL)needReportStopScanSession;
- (void)setNeedReportStopScanSession:(BOOL)arg1;
- (void).cxx_destruct;
@end

