@interface XEffectEffectManager : NSObject <XEffectRenderTargetDelegate>
{
    unique_ptr<WeEffect::X3DEffect, std::default_delete<WeEffect::X3DEffect>> _p3DEffect; // +0x8
    WeVisDataReport22049 dataReport22049; // +0x10
    long long sharpenFilterId; // +0x58
    BOOL _alwaysCopyPixelBuffer; // +0x60
    BOOL _isFrontCamera; // +0x61
    BOOL _isFaceTrackAllow; // +0x62
    BOOL _hasSetupModels; // +0x63
    BOOL _useSegment; // +0x64
    BOOL _isBackground; // +0x65
    BOOL _isRecording; // +0x66
    BOOL _isRecordingRaw; // +0x67
    unsigned int _appScenario; // +0x68
    id <XEffectEffectManagerDelegate> _delegate; // +0x70
    long long _outputFormat; // +0x78
    long long _inputFormat; // +0x80
    long long _orientation; // +0x88
    id /* block */ _dataReportCallback; // +0x90
    NSMutableArray * _eyeBrows; // +0x98
    NSMutableArray * _eyeShadows; // +0xa0
    NSMutableArray * _lipSticker; // +0xa8
    NSMutableArray * _faceContours; // +0xb0
    NSMutableArray * _effectMaterialIds; // +0xb8
    NSMutableArray * _filters; // +0xc0
    NSMutableArray * _operations; // +0xc8
    NSMutableArray * _smallHeads; // +0xd0
    NSMutableArray * _cheekbones; // +0xd8
    NSMutableArray * _lowerJawbones; // +0xe0
    NSMutableArray * _wingOfNoses; // +0xe8
    NSMutableArray * _eyepouchSmilefolds; // +0xf0
    NSMutableArray * _sharpens; // +0xf8
    long long _faceThin2Id; // +0x100
    double _edgeWidth; // +0x108
    long long _trackConfig; // +0x110
    long long _actionConfig; // +0x118
    XEffectVideoRecorder * _videoWriter; // +0x120
    XEffectRenderTarget * _renderTarget; // +0x128
    double _animateInterval; // +0x130
    long long _animateUpdateCountdown; // +0x138
    NSRecursiveLock * _lock; // +0x140
    NSArray * _modelKeyArray; // +0x148
    struct _currentFrameTime; // +0x150
    CGRect _captureFrame; // +0x168
    CGRect _preferredRect; // +0x188
}
- (id)init;
- (void)loadingSettings;
- (void)dealloc;
- (id)previewLayer;
- (void)setModelMap:(id)arg1;
- (void)setCurrentViewSize:(CGSize)arg1;
- (void)setPreferredVideoSize:(CGSize)arg1;
- (void)setPreferredVideoOffset:(CGPoint)arg1;
- (void)shouldUpdateLayer:(BOOL)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setVideoFrameRate:(long long)arg1 animationFrameRate:(long long)arg2;
- (void)receiveVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (void)receiveVideoPixelBuffer:(__CVBuffer *)arg1 time:(struct)arg2;
- (id)processWithSampleImage:(id)arg1;
- (id)processWithSampleImageAfterPerformCachedOperations:(id)arg1;
- (id)snapshotWithFrame:(CGRect)arg1 format:(long long)arg2;
- (void)registerBackgroundNotification;
- (void)appWillResignActive:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)renderFrameDidFinish:(id)arg1;
- (void)performCachedOperations;
- (void)applyMultiSampling:(unsigned long long)arg1;
- (void)apply2DSticker:(id)arg1;
- (void)applyEffectMaterial:(id)arg1;
- (void)applyEyeBrow:(id)arg1;
- (void)applyEyeShadow:(id)arg1;
- (void)applyLipStick:(id)arg1;
- (void)applySkinSmooth:(double)arg1;
- (void)applyEyeBright:(double)arg1;
- (void)applyEyeBigger:(double)arg1;
- (void)applySkinBright:(double)arg1;
- (void)applyFaceThin:(double)arg1;
- (void)applyFaceRosy:(double)arg1;
- (void)applyNaturalFilter:(double)arg1;
- (void)applyBackSticker:(id)arg1;
- (void)applyFrontSticker:(id)arg1;
- (void)enableBgSemgent:(BOOL)arg1;
- (void)setEdgeWidth:(double)arg1;
- (void)applyContours:(id)arg1;
- (void)applyFilter:(id)arg1 alpha:(double)arg2;
- (void)applyDefaultFilter:(double)arg1;
- (void)applySharpenFilter:(float)arg1;
- (void)applyTeethBright:(float)arg1;
- (void)applyRemoveEyePouch:(float)arg1 smileFolds:(float)arg2;
- (void)applySmallHead:(float)arg1;
- (void)applyCheekbone:(float)arg1;
- (void)applyLowerJawbone:(float)arg1;
- (void)applyWingOfNose:(float)arg1;
- (void)clearAll;
- (void)clearStickers;
- (void)clearMakeUp;
- (void)clearFilters;
- (void)resetAllAnimation;
- (void)resetLite;
- (void)updateActionsForAssetPath:(id)arg1;
- (void)updateActionConfig:(id)arg1;
- (void)processPixelBufferAfterPerformCachedOperations:(__CVBuffer *)arg1;
- (void)processPixelBuffer:(__CVBuffer *)arg1;
- (void)processRawBuffer:(__CVBuffer *)arg1 rawPixelTexture:(unsigned int)arg2;
- (BOOL)ensureX3DEffectInstance;
- (long long)faceConfig;
- (void)startRecordWithVideoSize:(CGSize)arg1 captureFrame:(CGRect)arg2 filePath:(id)arg3 recordRawPixel:(BOOL)arg4;
- (void)prepareRecorderWithSize:(CGSize)arg1 filePath:(id)arg2;
- (void)finishRecordVideo:(id /* block */)arg1;
- (void)cancelRecordVideo;
- (void)begin;
- (void)end;
- (void)setSceneType:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)outputFormat;
- (void)setOutputFormat:(long long)arg1;
- (long long)inputFormat;
- (void)setInputFormat:(long long)arg1;
- (BOOL)alwaysCopyPixelBuffer;
- (void)setAlwaysCopyPixelBuffer:(BOOL)arg1;
- (BOOL)isFrontCamera;
- (void)setIsFrontCamera:(BOOL)arg1;
- (long long)orientation;
- (BOOL)isFaceTrackAllow;
- (void)setIsFaceTrackAllow:(BOOL)arg1;
- (id /* block */)dataReportCallback;
- (void)setDataReportCallback:(id /* block */)arg1;
- (id)eyeBrows;
- (void)setEyeBrows:(id)arg1;
- (id)eyeShadows;
- (void)setEyeShadows:(id)arg1;
- (id)lipSticker;
- (void)setLipSticker:(id)arg1;
- (id)faceContours;
- (void)setFaceContours:(id)arg1;
- (id)effectMaterialIds;
- (void)setEffectMaterialIds:(id)arg1;
- (id)filters;
- (void)setFilters:(id)arg1;
- (id)operations;
- (void)setOperations:(id)arg1;
- (id)smallHeads;
- (void)setSmallHeads:(id)arg1;
- (id)cheekbones;
- (void)setCheekbones:(id)arg1;
- (id)lowerJawbones;
- (void)setLowerJawbones:(id)arg1;
- (id)wingOfNoses;
- (void)setWingOfNoses:(id)arg1;
- (id)eyepouchSmilefolds;
- (void)setEyepouchSmilefolds:(id)arg1;
- (id)sharpens;
- (void)setSharpens:(id)arg1;
- (long long)faceThin2Id;
- (void)setFaceThin2Id:(long long)arg1;
- (BOOL)hasSetupModels;
- (void)setHasSetupModels:(BOOL)arg1;
- (BOOL)useSegment;
- (void)setUseSegment:(BOOL)arg1;
- (double)edgeWidth;
- (long long)trackConfig;
- (void)setTrackConfig:(long long)arg1;
- (long long)actionConfig;
- (void)setActionConfig:(long long)arg1;
- (BOOL)isBackground;
- (void)setIsBackground:(BOOL)arg1;
- (id)videoWriter;
- (void)setVideoWriter:(id)arg1;
- (BOOL)isRecording;
- (void)setIsRecording:(BOOL)arg1;
- (BOOL)isRecordingRaw;
- (void)setIsRecordingRaw:(BOOL)arg1;
- (CGRect)captureFrame;
- (void)setCaptureFrame:(CGRect)arg1;
- (struct)currentFrameTime;
- (void)setCurrentFrameTime:(struct)arg1;
- (id)renderTarget;
- (void)setRenderTarget:(id)arg1;
- (CGRect)preferredRect;
- (void)setPreferredRect:(CGRect)arg1;
- (double)animateInterval;
- (void)setAnimateInterval:(double)arg1;
- (long long)animateUpdateCountdown;
- (void)setAnimateUpdateCountdown:(long long)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)modelKeyArray;
- (void)setModelKeyArray:(id)arg1;
- (unsigned int)appScenario;
- (void)setAppScenario:(unsigned int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

