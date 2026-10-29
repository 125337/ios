@interface FaceRecogPayActionReflectHandler : FaceRecogActionReflectHandler <FaceRecogPayConfigLogicDelegate, FaceRecogPayHandlerProtocol>
{
    BOOL _hasClickBizButton; // +0x8
    FaceRecogPayConfigLogic * _config; // +0x10
    NSData * _resultHash; // +0x18
    NSString * _otherVerifyTitle; // +0x20
    NSString * _faceVerifyTitle; // +0x28
}
- (id)initWithScene:(unsigned int)arg1;
- (void)initView;
- (void)presentFaceViewController;
- (void)showView;
- (void)onCameraStart;
- (BOOL)onStartRequestConfig:(id)arg1;
- (BOOL)supportDepthCamera;
- (void)onGetPayBioConfigOK:(id)arg1 succeedForBioId:(unsigned long long)arg2;
- (void)onGetPayBioConfig:(id)arg1 failedCauseOf:(int)arg2 errMsg:(id)arg3;
- (void)faceRecogDidClickBizBtn;
- (void)faceRecogDidRotate;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)resultHash;
- (void)setResultHash:(id)arg1;
- (id)otherVerifyTitle;
- (void)setOtherVerifyTitle:(id)arg1;
- (BOOL)hasClickBizButton;
- (void)setHasClickBizButton:(BOOL)arg1;
- (id)faceVerifyTitle;
- (void)setFaceVerifyTitle:(id)arg1;
- (void).cxx_destruct;
@end

