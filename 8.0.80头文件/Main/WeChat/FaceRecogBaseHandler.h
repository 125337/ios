@interface FaceRecogBaseHandler : MMObject <ILocationMgrExt, LocationRetrieveDelegate, IRecordPermissionCheckExt, MMKernelExt, FaceRecogUploadLogicDelegate, FaceRecogConfigLogicDelegate, FaceRecogBaseHandlerDelegate, FaceRecogBaseViewDelegate>
{
    BOOL _needGuide; // +0x8
    BOOL _needUploadVideo; // +0x9
    BOOL _uploadVideoForPay; // +0xa
    BOOL _isRSA; // +0xb
    BOOL _hasShowVC; // +0xc
    BOOL _hasShowAlert; // +0xd
    BOOL _isRunning; // +0xe
    BOOL _useHttp; // +0xf
    BOOL _userCancel; // +0x10
    float _brightnessValue; // +0x14
    unsigned int _scene; // +0x18
    unsigned int _finishDelayTime; // +0x1c
    id <FaceRecogBaseHandlerDelegate> _faceDelegate; // +0x20
    id <FaceRecogHandlerDelegate> _delegate; // +0x28
    NSString * _appId; // +0x30
    NSString * _userTicket; // +0x38
    NSString * _feedbackUrl; // +0x40
    NSString * _businessTip; // +0x48
    UIColor * _businessTipColor; // +0x50
    double _faceFrameRatio; // +0x58
    long long _identifyType; // +0x60
    MMUIViewController * _currentViewController; // +0x68
    FaceRecogBaseViewController * _faceVc; // +0x70
    FaceRecogConfigLogic * _configFetcher; // +0x78
    FaceRecogUploadLogic * _uploader; // +0x80
    FaceRecogReporter * _reporter; // +0x88
    long long _errorCode; // +0x90
    NSString * _errorMsg; // +0x98
    NSString * _verifyResult; // +0xa0
    LocationRetriever * _locationRetriver; // +0xa8
    NSMutableDictionary * _ctidAuthParams; // +0xb0
    FaceIdentifyResp_CTIDVerifyParam * _ctidVerifyParamForView; // +0xb8
}
- (id)initWithScene:(unsigned int)arg1;
- (void)initConfigLogic;
- (void)initUploadLogic;
- (void)setAppId:(id)arg1;
- (void)setNeedUploadVideo:(BOOL)arg1;
- (void)setUploadVideoForPay:(BOOL)arg1;
- (void)setBrightnessValue:(float)arg1;
- (void)dealloc;
- (void)startFaceRecog;
- (void)requestAccessVideo;
- (void)requestAccessAudio;
- (void)requestAccessLocation;
- (void)finishedWithAuthorizationError:(id)arg1;
- (void)onRequestAccessVideoDone:(BOOL)arg1 isOccupy:(BOOL)arg2;
- (void)onRequestAccessAudioDone:(BOOL)arg1;
- (void)requestRetry;
- (void)requestCancel;
- (void)requestStop;
- (void)report:(int)arg1 errorType:(int)arg2 errorCode:(int)arg3;
- (void)disMissAll:(BOOL)arg1 complete:(id /* block */)arg2;
- (unsigned long long)getAuthScene:(unsigned int)arg1;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (void)didInterruptedWithRetry:(BOOL)arg1;
- (void)onGetBioConfig:(id)arg1 succeedForScene:(unsigned int)arg2 succeedForBioId:(unsigned long long)arg3;
- (void)onGetBioConfig:(id)arg1 failedCauseOf:(int)arg2 forScene:(unsigned int)arg3 errMsg:(id)arg4;
- (void)onUploadFaceResultFinish:(id)arg1;
- (void)onGetFaceVideoFinish:(id)arg1 inWorkMode:(long long)arg2;
- (id)faceRecogVerifyGetFeedbackUrl;
- (void)reportUserCancel;
- (void)faceRecogDidCancel;
- (void)faceRecogDidClose;
- (void)faceRecogDidSuccess;
- (void)faceRecogDidRetry;
- (void)faceRecogDidClickOpenCTID:(id)arg1;
- (void)onHandleOpenURL:(id)arg1 bundleID:(id)arg2;
- (void)onRealFinish;
- (int)resultCode;
- (id)resultMsg;
- (id)result;
- (void)handlerDidFinishWithCode:(long long)arg1 reportCode:(int)arg2 msg:(id)arg3 errorTips:(id)arg4 verifyResult:(id)arg5 canRetry:(BOOL)arg6;
- (void)handlerDidFinishWithCode:(long long)arg1 reportCode:(int)arg2 msg:(id)arg3 verifyResult:(id)arg4 canRetry:(BOOL)arg5;
- (void)handlerDidFinishWithCode:(long long)arg1 msg:(id)arg2 verifyResult:(id)arg3 canRetry:(BOOL)arg4;
- (void)didFinishedWithCode:(int)arg1 msg:(id)arg2 retry:(BOOL)arg3;
- (void)handlerDidFinishWithCode:(long long)arg1 msg:(id)arg2 errorTips:(id)arg3 verifyResult:(id)arg4 canRetry:(BOOL)arg5;
- (void)handlerDidFinishWithCode:(long long)arg1 msg:(id)arg2 errorTips:(id)arg3 verifyResult:(id)arg4 canRetry:(BOOL)arg5 showCtidVerifyEntry:(BOOL)arg6 ctidVerifyParam:(id)arg7;
- (void)didUploadFaceData:(id)arg1;
- (void)didAccessVideo;
- (void)didAccessAudio;
- (void)didAccessConfig;
- (void)didAccessLocation:(double)arg1 longitude:(double)arg2;
- (void)handleUploadFaceFlashVideoForPayWithFlag:(BOOL)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)initView;
- (void)showView;
- (id)faceDelegate;
- (void)setFaceDelegate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)needGuide;
- (void)setNeedGuide:(BOOL)arg1;
- (id)appId;
- (BOOL)needUploadVideo;
- (BOOL)uploadVideoForPay;
- (float)brightnessValue;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (BOOL)isRSA;
- (void)setIsRSA:(BOOL)arg1;
- (id)userTicket;
- (void)setUserTicket:(id)arg1;
- (unsigned int)finishDelayTime;
- (void)setFinishDelayTime:(unsigned int)arg1;
- (BOOL)hasShowVC;
- (void)setHasShowVC:(BOOL)arg1;
- (BOOL)hasShowAlert;
- (void)setHasShowAlert:(BOOL)arg1;
- (id)feedbackUrl;
- (void)setFeedbackUrl:(id)arg1;
- (id)businessTip;
- (void)setBusinessTip:(id)arg1;
- (id)businessTipColor;
- (void)setBusinessTipColor:(id)arg1;
- (double)faceFrameRatio;
- (void)setFaceFrameRatio:(double)arg1;
- (long long)identifyType;
- (void)setIdentifyType:(long long)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)faceVc;
- (void)setFaceVc:(id)arg1;
- (id)configFetcher;
- (void)setConfigFetcher:(id)arg1;
- (id)uploader;
- (void)setUploader:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (BOOL)useHttp;
- (void)setUseHttp:(BOOL)arg1;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (id)errorMsg;
- (void)setErrorMsg:(id)arg1;
- (id)verifyResult;
- (void)setVerifyResult:(id)arg1;
- (BOOL)userCancel;
- (void)setUserCancel:(BOOL)arg1;
- (id)locationRetriver;
- (void)setLocationRetriver:(id)arg1;
- (id)ctidAuthParams;
- (void)setCtidAuthParams:(id)arg1;
- (id)ctidVerifyParamForView;
- (void)setCtidVerifyParamForView:(id)arg1;
- (void).cxx_destruct;
@end
