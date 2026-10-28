@interface SilentLivenessState : BaseState
{
    struct trackInfo; // +0x8
    YTPOSE pose; // +0xe8
    CGRect detectRect; // +0xf8
    CGRect previewRect; // +0x118
    float eyeOpenThreshold; // +0x138
    BOOL needEyeOpenCheck; // +0x13c
    int pitchThreshold; // +0x140
    int yawThreshold; // +0x144
    int rollThreshold; // +0x148
    float bigThreshold; // +0x14c
    float smallThreshold; // +0x150
    float inRectThreshold; // +0x154
    float blurDetectThreshold; // +0x158
    float faceInRectRatio; // +0x15c
    int continueCloseEyeCount; // +0x160
    int continueBlurCount; // +0x164
    BOOL isManual; // +0x168
    BOOL triggerLiveBeginEventFlag; // +0x169
    BOOL tipFilterFlag; // +0x16a
    BOOL needBigFaceMode; // +0x16b
    int stableFrameCount; // +0x16c
    vector<float, std::allocator<float>> bestShape; // +0x170
    vector<float, std::allocator<float>> eyeShape; // +0x188
    vector<float, std::allocator<float>> mouthShape; // +0x1a0
    Mat bestMat; // +0x1b8
    float maxEyeScore; // +0x218
    float minEyeScore; // +0x21c
    float maxMouthScore; // +0x220
    float minMouthScore; // +0x224
    float maxInRectRatio; // +0x228
    double maxBlureScore; // +0x230
    float maxShelterScore; // +0x238
    float bigThresholdBuffer; // +0x23c
    float smallThresholdBuffer; // +0x240
    float poseThresholdBuffer; // +0x244
    int continueNoValidFaceCount; // +0x248
    int continueNoValidFaceCountThreshold; // +0x24c
    BOOL needForcePoseCheckFlag; // +0x250
    BOOL needShelterCheckFlag; // +0x251
    YtTimerCounter * timeCounter; // +0x258
    YtTimerCounter * predetectTimeCounter; // +0x260
    int currentTipAdvise; // +0x268
    int currentShelterResult; // +0x26c
    int previousShelterResult; // +0x270
    int continueShelterCount; // +0x274
    int frameNum; // +0x278
    BOOL needFaceDirectionDetect; // +0x27c
    BOOL _firstStableStatePass; // +0x27d
    int _continuousPassCount; // +0x280
    int _currentAdvise; // +0x284
    int _currentShelter; // +0x288
    int _sameUITipCount; // +0x28c
    YTLiveDetector * _liveDetector; // +0x290
    NSMutableString * _currentTips; // +0x298
    NSMutableArray * _currentFacePoints; // +0x2a0
}
+ (id)parseAdvise:(int)arg1;
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;
- (void)unload;
- (void)enter;
- (void)exit;
- (void)reset;
- (void)addFaceShapePoint:(vector<tiny_cv::Point_<float>, std::allocator<tiny_cv::Point_<float>>>)arg1 withFacePoints:(void *)arg2;
- (id)convertFaceFiveShape:(vector<float, std::allocator<float>>)arg1;
- (vector<float, std::allocator<float>>)covnertFaceShape:(void *)arg1;
- (void)checkBestImage:(Mat)arg1 withTrackInfo:(struct)arg2 withInRectRatio:(float)arg3 withBlurScore:(double)arg4 mouthScore:(float)arg5 eyeScore:(float)arg6;
- (int)stableShelter:(int)arg1;
- (void)update:(Mat)arg1 withTimeStamp:(unsigned long long)arg2;
- (void)updateSDKSetting:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)moveToNextState;
- (void)handleInnerAction:(id)arg1 data:(id)arg2;
- (int)faceLocationDetect:(CGRect)arg1 targetRect:(CGRect)arg2;
- (int)getFacePreviewAdvise:(CGRect)arg1 faceInPreview:(CGRect)arg2 pitch:(float)arg3 yaw:(float)arg4 roll:(float)arg5 imageWidth:(int)arg6 imageHeight:(int)arg7 faceRect:(CGRect)arg8 facePoints:(id)arg9;
- (float)preCheckCloseEye:(TC_FaceShape)arg1;
- (int)shelterJudge:(vector<float, std::allocator<float>>)arg1;
- (id)parseShelter:(int)arg1;
- (void)sendUIEventWithPose:(int)arg1 withBlock:(int)arg2;
- (void)sendUIEventWithValue:(id)arg1 withType:(id)arg2;
- (BOOL)checkActionStage;
- (id)liveDetector;
- (void)setLiveDetector:(id)arg1;
- (id)currentTips;
- (void)setCurrentTips:(id)arg1;
- (int)continuousPassCount;
- (void)setContinuousPassCount:(int)arg1;
- (int)currentAdvise;
- (void)setCurrentAdvise:(int)arg1;
- (int)currentShelter;
- (void)setCurrentShelter:(int)arg1;
- (id)currentFacePoints;
- (void)setCurrentFacePoints:(id)arg1;
- (int)sameUITipCount;
- (void)setSameUITipCount:(int)arg1;
- (BOOL)firstStableStatePass;
- (void)setFirstStableStatePass:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
