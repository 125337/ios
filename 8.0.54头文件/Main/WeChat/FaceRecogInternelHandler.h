@interface FaceRecogInternelHandler : FaceRecogBaseHandler <FaceRecogBaseHandlerDelegate, FaceRecogHandlerDelegate, FaceRecogCheckBrightnessLogicDelegate>
{
    unsigned int _checkAliveType; // +0x8
    float _lightThreshold; // +0xc
    FaceRecogFlashHandler * _faceHandler; // +0x10
    NSString * _verifyInfo; // +0x18
    FaceRecogCheckBrightnessLogic * _brightnessCheckLogic; // +0x20
}
- (void)dealloc;
- (void)startFace;
- (void)startWithHasCheckBrightness:(BOOL)arg1;
- (void)subHandlerRequestAccessVideo;
- (void)didAccessVideo;
- (void)requestStop;
- (void)onDidCheckBrightnessDoneWithIsOK:(BOOL)arg1 brightnessValue:(float)arg2;
- (void)faceRecogHandlerDidFinish:(id)arg1;
- (void)faceRecogHandlerDidCancel:(id)arg1;
- (id)faceHandler;
- (void)setFaceHandler:(id)arg1;
- (unsigned int)checkAliveType;
- (void)setCheckAliveType:(unsigned int)arg1;
- (float)lightThreshold;
- (void)setLightThreshold:(float)arg1;
- (id)verifyInfo;
- (void)setVerifyInfo:(id)arg1;
- (id)brightnessCheckLogic;
- (void)setBrightnessCheckLogic:(id)arg1;
- (void).cxx_destruct;
@end

