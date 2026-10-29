@interface OCRTransLogicController : BaseScanLogicController <CameraScanOCRContentViewDelegate, EnhanceTranslatingDelegate, EnhanceTranslatingViewDelegate, UIViewControllerTransitioningDelegate, EnhanceTranslatingResultViewControllerDelegate, OCRTransScannerDelegate, CameraScannerStatusExt, IOCRTransMgrExt>
{
    OCRTransScanner * _scanner; // +0x18
    int _scene; // +0x20
    NSString * _orign; // +0x28
    NSString * _translation; // +0x30
    UIImage * _sourceImage; // +0x38
    NSArray * _translations; // +0x40
    OCRTransReport * _report; // +0x48
    EnhanceTranslatingLogic * _logic; // +0x50
    EnhanceTranslatingView * _enhanceTranslatingView; // +0x58
    NSString * _preset; // +0x60
}
- (id)init;
- (id)initWithCameraScannerViewWrapper:(id)arg1;
- (void)dealloc;
- (void)onCameraScannerViewDidInit:(id)arg1;
- (void)onCameraScannerViewDidRecover:(id)arg1;
- (void)startScan;
- (void)stopScan;
- (void)setCloseButtonBottom:(double)arg1 infoLableTop:(double)arg2;
- (void)fireWithScene:(int)arg1;
- (unsigned int)getScannerSessionId;
- (unsigned int)sendImage:(id)arg1 scene:(int)arg2;
- (void)updateSessionIDWhenSessionPicTrans;
- (void)setCropRect;
- (CGRect)getDrawCropRect;
- (id)getInfoText;
- (float)getInfoLabelTopPadding;
- (double)getTorchBottomPadding;
- (float)getDefaultInfoLabelBottomPadding;
- (id)getInfoLabelFont;
- (id)getInfoLabelColor;
- (float)getDescriptionLabelTopPadding;
- (id)getDescriptionText;
- (BOOL)shouldPopFromStack;
- (void)onRotate;
- (void)onLeaveTab;
- (void)onEnterTab;
- (void)onGotOCRResultOrign:(id)arg1 Translation:(id)arg2;
- (void)onGotOCRResult:(id)arg1;
- (void)onOCRTransError:(int)arg1;
- (void)onSendDataLength:(unsigned int)arg1;
- (void)onStartScanning;
- (void)onStopScanning;
- (void)onGotImageByScanning:(id)arg1 cropRect:(CGRect)arg2;
- (void)onGotImageByCamera:(id)arg1;
- (void)setupContentView:(CGRect)arg1;
- (id)enhanceTranslatingView;
- (void)contentViewNetConnect;
- (void)contentViewNetDisconnect;
- (void)contentViewNetShowCameraTips;
- (void)onTakePhotoButtonClicked:(id)arg1;
- (void)onEnhanceTranslatingLogicBegin;
- (void)onEnhanceTranslatingLogicCancel;
- (void)onEnhanceTranslatingLogicNotStable;
- (void)onEnhanceTranslatingLogicFail;
- (void)onEnhanceTranslatingLogicSwitchToCamera;
- (void)onEnhanceTranslatingLogicDisplay:(id)arg1 sourceImg:(id)arg2 sessionId:(unsigned long long)arg3 leftTop:(CGPoint)arg4 rightTop:(CGPoint)arg5 rightBottom:(CGPoint)arg6 leftBottom:(CGPoint)arg7;
- (void)onEnhanceTranslatingLogicTakePhoto:(id)arg1;
- (void)onEnhanceTranslatingViewCancel;
- (void)onEnhanceTranslatingViewDiscard;
- (void)onEnhanceTranslatingViewResultWillAppear;
- (void)onEnhanceTranslatingViewNavToResultVc:(id)arg1;
- (unsigned long long)currentSessionId;
- (void)onEnhanceTranslatingAnimationWorked:(BOOL)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)onResultPageClose;
- (void)centerLabelShowStart;
- (void)centerLabelShowEnd;
- (id)sourceImage;
- (void)setSourceImage:(id)arg1;
- (id)translations;
- (void)setTranslations:(id)arg1;
- (id)report;
- (void)setReport:(id)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (void)setEnhanceTranslatingView:(id)arg1;
- (id)preset;
- (void)setPreset:(id)arg1;
- (void).cxx_destruct;
@end
