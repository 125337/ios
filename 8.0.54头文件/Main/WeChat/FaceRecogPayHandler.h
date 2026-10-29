@interface FaceRecogPayHandler : NSObject <FaceRecogBaseHandlerDelegate, FaceRecogHandlerDelegate, PBMessageObserverDelegate, FaceRecogPayContractViewControllerDelegate, WCPayGetFaceCheckLiveTypeCgiDelegate, MMUseCaseCallback>
{
    BOOL _m_isKinda; // +0x8
    BOOL _enableContract; // +0x9
    BOOL _useHttp; // +0xa
    BOOL _needSignContract; // +0xb
    BOOL _cancelInFaceRecog; // +0xc
    BOOL _cancelInContract; // +0xd
    BOOL _hasClickFrontChangeVerifyWayButton; // +0xe
    unsigned int _scene; // +0x10
    unsigned int _check_live_type; // +0x14
    unsigned int _interrupt_ret; // +0x18
    unsigned int _uiFunCallFrom; // +0x1c
    MMUIViewController * _currentViewController; // +0x20
    id <FaceRecogPayHandlerDelegate> _delegate; // +0x28
    NSString * _package; // +0x30
    NSString * _package_sign; // +0x38
    NSString * _other_verify_title; // +0x40
    NSString * _other_verify_title_front; // +0x48
    NSString * _face_verify_title; // +0x50
    double _latitude; // +0x58
    double _longitude; // +0x60
    NSString * _interrupt_msg; // +0x68
    FaceRecogBaseHandler<FaceRecogPayHandlerProtocol> * _faceHandler; // +0x70
    FaceRecogPayContractViewController * _payContractViewController; // +0x78
    NSString * _faceSerialId; // +0x80
    WCPayGetFaceCheckLiveTypeCgi * _getFaceCheckLiveTypeCgi; // +0x88
    long long _faceRecogStartTime; // +0x90
}
- (id)init;
- (void)startFace:(unsigned int)arg1;
- (int)resultCode;
- (id)bioId;
- (id)resultToken;
- (id)serialId;
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
- (void)dismissFaceViewController:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)startFaceCheckFrontKinda;
- (void)call:(id)arg1;
- (void)closeFaceCheckUseCaseCross;
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
- (void).cxx_destruct;
@end

