@interface PbcFaceQualityState : BaseState
{
    float secondaryYawThreshold; // +0x8
    float secondaryPitchThreshold; // +0xc
    float secondaryRollThreshold; // +0x10
    float closeEyeLeftThreshold; // +0x14
    float closeEyeRightThreshold; // +0x18
    float closeMouthThreshold; // +0x1c
    float stableRoiThreshold; // +0x20
    int minPupillaryDistance; // +0x24
    int maxFaceRectMeanGrayValue; // +0x28
    int minFaceRectMeanGrayValue; // +0x2c
    BOOL needPbcFaceQuality; // +0x30
    int continuousQualityNumThreshold; // +0x34
    int faceRectPadding; // +0x38
    void * trackInfo_; // +0x40
    YTPOSE * facePose_; // +0x48
    int blockResult_; // +0x50
    CGRect faceRect_; // +0x58
    int continuousPassCount_; // +0x78
    BOOL firstUpdateFrame; // +0x7c
    Rect_<int> previousFaceRect; // +0x80
    int continuousCount; // +0x90
    int nextStateName; // +0x94
    FaceQualityResult * _faceQualityResult; // +0x98
}
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;
- (void)updateSDKSetting:(id)arg1;
- (void)reset;
- (void)enter;
- (void)update:(Mat)arg1 withTimeStamp:(unsigned long long)arg2;
- (BOOL)detectScreenShaking:(const void *)arg1;
- (BOOL)correctionFace:(float)arg1 andRoll:(float)arg2 andPitch:(float)arg3;
- (BOOL)isMouthCLose:(const void *)arg1;
- (BOOL)isEyeOpen:(const void *)arg1;
- (void)moveToNextState;
- (id)faceQualityResult;
- (void)setFaceQualityResult:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
