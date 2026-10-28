@interface FaceRecogPayActionReflectHandler : FaceRecogActionReflectHandler <FaceRecogPayConfigLogicDelegate, FaceRecogPayHandlerProtocol>
{
    BOOL _hasClickBizButton; // +0x8
    FaceRecogPayConfigLogic * _config; // +0x10
    NSData * _resultHash; // +0x18
    NSString * _otherVerifyTitle; // +0x20
    NSString * _faceVerifyTitle; // +0x28
    NSString * _face_verify_title_color; // +0x30
    NSString * _face_verify_title_font; // +0x38
    double _face_verify_title_size; // +0x40
    NSString * _face_action_tips_font; // +0x48
    double _face_action_tips_size; // +0x50
}
- (id)initWithScene:(unsigned int)arg1;
- (void)setDefaultFont;
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
- (void).cxx_destruct;
@end
