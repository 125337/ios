@interface FaceRecogPayHandler : NSObject <FaceRecogBaseHandlerDelegate, FaceRecogHandlerDelegate, PBMessageObserverDelegate, FaceRecogPayContractViewControllerDelegate, WCPayGetFaceCheckLiveTypeCgiDelegate, FaceRecogPayLiteHandlerHost, MMUseCaseCallback>
{
    BOOL _m_isKinda; // +0x8
    BOOL _enableContract; // +0x9
    BOOL _useHttp; // +0xa
    BOOL _needSignContract; // +0xb
    BOOL _cancelInFaceRecog; // +0xc
    BOOL _cancelInContract; // +0xd
    BOOL _hasClickFrontChangeVerifyWayButton; // +0xe
    BOOL _shouldRecordExtraVideo; // +0xf
    BOOL _needWaitSerial; // +0x10
    BOOL _faceFlowRunning; // +0x11
    unsigned int _scene; // +0x14
    unsigned int _check_live_type; // +0x18
    unsigned int _interrupt_ret; // +0x1c
    unsigned int _vcamresult; // +0x20
    unsigned int _uiFunCallFrom; // +0x24
    MMUIViewController * _currentViewController; // +0x28
    id <FaceRecogPayHandlerDelegate> _delegate; // +0x30
    NSString * _package; // +0x38
    NSString * _package_sign; // +0x40
    NSString * _other_verify_title; // +0x48
    NSString * _other_verify_title_front; // +0x50
    NSString * _face_verify_title; // +0x58
    NSString * _face_verify_title_color; // +0x60
    NSString * _face_verify_title_font; // +0x68
    double _face_verify_title_size; // +0x70
    NSString * _face_action_tips_font; // +0x78
    double _face_action_tips_size; // +0x80
    double _latitude; // +0x88
    double _longitude; // +0x90
    NSString * _interrupt_msg; // +0x98
    CMMotionManager * _mMotionManager; // +0xa0
    FaceRecogBaseHandler<FaceRecogPayHandlerProtocol> * _faceHandler; // +0xa8
    FaceRecogPayContractViewController * _payContractViewController; // +0xb0
    NSString * _faceSerialId; // +0xb8
    WCPayGetFaceCheckLiveTypeCgi * _getFaceCheckLiveTypeCgi; // +0xc0
    long long _faceRecogStartTime; // +0xc8
    NSMutableArray * _gyroList; // +0xd0
    long long _extraVideoMaxSize; // +0xd8
    FaceRecogUploadLogic * _uploader; // +0xe0
    FaceRecogPayLiteHandler * _liteHandler; // +0xe8
}
- (id)init;
- (void)dealloc;
- (void)notifyDelegateDidFinish;
- (void)notifyDelegateDidCancel;
- (void)faceRecogPayLiteHandler:(id)arg1 didFinishWithResult:(unsigned long long)arg2;
- (void)startFace:(unsigned int)arg1;
- (void)startNativeFaceRecog;
- (int)resultCode;
- (id)bioId;
- (id)resultToken;
- (id)serialId;
- (void)startGyro;
- (void)stopGyro;
- (BOOL)endWithClickOtherVerifyBtn;
- (BOOL)endWithClickFrontOtherVerifyBtn;
- (BOOL)endWithRiskInterrupt;
- (void)resetFaceHandler;
- (void)startRealFaceRecog;
- (void)initFaceRecog;
- (void)startContractWithSigned:(BOOL)arg1 contactHint:(id)arg2 contractUrl:(id)arg3 contractTitle:(id)arg4 contractDesc:(id)arg5;
- (void)onStartFaceRecog;
- (void)onFaceRecogDidCancel;
- (void)onChangeVerifyWay;
- (void)checkContract;
- (void)onGetContractResp:(id)arg1;
- (void)checkAliveType;
- (void)onGetFaceCheckLiveTypeResp:(id)arg1;
- (int)checkLayer;
- (void)startGetFaceCheckLiveTypeUseHttp;
- (void)setFaceRecogInterruptForward:(int)arg1 msg:(id)arg2;
- (void)didUploadFaceData:(id)arg1;
- (void)didGetFaceFlashData:(id)arg1 inWorkMode:(long long)arg2;
- (void)didAccessLocation:(double)arg1 longitude:(double)arg2;
- (void)onGetFaceCheckResult:(id)arg1;
- (void)startGetFaceCheckResultUseHttp:(id)arg1 inWorkMode:(long long)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)faceRecogHandlerDidFinish:(id)arg1;
- (void)faceRecogHandlerDidCancel:(id)arg1;
- (void)faceRecogHandlerShouldUploadFaceFlashVideoForPay:(id)arg1 withFlag:(BOOL)arg2;
- (void)dismissFaceViewController:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)startFaceCheckFrontKinda;
- (void)call:(id)arg1;
- (void)closeFaceCheckUseCaseCross;
- (id)getSerialId;
- (id)getFaceVideoPathBioId;
- (void)handleFaceFlashVideoUploadWithSerialId:(id)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)package;
- (void)setPackage:(id)arg1;
- (id)package_sign;
- (void)setPackage_sign:(id)arg1;
- (id)other_verify_title;
- (void)setOther_verify_title:(id)arg1;
- (id)other_verify_title_front;
- (void)setOther_verify_title_front:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (BOOL)m_isKinda;
- (void)setM_isKinda:(BOOL)arg1;
- (BOOL)enableContract;
- (void)setEnableContract:(BOOL)arg1;
- (id)face_verify_title;
- (void)setFace_verify_title:(id)arg1;
- (id)face_verify_title_color;
- (void)setFace_verify_title_color:(id)arg1;
- (id)face_verify_title_font;
- (void)setFace_verify_title_font:(id)arg1;
- (double)face_verify_title_size;
- (void)setFace_verify_title_size:(double)arg1;
- (id)face_action_tips_font;
- (void)setFace_action_tips_font:(id)arg1;
- (double)face_action_tips_size;
- (void)setFace_action_tips_size:(double)arg1;
- (unsigned int)check_live_type;
- (void)setCheck_live_type:(unsigned int)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (unsigned int)interrupt_ret;
- (void)setInterrupt_ret:(unsigned int)arg1;
- (id)interrupt_msg;
- (void)setInterrupt_msg:(id)arg1;
- (BOOL)useHttp;
- (void)setUseHttp:(BOOL)arg1;
- (unsigned int)vcamresult;
- (void)setVcamresult:(unsigned int)arg1;
- (id)mMotionManager;
- (void)setMMotionManager:(id)arg1;
- (id)faceHandler;
- (void)setFaceHandler:(id)arg1;
- (id)payContractViewController;
- (void)setPayContractViewController:(id)arg1;
- (unsigned int)uiFunCallFrom;
- (void)setUiFunCallFrom:(unsigned int)arg1;
- (BOOL)needSignContract;
- (void)setNeedSignContract:(BOOL)arg1;
- (id)faceSerialId;
- (void)setFaceSerialId:(id)arg1;
- (BOOL)cancelInFaceRecog;
- (void)setCancelInFaceRecog:(BOOL)arg1;
- (BOOL)cancelInContract;
- (void)setCancelInContract:(BOOL)arg1;
- (id)getFaceCheckLiveTypeCgi;
- (void)setGetFaceCheckLiveTypeCgi:(id)arg1;
- (BOOL)hasClickFrontChangeVerifyWayButton;
- (void)setHasClickFrontChangeVerifyWayButton:(BOOL)arg1;
- (long long)faceRecogStartTime;
- (void)setFaceRecogStartTime:(long long)arg1;
- (id)gyroList;
- (void)setGyroList:(id)arg1;
- (BOOL)shouldRecordExtraVideo;
- (void)setShouldRecordExtraVideo:(BOOL)arg1;
- (long long)extraVideoMaxSize;
- (void)setExtraVideoMaxSize:(long long)arg1;
- (id)uploader;
- (void)setUploader:(id)arg1;
- (BOOL)needWaitSerial;
- (void)setNeedWaitSerial:(BOOL)arg1;
- (BOOL)faceFlowRunning;
- (void)setFaceFlowRunning:(BOOL)arg1;
- (id)liteHandler;
- (void)setLiteHandler:(id)arg1;
- (void).cxx_destruct;
@end
