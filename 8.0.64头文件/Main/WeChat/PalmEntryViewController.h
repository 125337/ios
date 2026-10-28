@interface PalmEntryViewController : WCPayBaseViewController <PalmEntryLogicControllerDelegate, PalmHalfScreenViewDelegate>
{
    BOOL _isPageClose; // +0x98
    BOOL _hasDetectPalm; // +0x99
    BOOL _hasSetRecordTimer; // +0x9a
    BOOL _isUploadingResult; // +0x9b
    BOOL _isSuccess; // +0x9c
    BOOL _hasQualifiedPalm; // +0x9d
    BOOL _notShowBreathPag; // +0x9e
    int _currentTipCode; // +0xa0
    PalmEntryLogicController * _logicController; // +0xa8
    id <PalmEntryViewControllerDelegate> _m_delegate; // +0xb0
    unsigned long long _currentHandType; // +0xb8
    unsigned long long _extendedHandType; // +0xc0
    UIView * _circleMaskView; // +0xc8
    CAShapeLayer * _maskLayer; // +0xd0
    PAGView * _guidingPagView; // +0xd8
    PAGView * _circlePagView; // +0xe0
    UIImageView * _circleImageView; // +0xe8
    CameraScannerView * _scannerView; // +0xf0
    PalmGuidingTipsView * _guidingTipsView; // +0xf8
    UIImageView * _successImageView; // +0x100
    MMTimer * _timeoutTimer; // +0x108
    MMTimer * _recordTimeoutTimer; // +0x110
    PalmHalfScreenView * _guidePopUpView; // +0x118
}
- (id)init;
- (id)navigationTitleColor;
- (void)viewDidLoad;
- (void)initGuidePopUpView;
- (void)initGuidePopUpViewWithTitle:(id)arg1 text:(id)arg2 timeoutMS:(unsigned int)arg3 videoUrl:(id)arg4 firstFrameUrl:(id)arg5 sessionId:(id)arg6;
- (void)showGuidePopUp;
- (void)delayStartInitialAnimation;
- (void)realDoLogic;
- (void)initTapGesture;
- (void)tapAtPoint:(id)arg1;
- (void)autoFocusAtCenter;
- (void)onCollectPalmTimeout;
- (void)onRecordTimeout;
- (void)setDelegate:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)onBack;
- (void)dealloc;
- (void)checkLogicAuth;
- (void)startRecordVideo;
- (void)startRecordSuccessVideo;
- (void)viewWillLayoutSubviews;
- (void)updateView;
- (void)setupCircelImageView;
- (void)setupGuidingTipsView;
- (void)setupCirclePagView;
- (void)setupCircleShapeLayer;
- (BOOL)useTransparentNavibar;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)startScan;
- (void)stopScan;
- (void)initCamera;
- (unsigned long long)getTipHandType:(unsigned long long)arg1;
- (void)palmEntryLogicShouldUpdateTips:(int)arg1 code:(int)arg2 isFirstDetectPalm:(BOOL)arg3 isQualifiedPalm:(BOOL)arg4 handType:(unsigned long long)arg5;
- (void)updateCircleImageView:(int)arg1;
- (BOOL)isCodeGreen:(int)arg1;
- (id)getCircleImage:(BOOL)arg1;
- (void)handleFirstDectPalm;
- (void)showCirclePagView;
- (void)showCircelPageViewAndCircleImageView;
- (void)showCircleImageView;
- (unsigned long long)palmEntryLogicGetLimitHandType;
- (id)palmEntryLogicGetSdkConfig;
- (void)palmEntryLogicDidGetFinalResult:(id)arg1 uploadVideoPath:(id)arg2;
- (void)palmEntryLogicWillGetFinalResult;
- (void)startInitialAnimation:(id /* block */)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)popupViewDidClose;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)isPageClose;
- (void)setIsPageClose:(BOOL)arg1;
- (BOOL)hasDetectPalm;
- (void)setHasDetectPalm:(BOOL)arg1;
- (BOOL)hasSetRecordTimer;
- (void)setHasSetRecordTimer:(BOOL)arg1;
- (BOOL)isUploadingResult;
- (void)setIsUploadingResult:(BOOL)arg1;
- (BOOL)isSuccess;
- (void)setIsSuccess:(BOOL)arg1;
- (BOOL)hasQualifiedPalm;
- (void)setHasQualifiedPalm:(BOOL)arg1;
- (int)currentTipCode;
- (void)setCurrentTipCode:(int)arg1;
- (unsigned long long)currentHandType;
- (void)setCurrentHandType:(unsigned long long)arg1;
- (unsigned long long)extendedHandType;
- (void)setExtendedHandType:(unsigned long long)arg1;
- (id)circleMaskView;
- (void)setCircleMaskView:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (id)guidingPagView;
- (void)setGuidingPagView:(id)arg1;
- (id)circlePagView;
- (void)setCirclePagView:(id)arg1;
- (id)circleImageView;
- (void)setCircleImageView:(id)arg1;
- (id)scannerView;
- (void)setScannerView:(id)arg1;
- (id)guidingTipsView;
- (void)setGuidingTipsView:(id)arg1;
- (BOOL)notShowBreathPag;
- (void)setNotShowBreathPag:(BOOL)arg1;
- (id)successImageView;
- (void)setSuccessImageView:(id)arg1;
- (id)timeoutTimer;
- (void)setTimeoutTimer:(id)arg1;
- (id)recordTimeoutTimer;
- (void)setRecordTimeoutTimer:(id)arg1;
- (id)guidePopUpView;
- (void)setGuidePopUpView:(id)arg1;
- (void).cxx_destruct;
@end
