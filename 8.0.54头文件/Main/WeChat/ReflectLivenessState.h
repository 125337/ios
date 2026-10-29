@interface ReflectLivenessState : BaseState <YTAGReflectDeviceDelegate>
{
    YTFullPack pack; // +0x8
    UIColor * originShapeColor; // +0xd8
    AVCaptureDevice * inputCamera; // +0xe0
    AVCaptureSession * captureSession; // +0xe8
    int poseType; // +0xf0
    BOOL needLocalConfig; // +0xf4
    int stableFrameCount; // +0xf8
    int originDetectInterval; // +0xfc
    int randomChangePointNum; // +0x100
    NSString * randomExtraConfig; // +0x108
    BOOL needRandomFlag; // +0x110
    BOOL needForcePoseCheckFlag; // +0x111
    YtTimerCounter * tipsTimeCounter; // +0x118
    NSString * controlConfig; // +0x120
    double originBrightness; // +0x128
    int actReflectMode; // +0x130
    int reflectImagesShortenStrategy; // +0x134
    int _continuousPassCount; // +0x138
    float _lux; // +0x13c
    YTFaceHandle * _faceHandle; // +0x140
    NSMutableArray * _currentFacePoints; // +0x148
    NSString * _mRgbConfig; // +0x150
    unsigned long long _curState; // +0x158
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

