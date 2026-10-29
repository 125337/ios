@interface ReflectLivenessState : BaseState <YTAGReflectDeviceDelegate>
{
    YTFullPack pack; // +0x8
    UIColor * originShapeColor; // +0xf0
    AVCaptureDevice * inputCamera; // +0xf8
    AVCaptureSession * captureSession; // +0x100
    int poseType; // +0x108
    BOOL needLocalConfig; // +0x10c
    int stableFrameCount; // +0x110
    int originDetectInterval; // +0x114
    int randomChangePointNum; // +0x118
    NSString * randomExtraConfig; // +0x120
    BOOL needRandomFlag; // +0x128
    BOOL needForcePoseCheckFlag; // +0x129
    YtTimerCounter * tipsTimeCounter; // +0x130
    NSString * controlConfig; // +0x138
    double originBrightness; // +0x140
    int actReflectMode; // +0x148
    int reflectImagesShortenStrategy; // +0x14c
    int reflectBigFrameCount; // +0x150
    int _continuousPassCount; // +0x154
    float _lux; // +0x158
    YTFaceHandle * _faceHandle; // +0x160
    NSMutableArray * _currentFacePoints; // +0x168
    NSString * _mRgbConfig; // +0x170
    unsigned long long _curState; // +0x178
}
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;
- (void)unload;
- (void)onPause;
- (void)enter;
- (void)reset;
- (void)update:(Mat)arg1 withTimeStamp:(unsigned long long)arg2;
- (void)sendUIEventWithValue:(id)arg1 withType:(id)arg2;
- (void)sendUIEventWithLight:(double)arg1 withColor:(unsigned int)arg2;
- (void)sendCameraEvent:(id)arg1;
- (void)stopCamera;
- (void)startRelfect;
- (void)changeToState:(unsigned long long)arg1;
- (void)resetParam;
- (void)resetCountDown;
- (void)setCameraSettings:(long long)arg1 iso:(int)arg2;
- (id)getCaptureDevice;
- (id)faceHandle;
- (void)setFaceHandle:(id)arg1;
- (int)continuousPassCount;
- (void)setContinuousPassCount:(int)arg1;
- (id)currentFacePoints;
- (void)setCurrentFacePoints:(id)arg1;
- (id)mRgbConfig;
- (void)setMRgbConfig:(id)arg1;
- (float)lux;
- (void)setLux:(float)arg1;
- (unsigned long long)curState;
- (void)setCurState:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
