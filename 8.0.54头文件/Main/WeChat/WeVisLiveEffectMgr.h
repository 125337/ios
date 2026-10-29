@interface WeVisLiveEffectMgr : NSObject
{
    int rotation; // +0x8
    unique_ptr<WeEffect::X3DEffect, std::default_delete<WeEffect::X3DEffect>> spWeEffect; // +0x10
    unsigned int trackFaceRotation; // +0x18
    BOOL remoteIsNotPhone; // +0x1c
    BOOL _needMirror; // +0x1d
    BOOL enableSTFilter; // +0x1e
    BOOL enableSkipBeauty; // +0x1f
    BOOL enableClarity; // +0x20
    int _clarityMode; // +0x24
    BOOL _enableRciEffect; // +0x28
    float _cropTextureRatio; // +0x2c
    long long lutFilterId; // +0x30
    long long lutRosyLutId; // +0x38
    long long sharpenFilterId; // +0x40
    long long teethBrightId; // +0x48
    basic_string<char, std::char_traits<char>, std::allocator<char>> filterStrPath; // +0x50
    long long filterID; // +0x68
    BOOL initAutoSlimer; // +0x70
    WeVisPixelBuffer * sdkSrcPixelBuffer; // +0x78
    WeVisGLTexture * texSdkSrcRGBA; // +0x80
    WeVisGLTexture * texSdkDstRGBA; // +0x88
    WeVisGLTexture * texSrcY; // +0x90
    WeVisGLTexture * texSrcUV; // +0x98
    WeVisGLTexture * texSrcRGBA; // +0xa0
    WeVisGLTexture * texInputRGBA; // +0xa8
    WeVisGLTexture * texDstY; // +0xb0
    WeVisGLTexture * texDstUV; // +0xb8
    WeVisGLFrameBuffer * fboSdkSrcRGBA; // +0xc0
    WeVisGLFrameBuffer * fboDstY; // +0xc8
    WeVisGLFrameBuffer * fboDstUV; // +0xd0
    WeVisGLFrameBuffer * fboSrcRGBA; // +0xd8
    WeVisGLFrameBuffer * fboInputRGBA; // +0xe0
    int widthSrcY; // +0xe8
    int heightSrcY; // +0xec
    int widthSrcUV; // +0xf0
    int heightSrcUV; // +0xf4
    int widthScaled; // +0xf8
    int heightScaled; // +0xfc
    int widthSdk; // +0x100
    int heightSdk; // +0x104
    int widthDstY; // +0x108
    int heightDstY; // +0x10c
    int widthDstUV; // +0x110
    int heightDstUV; // +0x114
    int requiredWidthDstY; // +0x118
    int requiredHeightDstY; // +0x11c
    WeVisGLYUV2RGBA * yuv2rgba; // +0x120
    WeVisGLRGBA2YUVTwoPassFS * rgba2yuvTwoPass; // +0x128
    WeVisByPassFS * scalePass; // +0x130
    WeVisGLCompose2RGBA * compose2rgba; // +0x138
    MMGPUSpatiotemporalDenosing * stDenosingFilter; // +0x140
    SpatiotemporalDenosingPreProcess * denosingPreProcess; // +0x148
    MMGPUClarityFilter * clarityFilter; // +0x150
    MMGPUClarityPreProcess * clarityPreProcess; // +0x158
    WeVisPixelBuffer * dstPixelBuffer; // +0x160
    vector<unsigned char, std::allocator<unsigned char>> sdkSrcRGBData; // +0x168
    __CVOpenGLESTextureCache * cvTextureCache; // +0x180
    BOOL enableTranspose; // +0x188
    BOOL usingBackCamera; // +0x189
    int oldRotation; // +0x18c
    int oldInputWidth; // +0x190
    int oldInputHeight; // +0x194
    int oldOutputWidth; // +0x198
    int oldOutputHeight; // +0x19c
    vector<unsigned char, std::allocator<unsigned char>> faceTrackInputRGB; // +0x1a0
    __CVPixelBufferPool * mOutPool; // +0x1b8
    long long sceneType; // +0x1c0
    float blurRate; // +0x1c8
    float eyePouchRate; // +0x1cc
    float smileFoldsRate; // +0x1d0
    float teethBrightRate; // +0x1d4
    float contourRate; // +0x1d8
    long long faceAutoSlimerId; // +0x1e0
    long long girlFaceAutoSlimerId; // +0x1e8
    long long boyFaceAutoSlimerId; // +0x1f0
    long long smallHeadId; // +0x1f8
    long long cheekboneId; // +0x200
    long long lowerJawboneId; // +0x208
    long long wingOfNoseId; // +0x210
    long long shortChinId; // +0x218
    long long longChinId; // +0x220
    long long lowHairLineId; // +0x228
    long long highHairLineId; // +0x230
    long long eyeBiggerV2Id; // +0x238
    long long zhaiLianId; // +0x240
    long long contourId; // +0x248
    int enableHostDenoise; // +0x250
    BOOL enableHandEnergySavingMode; // +0x254
    __CVBuffer * texY; // +0x258
    __CVBuffer * texUV; // +0x260
    WeVisDataReport22049 dataReport22049; // +0x268
    NSArray * modelKeyArray; // +0x2b0
    mutex mCacheMutex; // +0x2b8
    priority_queue<cacheElement, std::vector<cacheElement>, cacheCmp> mRenderTargetCache; // +0x2f8
    int mLastFrameId; // +0x318
    int mFrameCount; // +0x31c
    int mLastWidth; // +0x320
    int mLastHeight; // +0x324
    unsigned int mLastRenderTarget; // +0x328
    BOOL isSTFilterBuildinPipeline; // +0x32c
    BOOL isUseSpatilFilterForPipeline; // +0x32d
    BOOL isSizeChanged; // +0x32e
    BOOL _isAllowFp16; // +0x32f
    Settings _settings; // +0x330
    NSString * beautyAssetsDirectory; // +0x470
    BOOL _luaRuntimeAvailable; // +0x478
    BOOL _handModelAvailable; // +0x479
    BOOL _isBackground; // +0x47a
    BOOL _enableCropTexture; // +0x47b
    BOOL _destroyed; // +0x47c
    unsigned int _faceTrackSkipFrameCnt; // +0x480
    id <WeVisLiveEffectDelegate> _resultDelegate; // +0x488
    WCLoopMetricsCollector * _liveCaptureMetricsCollector; // +0x490
    id /* block */ _dataReportCallback; // +0x498
    NSString * _dataUniqueID; // +0x4a0
    id <WeVisLiveEffectEnergyController> _energyController; // +0x4a8
    NSMutableArray * _face2DStickers; // +0x4b0
    NSMutableArray * _face3DStickers; // +0x4b8
    NSMutableArray * _eyeBrows; // +0x4c0
    NSMutableArray * _eyeShadows; // +0x4c8
    NSMutableArray * _lipSticker; // +0x4d0
    NSMutableArray * _faceContours; // +0x4d8
    NSMutableArray * _blusher; // +0x4e0
    NSMutableArray * _segments; // +0x4e8
    NSMutableArray * _frontStickers; // +0x4f0
    NSMutableArray * _makeupMaterials; // +0x4f8
    NSMutableArray * _giftMaterials; // +0x500
    NSMutableArray * _liveStickerMaterials; // +0x508
    NSMutableArray * _liveFaceDetectMaterials; // +0x510
    NSMutableArray * _liveFaceRectDetectMaterials; // +0x518
    NSMutableArray * _liveVisionEffectMaterials; // +0x520
    NSMutableArray * _pendingOpBlocks; // +0x528
    EAGLContext * _glContext; // +0x530
    NSRecursiveLock * _lock; // +0x538
    NSMutableDictionary * _handTrackingScriptPathToObjectIdDict; // +0x540
    NSMutableDictionary * _handTrackingScriptObjectIdToPathDict; // +0x548
    long long _trackConfig; // +0x550
    long long _actionConfig; // +0x558
    unsigned long long _frameCnt; // +0x560
}
+ (void)configGlobalContext:(void *)arg1 withModelKeyArr:(id)arg2;
- (id)initWithGlContext:(id)arg1 globalContext:(void *)arg2 sceneType:(long long)arg3 modelKeyArray:(id)arg4 SDKMode:(int)arg5 isAllowFp16:(BOOL)arg6 energyController:(id)arg7 beautyAssetsDirectory:(id)arg8;
- (id)initWithGlContext:(id)arg1 globalContext:(void *)arg2 sceneType:(long long)arg3 modelKeyArray:(id)arg4 SDKMode:(int)arg5 isAllowFp16:(BOOL)arg6 energyController:(id)arg7 beautyAssetsDirectory:(id)arg8 isClientRciEnabled:(BOOL)arg9;
- (void)enableFaceLandsDebugging;
- (void)dealloc;
- (void)destroy;
- (void)enableTranspose:(BOOL)arg1;
- (void)setRotation:(int)arg1;
- (void)setUsingBackCamera:(BOOL)arg1;
- (void)setRemoteIsNotPhone:(BOOL)arg1;
- (void)setRotationForTrackFace:(int)arg1;
- (BOOL)needFaceTrack;
- (long long)faceConfig;
- (BOOL)enableFaceOccuSeg;
- (void)performPendingOpBlocks;
- (void)drainPendingOpBlocksOnRelease;
- (void)updateFaceTrackSkipFrameCnt:(unsigned int)arg1;
- (unsigned int)currFaceTrackSkipFrameCnt;
- (void)loadingSettings;
- (void)loadingCgiSettings;
- (BOOL)needWeEffectInstance;
- (BOOL)needWeEffectInstance:(int)arg1;
- (BOOL)needWeEffectInstance:(int)arg1 globalContextPtr:(void *)arg2;
- (void)initializeModelAvailabilityFlagsWithModelPathMap:(void *)arg1;
- (float)limitValue:(float)arg1 ToMin:(float)arg2 ToMax:(float)arg3;
- (int)getMaxTextureImageUnit;
- (void)setBackgroundEffectRate:(float)arg1 segmentMode:(int)arg2;
- (unsigned int)getAppScenario;
- (void)setSkinSmooth:(float)arg1;
- (void)setSkinBright:(float)arg1;
- (void)setEyeBigger:(float)arg1;
- (void)setEyeBright:(float)arg1;
- (void)setFaceThin:(float)arg1;
- (void)initFaceAutoSlimer;
- (void)addFaceAutoSlimerNatureSlim;
- (void)setFaceAutoSlimer:(float)arg1;
- (void)setAnimationCallback:(id /* block */)arg1 obejctId:(long long)arg2;
- (void)setBrowEnhance:(float)arg1;
- (void)setRemoveEyePouch:(float)arg1;
- (void)setRemoveSmileFolds:(float)arg1;
- (void)setSharpenFilter:(float)arg1;
- (void)setTeethBright:(float)arg1;
- (void)setMouthMorph:(float)arg1;
- (void)setEyeBiggerV2Template;
- (void)setEyeBiggerV2:(float)arg1;
- (void)applyFilter:(id)arg1 alpha:(double)arg2;
- (void)applyFilterWithConfig:(id)arg1 alpha:(double)arg2;
- (void)apply2DSticker:(id)arg1;
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
- (void)setMakeupDetail:(long long)arg1 rate:(float)arg2;
- (void)setSkinSegSetting:(BOOL)arg1;
- (void)applyMakeupMaterialsFolder:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)applyLiveEffectMaterialFolder:(id)arg1 scene:(unsigned long long)arg2;
- (int)getSegmentTexture:(unsigned int *)arg1 maskWidth:(int *)arg2 maskHeight:(int *)arg3;
- (vector<WeEffect::Rect, std::allocator<WeEffect::Rect>>)GetFaceRect;
- (void)setMakeupFilterRate:(float)arg1;
- (void)removeMakeupFilter;
- (void)clearMakeupMaterials;
- (void)clearGiftMaterials;
- (void)clearStickerMaterials;
- (void)clearFaceDetectMaterials;
- (void)clearFaceRectDetectMaterials;
- (void)clearVisionEffectMaterials;
- (void)updateActionsForAssetPath:(id)arg1;
- (void)updateActionConfig:(id)arg1;
- (void)requireVideoOutputWidth:(int)arg1 outputHeight:(int)arg2;
- (CGSize)getRequiredVideoOutputSize;
- (void)updateOutCVPixelbufferFromPool;
- (void)updateVideoInputWidth:(int)arg1 inputHeight:(int)arg2 outputWidth:(int)arg3 outputHeight:(int)arg4;
- (void)updateSegmentSceneVideoInputWidth:(int)arg1 inputHeight:(int)arg2 outputWidth:(int)arg3 outputHeight:(int)arg4;
- (void)updateVideoOutputWidth:(int)arg1 outputHeight:(int)arg2;
- (void)genVideoInputSources:(int)arg1 inputHeight:(int)arg2 outputWidth:(int)arg3 outputHeight:(int)arg4;
- (void)setUniqueDataID:(id)arg1;
- (void)setDataReportCallback:(id /* block */)arg1;
- (void)genYUVSourceWithWidth:(int)arg1 Height:(int)arg2;
- (int)callFaceTrack;
- (BOOL)getSrcTexYUVFromPixelBuffer:(__CVBuffer *)arg1;
- (unsigned int)getIPadRotation;
- (id)processVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (id)processVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1 pixelBufferFlipX:(BOOL)arg2;
- (id)processVideoPixelBufferInSegmentScene:(__CVBuffer *)arg1 faceTrack:(BOOL)arg2;
- (id)processVideoPixelBuffer:(__CVBuffer *)arg1;
- (void)processRenderFrames:(id)arg1 outputSize:(CGSize)arg2 outputTexture:(int *)arg3;
- (void)processRenderFrames:(id)arg1 outputSize:(CGSize)arg2;
- (id)processRGBAInputTexture:(unsigned int)arg1 fromPixelBuffer:(__CVBuffer *)arg2;
- (id)processVideoSampleBufferWithPipeLine:(opaqueCMSampleBuffer *)arg1 pixelBufferFlipX:(BOOL)arg2;
- (void)clean;
- (void)clearAllEffects;
- (void)clearStickers;
- (void)clearMakeUp;
- (void)clearFilters;
- (void)enableSTDenoiseFilter:(BOOL)arg1 useSpatioFilter:(BOOL)arg2;
- (void)setHostDenoiseInfo:(int)arg1;
- (void)enableClarityFilter:(BOOL)arg1 withMode:(int)arg2;
- (void)enableSkipBeauty:(BOOL)arg1;
- (void)addLuaScriptAtPath:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)removeLuaScriptWithObjectId:(long long)arg1 completionBlock:(id /* block */)arg2;
- (void)setEnergySavingModeForHand:(BOOL)arg1;
- (void)waitForPipeLineEnd;
- (void)setDetectRegion:(CGRect)arg1 completionBlock:(id /* block */)arg2;
- (void)increaseFrameCnt;
- (void)registerBackgroundNotification;
- (void)appWillResignActive:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)notifyLuaScriptMessage:(id)arg1 fromSourceId:(int)arg2;
- (int)sendGenericJsonMessage:(id)arg1 toLuaScriptWithId:(int)arg2;
- (BOOL)addEffectMaterial:(id)arg1 materialObjectId:(long long *)arg2;
- (BOOL)removeEffectMaterialWithObjectId:(long long)arg1;
- (BOOL)setSlimmerParameter:(float)arg1 forObjectWithId:(long long)arg2;
- (BOOL)setLutFilterRate:(float)arg1 forObjectWithId:(long long)arg2;
- (BOOL)setMakeupAlpha:(float)arg1 forObjectWithId:(long long)arg2;
- (void)enqueueSerialOperation:(id /* block */)arg1;
- (void)setSceneType:(long long)arg1;
- (void)setNeedMirror:(unsigned char)arg1;
- (id)resultDelegate;
- (void)setResultDelegate:(id)arg1;
- (id)liveCaptureMetricsCollector;
- (void)setLiveCaptureMetricsCollector:(id)arg1;
- (id /* block */)dataReportCallback;
- (id)dataUniqueID;
- (void)setDataUniqueID:(id)arg1;
- (BOOL)luaRuntimeAvailable;
- (void)setLuaRuntimeAvailable:(BOOL)arg1;
- (BOOL)handModelAvailable;
- (void)setHandModelAvailable:(BOOL)arg1;
- (id)energyController;
- (void)setEnergyController:(id)arg1;
- (BOOL)isBackground;
- (void)setIsBackground:(BOOL)arg1;
- (BOOL)enableCropTexture;
- (void)setEnableCropTexture:(BOOL)arg1;
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
- (id)makeupMaterials;
- (void)setMakeupMaterials:(id)arg1;
- (id)giftMaterials;
- (void)setGiftMaterials:(id)arg1;
- (id)liveStickerMaterials;
- (void)setLiveStickerMaterials:(id)arg1;
- (id)liveFaceDetectMaterials;
- (void)setLiveFaceDetectMaterials:(id)arg1;
- (id)liveFaceRectDetectMaterials;
- (void)setLiveFaceRectDetectMaterials:(id)arg1;
- (id)liveVisionEffectMaterials;
- (void)setLiveVisionEffectMaterials:(id)arg1;
- (id)pendingOpBlocks;
- (void)setPendingOpBlocks:(id)arg1;
- (id)glContext;
- (void)setGlContext:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)handTrackingScriptPathToObjectIdDict;
- (void)setHandTrackingScriptPathToObjectIdDict:(id)arg1;
- (id)handTrackingScriptObjectIdToPathDict;
- (void)setHandTrackingScriptObjectIdToPathDict:(id)arg1;
- (long long)trackConfig;
- (void)setTrackConfig:(long long)arg1;
- (long long)actionConfig;
- (void)setActionConfig:(long long)arg1;
- (unsigned long long)frameCnt;
- (void)setFrameCnt:(unsigned long long)arg1;
- (unsigned int)faceTrackSkipFrameCnt;
- (void)setFaceTrackSkipFrameCnt:(unsigned int)arg1;
- (BOOL)destroyed;
- (void)setDestroyed:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

