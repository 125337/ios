@interface ScanGoodsLogicController : BaseScanLogicController <CameraScannerStatusExt, GoodsScannerDelegate, MMUIHalfScreenViewControllerDelegate, CameraScanGoodsContentViewDelegate>
{
    GoodsScanner * _scanner; // +0x18
    BOOL _isSearching; // +0x20
    NSString * _alertText; // +0x28
    BOOL _isHandlingResult; // +0x30
    BOOL _hasDidShakingAnimationOnce; // +0x31
    unsigned long long _lastBeginHandleResultTimeStamp; // +0x38
    NSString * _desc; // +0x40
    NSString * _svrRespInfoText; // +0x48
    unsigned long long _openHalfResultPageTimeStampInMs; // +0x50
    CGPoint _markdotCenter; // +0x58
}
- (id)initWithCameraScannerViewWrapper:(id)arg1 businessType:(long long)arg2 businessSubType:(long long)arg3 adInfo:(id)arg4 jsapiInfo:(id)arg5;
- (void)dealloc;
- (void)onCameraScannerViewDidInit:(id)arg1;
- (void)onCameraScannerViewDidRecover:(id)arg1;
- (void)startScan;
- (void)stopScan;
- (CGRect)getDrawCropRect;
- (id)getInfoText;
- (id)getAlertText;
- (void)onScanTimeout;
- (void)onCaptureNewBuffer;
- (void)onGetGoodsScanDotInfoList:(id)arg1;
- (void)onSendImageDataLength:(unsigned long long)arg1;
- (void)onSendImageDataFail:(id)arg1 errorCode:(long long)arg2 errorMsg:(id)arg3 isNetworkError:(BOOL)arg4;
- (void)onSendImageDataSuccess:(id)arg1 sendoutImage:(id)arg2 normalizedCenter:(CGPoint)arg3 normalizedSize:(CGSize)arg4;
- (void)prepareForHandlingResult;
- (void)handleCameraSendImageDataSuccess:(id)arg1 sendoutImage:(id)arg2 normalizedCenter:(CGPoint)arg3 normalizedSize:(CGSize)arg4;
- (void)handleAlbumSendImageDataSuccess:(id)arg1 sendoutImage:(id)arg2 normalizedCenter:(CGPoint)arg3 normalizedSize:(CGSize)arg4;
- (void)detectSuccessBeforeMarkDotAnimation:(id)arg1;
- (void)detectSuccessAfterMarkDotAnimation:(id)arg1;
- (void)openHalfScreenViewCtrl:(id)arg1;
- (void)onRotate;
- (BOOL)shouldDoAnimationWhenDismiss;
- (void)scanOnePicture:(id)arg1;
- (void)startScanOnePictureLoadingBlock;
- (void)stopScanOnePictureLoadingBlock;
- (void)generateCombineImageAndBlurImage:(id)arg1;
- (void)onEnterTab;
- (void)onLeaveTab;
- (void)scannerStartCapture;
- (void)scannerStopCapture;
- (void)imagePickerOpen;
- (void)imagePickerCancel;
- (void)cancelAllCallback;
- (void)setupContentView:(CGRect)arg1;
- (void)contentViewAppearFromSwitchTab:(BOOL)arg1;
- (void)contentViewDisappear;
- (void)contentViewNetConnect;
- (void)contentViewNetDisconnect;
- (void)startShakingAnimation;
- (void)stopShakingAnimation;
- (void)onHalfScreenPage:(id)arg1 contentTopChanged:(double)arg2;
- (void)onHalfScreenPageWillClose:(id)arg1 action:(long long)arg2;
- (void)onHalfScreenPageDidClose:(id)arg1 action:(long long)arg2;
- (void)reportCloseHalfScreenPage:(long long)arg1;
- (void)onBeginHandleResult;
- (void)onEndHandleResult;
- (void)updateGoodsContentWithHalfScreenTop:(double)arg1 animateDuration:(double)arg2;
- (CGPoint)calcuateCustomViewPointWithHalfScreenTop:(double)arg1;
- (BOOL)isAlbumImageHorizontalFilled:(id)arg1;
- (CGSize)calcuateAlbumImageDisplaySize:(id)arg1 isHorizontalFilled:(BOOL)arg2;
- (float)getDefaultInfoLabelBottomPadding;
- (id)getMarkDotCustomImage;
- (BOOL)shouldShowFullScreenBgView;
- (id)getFullScreenBgImage;
- (BOOL)shouldShowPinView;
- (id)getPinFgImage;
- (BOOL)isHandlingResult;
- (void)setIsHandlingResult:(BOOL)arg1;
- (unsigned long long)lastBeginHandleResultTimeStamp;
- (void)setLastBeginHandleResultTimeStamp:(unsigned long long)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (CGPoint)markdotCenter;
- (void)setMarkdotCenter:(CGPoint)arg1;
- (BOOL)hasDidShakingAnimationOnce;
- (void)setHasDidShakingAnimationOnce:(BOOL)arg1;
- (id)svrRespInfoText;
- (void)setSvrRespInfoText:(id)arg1;
- (unsigned long long)openHalfResultPageTimeStampInMs;
- (void)setOpenHalfResultPageTimeStampInMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
