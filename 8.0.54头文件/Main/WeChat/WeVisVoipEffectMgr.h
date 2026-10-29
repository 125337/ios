@interface WeVisVoipEffectMgr : NSObject
{
    int _rotation; // +0x8
    unique_ptr<WeEffect::X3DEffect, std::default_delete<WeEffect::X3DEffect>> _spWeEffect; // +0x10
    unsigned int _trackFaceRotation; // +0x18
    BOOL _remoteIsNotPhone; // +0x1c
    BOOL _needMirror; // +0x1d
    BOOL _enableSTFilter; // +0x1e
    BOOL _enableSkipBeauty; // +0x1f
    BOOL _enableClarity; // +0x20
    int _clarityMode; // +0x24
    BOOL _useMultiTemporalFilter; // +0x28
    BOOL _enableRciEffect; // +0x29
    long long lutFilterId; // +0x30
    long long lutRosyLutId; // +0x38
    long long sharpenFilterId; // +0x40
    long long teethBrightId; // +0x48
    basic_string<char, std::char_traits<char>, std::allocator<char>> filterStrPath; // +0x50
    long long filterID; // +0x68
    WeVisPixelBuffer * sdkSrcPixelBuffer; // +0x70
    WeVisGLTexture * texSdkSrcRGBA; // +0x78
    WeVisGLTexture * texSdkDstRGBA; // +0x80
    WeVisGLTexture * texSrcY; // +0x88
    WeVisGLTexture * texSrcUV; // +0x90
    WeVisGLTexture * texSrcRGBA; // +0x98
    WeVisGLTexture * texDstY; // +0xa0
    WeVisGLTexture * texDstUV; // +0xa8
    WeVisGLFrameBuffer * fboSdkSrcRGBA; // +0xb0
    WeVisGLFrameBuffer * fboDstY; // +0xb8
    WeVisGLFrameBuffer * fboDstUV; // +0xc0
    WeVisGLFrameBuffer * fboSrcRGBA; // +0xc8
    int widthSrcY; // +0xd0
    int heightSrcY; // +0xd4
    int widthSrcUV; // +0xd8
    int heightSrcUV; // +0xdc
    int widthScaled; // +0xe0
    int heightScaled; // +0xe4
    int widthSdk; // +0xe8
    int heightSdk; // +0xec
    int widthDstY; // +0xf0
    int heightDstY; // +0xf4
    int widthDstUV; // +0xf8
    int heightDstUV; // +0xfc
    int requiredWidthDstY; // +0x100
    int requiredHeightDstY; // +0x104
    WeVisGLYUV2RGBA * yuv2rgba; // +0x108
    WeVisGLRGBA2YUVTwoPassFS * rgba2yuvTwoPass; // +0x110
    WeVisByPassFS * scalePass; // +0x118
    MMGPUSpatiotemporalDenosing * stDenosingFilter; // +0x120
    SpatiotemporalDenosingPreProcess * denosingPreProcess; // +0x128
    MMGPUClarityFilter * clarityFilter; // +0x130
    MMGPUClarityPreProcess * clarityPreProcess; // +0x138
    WeVisPixelBuffer * dstPixelBuffer; // +0x140
    vector<unsigned char, std::allocator<unsigned char>> sdkSrcRGBData; // +0x148
    __CVOpenGLESTextureCache * cvTextureCache; // +0x160
    BOOL enableTranspose; // +0x168
    BOOL usingBackCamera; // +0x169
    int oldRotation; // +0x16c
    int oldInputWidth; // +0x170
    int oldInputHeight; // +0x174
    int oldOutputWidth; // +0x178
    int oldOutputHeight; // +0x17c
    vector<unsigned char, std::allocator<unsigned char>> faceTrackInputRGB; // +0x180
    __CVPixelBufferPool * mOutPool; // +0x198
    long long sceneType; // +0x1a0
    float blurRate; // +0x1a8
    float eyePouchRate; // +0x1ac
    float smileFoldsRate; // +0x1b0
    float teethBrightRate; // +0x1b4
    float contourRate; // +0x1b8
    long long faceAutoSlimerId; // +0x1c0
    long long girlFaceAutoSlimerId; // +0x1c8
    long long boyFaceAutoSlimerId; // +0x1d0
    long long smallHeadId; // +0x1d8
    long long cheekboneId; // +0x1e0
    long long lowerJawboneId; // +0x1e8
    long long wingOfNoseId; // +0x1f0
    long long shortChinId; // +0x1f8
    long long longChinId; // +0x200
    long long lowHairLineId; // +0x208
    long long highHairLineId; // +0x210
    long long eyeBiggerV2Id; // +0x218
    long long zhaiLianId; // +0x220
    long long contourId; // +0x228
    __CVBuffer * texY; // +0x230
    __CVBuffer * texUV; // +0x238
    WeVisDataReport22049 dataReport22049; // +0x240
    NSArray * _modelKeyArray; // +0x288
    mutex mCacheMutex; // +0x290
    priority_queue<cacheElement, std::vector<cacheElement>, cacheCmp> mRenderTargetCache; // +0x2d0
    int mLastFrameId; // +0x2f0
    int mFrameCount; // +0x2f4
    int mLastWidth; // +0x2f8
    int mLastHeight; // +0x2fc
    unsigned int mLastRenderTarget; // +0x300
    BOOL isSTFilterBuildinPipeline; // +0x304
    BOOL isUseSpatilFilterForPipeline; // +0x305
    BOOL isSizeChanged; // +0x306
    unsigned long long _deviceType; // +0x308
    BOOL _isAllowFp16; // +0x310
    BOOL _isBackground; // +0x311
    BOOL _shouldUseIPadRotationWhenProcessingVideoSampleBuffer; // +0x312
    NSString * _dataUniqueID; // +0x318
    id <WeVisVoipEffectDelegate> _resultDelegate; // +0x320
    id /* block */ _dataReportCallback; // +0x328
    NSMutableArray * _face2DStickers; // +0x330
    NSMutableArray * _face3DStickers; // +0x338
    NSMutableArray * _eyeBrows; // +0x340
    NSMutableArray * _eyeShadows; // +0x348
    NSMutableArray * _lipSticker; // +0x350
    NSMutableArray * _faceContours; // +0x358
    NSMutableArray * _blusher; // +0x360
    NSMutableArray * _segments; // +0x368
    NSMutableArray * _frontStickers; // +0x370
    NSMutableArray * _effectMaterials; // +0x378
    NSMutableArray * _pendingOpBlocks; // +0x380
    EAGLContext * _glContext; // +0x388
    NSRecursiveLock * _lock; // +0x390
    long long _trackConfig; // +0x398
    long long _actionConfig; // +0x3a0
    WCLoopMetricsCollector * _liveCaptureMetricsCollector; // +0x3a8
}
- (void)setEffect:(id)arg1;
- (id)init;
- (id)initWithGlContext:(id)arg1 sceneType:(long long)arg2;
- (id)initWithGlContext:(id)arg1 sceneType:(long long)arg2 modelKeyArray:(id)arg3;
- (id)initWithGlContext:(id)arg1 sceneType:(long long)arg2 modelKeyArray:(id)arg3 runDeviceType:(unsigned long long)arg4 isAllowFp16:(BOOL)arg5 isClientRciEnabled:(BOOL)arg6;
- (id)initWithGlContext:(id)arg1 sceneType:(long long)arg2 modelKeyArray:(id)arg3 SDKMode:(int)arg4;
- (id)initWithGlContext:(id)arg1 sceneType:(long long)arg2 modelKeyArray:(id)arg3 SDKMode:(int)arg4 runDeviceType:(unsigned long long)arg5 isAllowFp16:(BOOL)arg6 isClientRciEnabled:(BOOL)arg7;
- (void)dealloc;
- (void)setDataUniqueID:(id)arg1;
- (void)enableTranspose:(BOOL)arg1;
- (void)setRotation:(int)arg1;
- (void)setUsingBackCamera:(BOOL)arg1;
- (void)setRemoteIsNotPhone:(BOOL)arg1;
- (void)setRotationForTrackFace:(int)arg1;
- (BOOL)needFaceTrack;
- (long long)faceConfig;
- (BOOL)enableFaceOccuSeg;
- (void)performPendingOpBlocks;
- (void)setDataReportCallback:(id /* block */)arg1;
- (void)loadingSettings;
- (void)flushDataReport:(id)arg1;
- (BOOL)needWeEffectInstance:(int)arg1 device:(unsigned long long)arg2;
- (float)limitValue:(float)arg1 ToMin:(float)arg2 ToMax:(float)arg3;
- (void)setBackgroundEffectRate:(float)arg1 segmentMode:(int)arg2;
- (void)setLutFilter:(float)arg1;
- (void)setRosy:(float)arg1;
- (unsigned int)getAppScenario;
- (void)setSkinSmooth:(float)arg1;
- (void)setSkinBright:(float)arg1;
- (void)setEyeBigger:(float)arg1;
- (void)setEyeBright:(float)arg1;
- (void)setFaceThin:(float)arg1;
- (void)setFaceAutoSlimer:(float)arg1;
- (void)setGirlFaceAutoSlimerTemplate;
- (void)setGirlFaceAutoSlimer:(float)arg1;
- (void)setBoyFaceAutoSlimerTemplate;
- (void)setBoyFaceAutoSlimer:(float)arg1;
- (void)setBrowEnhance:(float)arg1;
- (void)setRemoveEyePouch:(float)arg1 smileFolds:(float)arg2;
- (void)setSharpenFilter:(float)arg1;
- (void)setTeethBright:(float)arg1;
- (void)setSmallHeadTemplate;
- (void)setSmallHead:(float)arg1;
- (void)setCheekboneTemplate;
- (void)setCheekbone:(float)arg1;
- (void)setLowerJawboneTemplate;
- (void)setLowerJawbone:(float)arg1;
- (void)setWingOfNoseTemplate;
- (void)setWingOfNose:(float)arg1;
- (void)setShortChinTemplate;
- (void)setLongChinTemplate;
- (void)setShortLongChin:(float)arg1;
- (void)setLowHairLineTemplate;
- (void)setHighHairLineTemplate;
- (void)setLowHighHairLine:(float)arg1;
- (void)setMouthMorph:(float)arg1;
- (void)setEyeBiggerV2Template;
- (void)setEyeBiggerV2:(float)arg1;
- (void)setZhaiLianTemplate;
- (void)setZhaiLian:(float)arg1;
- (void)applyFilter:(id)arg1 alpha:(double)arg2;
- (void)applyFilterWithConfig:(id)arg1 alpha:(double)arg2;
- (void)SetNaturalFilter:(float)arg1;
- (void)apply2DSticker:(id)arg1;
- (void)applyEffectMaterial:(id)arg1;
- (void)removeEffectMaterial:(long long)arg1;
- (void)applyBackSticker:(id)arg1;
- (void)applyFrontSticker:(id)arg1;
- (void)applyEyeBrow:(id)arg1;
- (void)applyEyeShadow:(id)arg1;
- (void)applyLipStick:(id)arg1;
- (void)applyContours:(id)arg1;
- (void)applyBlusher:(id)arg1;
- (void)applyContour;
- (void)setContourRate:(float)arg1;
- (void)applyEffectMaterialsFolder:(id)arg1;
- (void)setMakeupGlobalAlpha:(float)arg1;
- (void)clearEffectMaterialsFolder;
- (void)updateActionsForAssetPath:(id)arg1;
- (void)updateActionConfig:(id)arg1;
- (void)requireVideoOutputWidth:(int)arg1 outputHeight:(int)arg2;
- (BOOL)updateOutCVPixelbufferFromPool;
- (void)updateVideoInputWidth:(int)arg1 inputHeight:(int)arg2 outputWidth:(int)arg3 outputHeight:(int)arg4;
- (void)genVideoInputSources:(int)arg1 inputHeight:(int)arg2 outputWidth:(int)arg3 outputHeight:(int)arg4;
- (void)genYUVSourceWithWidth:(int)arg1 Height:(int)arg2;
- (BOOL)callFaceTrackForPixelBuffer:(__CVBuffer *)arg1;
- (BOOL)getSrcTexYUVFromPixelBuffer:(__CVBuffer *)arg1;
- (id)processVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1 outputTexture:(int *)arg2 pixelBufferFlipX:(BOOL)arg3 shouldIgnoreBackground:(BOOL)arg4;
- (id)processVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1 outputTexture:(int *)arg2 shouldIgnoreBackground:(BOOL)arg3;
- (id)processVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1 shouldIgnoreBackground:(BOOL)arg2;
- (unsigned int)getIPadRotation;
- (id)processVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1 pixelBufferFlipX:(BOOL)arg2 shouldIgnoreBackground:(BOOL)arg3;
- (id)processVideoSampleBufferWithPipeLine:(opaqueCMSampleBuffer *)arg1 pixelBufferFlipX:(BOOL)arg2 shouldIgnoreBackground:(BOOL)arg3;
- (void)collectPerformanceData;
- (void)notifyEventsIfNeeded;
- (void)clean;
- (void)clearAllEffects;
- (void)clearStickers;
- (void)clearMakeUp;
- (void)clearFilters;
- (void)enableSTDenoiseFilter:(BOOL)arg1 useSpatioFilter:(BOOL)arg2 useMultiTemporalFilter:(BOOL)arg3;
- (void)enableClarityFilter:(BOOL)arg1 withMode:(int)arg2;
- (void)enableSkipBeauty:(BOOL)arg1;
- (void)waitForPipeLineEnd;
- (void)registerBackgroundNotification;
- (void)appWillResignActive:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)setSceneType:(long long)arg1;
- (id)dataUniqueID;
- (id)resultDelegate;
- (void)setResultDelegate:(id)arg1;
- (id /* block */)dataReportCallback;
- (BOOL)isBackground;
- (void)setIsBackground:(BOOL)arg1;
- (BOOL)shouldUseIPadRotationWhenProcessingVideoSampleBuffer;
- (void)setShouldUseIPadRotationWhenProcessingVideoSampleBuffer:(BOOL)arg1;
- (id)face2DStickers;
- (void)setFace2DStickers:(id)arg1;
- (id)face3DStickers;
- (void)setFace3DStickers:(id)arg1;
- (id)eyeBrows;
- (void)setEyeBrows:(id)arg1;
- (id)eyeShadows;
- (void)setEyeShadows:(id)arg1;
- (id)lipSticker;
- (void)setLipSticker:(id)arg1;
- (id)faceContours;
- (void)setFaceContours:(id)arg1;
- (id)blusher;
- (void)setBlusher:(id)arg1;
- (id)segments;
- (void)setSegments:(id)arg1;
- (id)frontStickers;
- (void)setFrontStickers:(id)arg1;
- (id)effectMaterials;
- (void)setEffectMaterials:(id)arg1;
- (id)pendingOpBlocks;
- (void)setPendingOpBlocks:(id)arg1;
- (id)glContext;
- (void)setGlContext:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (long long)trackConfig;
- (void)setTrackConfig:(long long)arg1;
- (long long)actionConfig;
- (void)setActionConfig:(long long)arg1;
- (id)liveCaptureMetricsCollector;
- (void)setLiveCaptureMetricsCollector:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

