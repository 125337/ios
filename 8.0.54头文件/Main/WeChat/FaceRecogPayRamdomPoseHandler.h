@interface FaceRecogPayRamdomPoseHandler : FaceRecogFlashHandler <FaceRecogBaseViewDelegate, FaceRecogPayConfigLogicDelegate, FaceRecogPayHandlerProtocol>
{
    FaceRecogBaseView * _verifyView; // +0x8
    BOOL _hasClickBizButton; // +0x10
    int _poseMode; // +0x14
    FaceRecogPayConfigLogic * _config; // +0x18
    NSData * _resultHash; // +0x20
    NSString * _otherVerifyTitle; // +0x28
    NSString * _faceVerifyTitle; // +0x30
}
- (id)initWithScene:(unsigned int)arg1;
- (void)setFaceVerifyTitle:(id)arg1;
- (void)initView;
- (void)didAccessVideo;
- (void)showView;
- (BOOL)onStartRequestConfig:(id)arg1;
- (void)didAccessConfig;
- (void)onCameraStart;
- (void)didDetectFace;
- (void)onShowUITips:(id)arg1;
- (void)onStartVerifyResult:(id)arg1;
- (void)onGetPayBioConfigOK:(id)arg1 succeedForBioId:(unsigned long long)arg2;
- (void)onGetPayBioConfig:(id)arg1 failedCauseOf:(int)arg2 errMsg:(id)arg3;
- (void)faceRecogDidClickBizBtn;
- (void)faceRecogDidRotate;
- (void)encodeVideoAsync:(id)arg1 complete:(id /* block */)arg2;
- (long long)bizTitleMaxLen;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)resultHash;
- (void)setResultHash:(id)arg1;
- (id)otherVerifyTitle;
- (void)setOtherVerifyTitle:(id)arg1;
- (BOOL)hasClickBizButton;
- (void)setHasClickBizButton:(BOOL)arg1;
- (id)faceVerifyTitle;
- (int)poseMode;
- (void)setPoseMode:(int)arg1;
- (void).cxx_destruct;
@end

