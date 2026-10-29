@interface FaceRecogActionReflectHandler : FaceRecogFlashHandler <FaceRecogGuideViewDelegate, FaceRecogBaseViewDelegate, FaceRecogCheckBrightnessLogicDelegate>
{
    MMTimer * _reflectTimer; // +0x8
    long long _triggerTimes; // +0x10
    double _oldScreenBrightness; // +0x18
    FaceRecogReflectGuideView * _guideVc; // +0x20
    BOOL _isReflecting; // +0x28
    BOOL _shouldWaitForFaceDetect; // +0x29
    BOOL _isWaitingToReflect; // +0x2a
    BOOL _hasDetectFace; // +0x2b
    BOOL _shouldShowTipsAtRetry; // +0x2c
    FaceRecogCheckBrightnessLogic * _brightnessCheckLogic; // +0x30
    FaceRecogFlashView * _verifyView; // +0x38
    CameraReflectDevice * _lightDetector; // +0x40
    double _cameraStartTime; // +0x48
}
- (id)initWithScene:(unsigned int)arg1;
- (id)initWithWorkMode:(long long)arg1 scene:(unsigned int)arg2;
- (void)dealloc;
- (void)initView;
- (void)didAccessVideo;
- (void)onCameraStart;
- (void)showView;
- (void)presentFaceViewController;
- (void)onShowUITips:(id)arg1;
- (void)onFlashActionFinish;
- (void)onReflectColorChange:(unsigned int)arg1 light:(double)arg2;
- (void)onPipelineFinishWithSuccess:(BOOL)arg1;
- (void)requestStop;
- (void)requestRetry;
- (BOOL)onStartRequestConfig:(id)arg1;
- (void)onStartVerifyResult:(id)arg1;
- (void)onPipelineReset;
- (void)didDetectFace;
- (void)onReflectStart:(long long)arg1;
- (void)handlerDidFinishWithCode:(long long)arg1 msg:(id)arg2 verifyResult:(id)arg3 canRetry:(BOOL)arg4;
- (double)faceRectWidth;
- (void)onDidCheckBrightnessDoneWithIsOK:(BOOL)arg1 brightnessValue:(float)arg2;
- (void)onFaceRecogGuideFinished;
- (void)faceRecogDidRotate;
- (id)brightnessCheckLogic;
- (void)setBrightnessCheckLogic:(id)arg1;
- (id)verifyView;
- (void)setVerifyView:(id)arg1;
- (id)lightDetector;
- (void)setLightDetector:(id)arg1;
- (BOOL)isReflecting;
- (void)setIsReflecting:(BOOL)arg1;
- (double)cameraStartTime;
- (void)setCameraStartTime:(double)arg1;
- (BOOL)shouldWaitForFaceDetect;
- (void)setShouldWaitForFaceDetect:(BOOL)arg1;
- (BOOL)isWaitingToReflect;
- (void)setIsWaitingToReflect:(BOOL)arg1;
- (BOOL)hasDetectFace;
- (void)setHasDetectFace:(BOOL)arg1;
- (BOOL)shouldShowTipsAtRetry;
- (void)setShouldShowTipsAtRetry:(BOOL)arg1;
- (void).cxx_destruct;
@end

