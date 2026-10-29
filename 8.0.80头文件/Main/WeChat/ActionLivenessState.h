@interface ActionLivenessState : BaseState
{
    shared_ptr<youtu::YTFaceCheckLivePose> faceCheckLivePose; // +0x8
    vector<float, std::allocator<float>> bestImgShape; // +0x18
    Mat eyeImg; // +0x30
    Mat mouthImg; // +0x90
    vector<float, std::allocator<float>> eyeShape; // +0xf0
    vector<float, std::allocator<float>> mouthShape; // +0x108
    vector<tiny_cv::Mat, std::allocator<tiny_cv::Mat>> currentFrameList; // +0x120
    Mat currentBestFrame; // +0x138
    YTVideoRecorder * videoRecorder; // +0x198
    NSString * videoPath; // +0x1a0
    NSString * extraTips; // +0x1a8
    BOOL currentActionDoneAndWaitRecordFlag; // +0x1b0
    BOOL needLocalConfig; // +0x1b1
    BOOL isRecordFinished; // +0x1b2
    int codecSettingBitRate; // +0x1b4
    int codecSettingiFrameInterval; // +0x1b8
    int stableFrameCount; // +0x1bc
    int innerWaitFrameCount; // +0x1c0
    BOOL isManual; // +0x1c4
    int poseType; // +0x1c8
    NSString * controlConfig; // +0x1d0
    int actReflectMode; // +0x1d8
    NSDictionary * innerConfig; // +0x1e0
    void * trackInfo; // +0x1e8
    NSString * anchorWidths; // +0x1f0
    float secondaryYawThreshold; // +0x1f8
    float secondaryPitchThreshold; // +0x1fc
    float secondaryRollThreshold; // +0x200
    float secondaryCloseMouthThreshold; // +0x204
    BOOL needActionBestImageRigorous; // +0x208
    float smallThreshold; // +0x20c
    float bigThreshold; // +0x210
    BOOL needPbcFaceQuality; // +0x214
    BOOL _needReflect; // +0x215
    BOOL _canTransitToReflect; // +0x216
    BOOL _ActionFinished; // +0x217
    int _actCurrent; // +0x218
    int _continuousPassCount; // +0x21c
    NSArray * _actArray; // +0x220
    unsigned long long _actIndex; // +0x228
    YTPOSE * _facePose; // +0x230
}
- (Mat)convertMat:(void *)arg1;
- (vector<tiny_cv::Mat, std::allocator<tiny_cv::Mat>>)convertMatList:(void *)arg1;
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;
- (void)unload;
- (void)enter;
- (void)reset;
- (void)update:(Mat)arg1 withTimeStamp:(unsigned long long)arg2;
- (int)handleActionFinished:(long long)arg1;
- (int)poseDetect:(vector<float, std::allocator<float>>)arg1 visVec:(vector<float, std::allocator<float>>)arg2 poseType:(int)arg3 matRgb:(Mat)arg4 pitch:(float)arg5 yaw:(float)arg6 roll:(float)arg7;
- (BOOL)changeToNextAction;
- (void)resetPoseDetect;
- (void)sendUIEvent;
- (void)sendStateEvent;
- (void)resetParam;
- (void)handleEvent:(id)arg1;
- (void)resetCountDown;
- (void)handleInnerAction:(id)arg1 data:(id)arg2;
- (id)checksumV2:(id)arg1;
- (id)depthDataChecksum:(id)arg1;
- (id)actArray;
- (void)setActArray:(id)arg1;
- (unsigned long long)actIndex;
- (void)setActIndex:(unsigned long long)arg1;
- (int)actCurrent;
- (void)setActCurrent:(int)arg1;
- (int)continuousPassCount;
- (void)setContinuousPassCount:(int)arg1;
- (BOOL)needReflect;
- (void)setNeedReflect:(BOOL)arg1;
- (BOOL)canTransitToReflect;
- (void)setCanTransitToReflect:(BOOL)arg1;
- (YTPOSE *)facePose;
- (void)setFacePose:(YTPOSE *)arg1;
- (BOOL)ActionFinished;
- (void)setActionFinished:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
