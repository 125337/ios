@interface MMWeEffectManager : NSObject <WeVisLiveEffectDelegate, WeVisLiveEffectEnergyController>
{
    MMOpenGLContext * _context; // +0x8
    XImageContext * _rciContext; // +0x10
    BOOL _isWeVisEffectMgrCreated; // +0x18
    BOOL _allowCompressedForRenderingYUV; // +0x19
    BOOL _allowCompressedForSrc; // +0x1a
    BOOL _enableRci; // +0x1b
    BOOL _enableCropTexture; // +0x1c
    BOOL _needRecordProcessTime; // +0x1d
    BOOL _enableStatsMonitor; // +0x1e
    float _eyeBrightRate; // +0x20
    int _rotation; // +0x24
    int _maxTextureImageUnit; // +0x28
    WeVisLiveEffectMgr * _wevisEffectMgr; // +0x30
    WCLoopMetricsCollector * _captureMetricsCollector; // +0x38
    id <WeEffectManagerResultDelegate> _resultDelegate; // +0x40
    id <WeEffectEnergyController> _energyController; // +0x48
    id /* block */ _dataReportCallback; // +0x50
    double _lastProcessTime; // +0x58
    double _weVisMgrCreateTime; // +0x60
    long long _roleType; // +0x68
    CdnRenderContextWrapper * _shareCdnRenderContext; // +0x70
    VisEffectRenderContextWrapper * _shareVisRenderContext; // +0x78
    XImageContext * _renderRciContext; // +0x80
    unsigned long long _processFrameCount; // +0x88
    long long _processFps; // +0x90
    unsigned long long _processFpsStatCnt; // +0x98
    id /* block */ _processFpsReport; // +0xa0
}
+ (id /* block */)createReportTimer:(long long)arg1 block:(id /* block */)arg2;
- (void)initProcessStatsIfNeed;
- (void)updateProcessStats;
- (void)clearProcessStats;
- (id /* block */)createProcessFpsReporter;
- (void)increaseProcessFrameCnt;
- (void)increaseProcessFpsStatCnt;
- (void)logForProcessStatIfNeed;
- (void)updateProcessFps:(int)arg1;
- (id)initWithSceneType:(long long)arg1 roleType:(long long)arg2 energyController:(id)arg3 dataReportCallback:(id /* block */)arg4 isAllowFp16:(BOOL)arg5 enableRci:(BOOL)arg6 beautyAssetsDirectory:(id)arg7;
- (id)initWithSceneType:(long long)arg1 roleType:(long long)arg2 energyController:(id)arg3 dataReportCallback:(id /* block */)arg4 shareRenderContext:(id)arg5 globalContext:(void *)arg6 isAllowFp16:(BOOL)arg7 enableRci:(BOOL)arg8 modelKeyArray:(id)arg9 beautyAssetsDirectory:(id)arg10;
- (void)enableFaceLandsDebugging;
- (BOOL)isRCIEnableForRole:(long long)arg1;
- (void)initRenderContextWithShareContext:(id)arg1;
- (BOOL)isShareCdnRenderContextCanUsed:(id)arg1;
- (BOOL)isShareVisRenderContextCanUsed:(id)arg1;
- (void)setCaptureMetricsCollector:(id)arg1;
- (void)dealloc;
- (id)renderContext;
- (id)context;
- (id)openGLContext;
- (id)rciContext;
- (BOOL)luaRuntimeAvailable;
- (BOOL)handModelAvailable;
- (void)runAsyncOnWeEffectThread:(id /* block */)arg1;
- (void)runSyncOnWeEffectThread:(id /* block */)arg1;
- (double)getWeVisMgrCreateTime;
- (void)updateFaceTrackSkipFrameCnt:(unsigned int)arg1;
- (unsigned int)currFaceTrackSkipFrameCnt;
- (void)checkNeedSkipProcess:(BOOL *)arg1 skipFaceTrack:(BOOL *)arg2 forFpsLimitWithTriggerFps:(int)arg3 lastProcessedFrame:(id)arg4;
- (void)updateStatsMonitorEnabled:(BOOL)arg1;
- (int)getMaxTextureImageUnit;
- (void)onSceneProcessBegin:(long long)arg1;
- (void)onSceneProcessEnd:(long long)arg1;
- (void)onProcessCostTimeUpdate:(double)arg1 scene:(long long)arg2;
- (void)setAllowCompressedForRenderingYUV:(BOOL)arg1;
- (void)initWeVisEffectMgr:(long long)arg1 isAllowFp16:(BOOL)arg2 globalContext:(void *)arg3 modelKeyArray:(id)arg4 beautyAssetsDirectory:(id)arg5;
- (void)reloadSettings;
- (void)setSkinSegSetting:(BOOL)arg1;
- (void)setSkinBright:(float)arg1;
- (void)setSkinSmooth:(float)arg1;
- (void)applyFaceThin:(float)arg1;
- (void)applyEyeBiggerForFinderLive:(float)arg1;
- (void)applyEyeBigger:(float)arg1;
- (void)applyEyeBright:(float)arg1;
- (void)applySharpenFilter:(float)arg1;
- (void)applyTeethBright:(float)arg1;
- (void)applyRemoveEyePouch:(float)arg1;
- (void)applyRemoveSmileFolds:(float)arg1;
- (void)applyMouthMorph:(float)arg1;
- (void)applyEyeBiggerV2:(float)arg1;
- (void)applyFilter:(id)arg1 alpha:(double)arg2;
- (void)applyFilterWithConfig:(id)arg1 alpha:(double)arg2;
- (void)applyMakeupMaterialsFolder:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)clearMakeupMaterials;
- (void)setMakeupDetail:(long long)arg1 rate:(float)arg2;
- (void)setMakeupFilterRate:(float)arg1;
- (void)removeMakeupFilter;
- (void)applyLiveEffectMaterialFolder:(id)arg1 scene:(unsigned long long)arg2;
- (BOOL)getSegmentTexture:(unsigned int *)arg1 textureSize:(CGSize *)arg2;
- (void)apply2DSticker:(id)arg1;
- (void)removeEffectMaterial:(long long)arg1;
- (void)applyBackSticker:(id)arg1;
- (void)applyFrontSticker:(id)arg1;
- (void)applyEyeBrow:(id)arg1;
- (void)applyEyeShadow:(id)arg1;
- (void)applyLipStick:(id)arg1;
- (void)applyContours:(id)arg1;
- (void)applyBlusher:(id)arg1;
- (void)clearAll;
- (void)clearMakeUp;
- (void)clearStickers;
- (void)clearFilters;
- (void)clearFaceDetectMaterials;
- (void)clearFaceRectDetectMaterials;
- (void)setAnimationCallback:(id /* block */)arg1 objectId:(long long)arg2;
- (void)addLuaScriptAtPath:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)removeLuaScriptWithObjectId:(long long)arg1 completionBlock:(id /* block */)arg2;
- (void)sendJsonMessage:(id)arg1 toLuaScriptWithObjectId:(long long)arg2 completionBlock:(id /* block */)arg3;
- (void)setDetectRegion:(CGRect)arg1 completionBlock:(id /* block */)arg2;
- (BOOL)getFaceRect:(id)arg1;
- (void)setEnergySavingModeForHand:(BOOL)arg1;
- (void)setHostDenoiseInfo:(int)arg1;
- (void)setHostClarityInfo:(int)arg1;
- (void)startProcess;
- (void)stopProcess;
- (id)renderEffectImp:(id)arg1;
- (id)renderEffectRciImp:(id)arg1 flipX:(BOOL)arg2;
- (id)renderEffectGLImp:(id)arg1 flipX:(BOOL)arg2;
- (id)renderEffectInSegment:(id)arg1 processFaceTrack:(BOOL)arg2;
- (id)renderEffectGLImpInSegment:(id)arg1 processFaceTrack:(BOOL)arg2;
- (id)renderEffectGLImpForRemoteRole:(id)arg1 flipX:(BOOL)arg2;
- (id)renderEffectRciImpForRemoteRole:(id)arg1 flipX:(BOOL)arg2;
- (id)renderEffectImp:(id)arg1 pixelBufferFlipX:(BOOL)arg2;
- (id)renderEffect:(id)arg1;
- (id)renderEffect:(id)arg1 pixelBufferFlipX:(BOOL)arg2;
- (void)clean;
- (id)renderMultiEffects:(id)arg1 toOutputSize:(CGSize)arg2;
- (id)renderMultiEffects:(id)arg1 pixelBufferFlipX:(BOOL)arg2 toOutputSize:(CGSize)arg3;
- (id)renderEffectImpList:(id)arg1 pixelBufferFlipX:(BOOL)arg2 toOutputSize:(CGSize)arg3;
- (id)renderEffectRCIImpListForRemoteRole:(id)arg1 toOutputSize:(CGSize)arg2;
- (id)renderEffectGLImpListForRemoteRole:(id)arg1 toOutputSize:(CGSize)arg2;
- (void)setNeedMirror:(BOOL)arg1;
- (int)transferUIInterfaceRotationToWeVisRotation:(long long)arg1;
- (BOOL)enableRender;
- (void)requireVideoOutputWidth:(int)arg1 outputHeight:(int)arg2;
- (BOOL)isOutputSize:(CGSize)arg1 fitForInputSize:(CGSize)arg2;
- (void)updateLastProcessTime;
- (void)onResult:(int)arg1;
- (void)onResourceID:(long long)arg1;
- (void)onResourceIDVector:(id)arg1 scene:(unsigned long long)arg2;
- (void)onLuaScriptJsonMessageReceived:(id)arg1 fromSourceId:(int)arg2;
- (BOOL)checkNeedBeautyWithFaceTrackRet:(int)arg1;
- (void)liveEffectMgr:(id)arg1 configSettings:(void *)arg2;
- (void)liveEffectMgr:(id)arg1 adjustSettings:(void *)arg2;
- (void)liveEffectMgr:(id)arg1 deviceRunPreferByCPU:(BOOL *)arg2;
- (void)initLocalMixVideo;
- (void)renderFrames:(id)arg1 composeOutputSize:(CGSize)arg2 composeRes:(id)arg3 effectOutputSize:(CGSize)arg4 effectRes:(id)arg5 isBeginRenderEffect:(BOOL)arg6;
- (void)renderImpList:(id)arg1 composeOutputSize:(CGSize)arg2 composeRes:(id)arg3 effectOutputSize:(CGSize)arg4 effectRes:(id)arg5 isBeginRenderEffect:(BOOL)arg6;
- (void)renderGLImpListForRemoteRole:(id)arg1 composeOutputSize:(CGSize)arg2 composeRes:(id)arg3 effectOutputSize:(CGSize)arg4 effectRes:(id)arg5 isBeginRenderEffect:(BOOL)arg6;
- (id)wevisEffectMgr;
- (void)setWevisEffectMgr:(id)arg1;
- (float)eyeBrightRate;
- (void)setEyeBrightRate:(float)arg1;
- (id)captureMetricsCollector;
- (id)resultDelegate;
- (void)setResultDelegate:(id)arg1;
- (id)energyController;
- (id /* block */)dataReportCallback;
- (void)setDataReportCallback:(id /* block */)arg1;
- (BOOL)isWeVisEffectMgrCreated;
- (void)setIsWeVisEffectMgrCreated:(BOOL)arg1;
- (BOOL)allowCompressedForRenderingYUV;
- (BOOL)allowCompressedForSrc;
- (void)setAllowCompressedForSrc:(BOOL)arg1;
- (BOOL)enableRci;
- (void)setEnableRci:(BOOL)arg1;
- (BOOL)enableCropTexture;
- (void)setEnableCropTexture:(BOOL)arg1;
- (BOOL)needRecordProcessTime;
- (void)setNeedRecordProcessTime:(BOOL)arg1;
- (double)lastProcessTime;
- (void)setLastProcessTime:(double)arg1;
- (int)rotation;
- (void)setRotation:(int)arg1;
- (double)weVisMgrCreateTime;
- (void)setWeVisMgrCreateTime:(double)arg1;
- (long long)roleType;
- (void)setRoleType:(long long)arg1;
- (id)shareCdnRenderContext;
- (void)setShareCdnRenderContext:(id)arg1;
- (id)shareVisRenderContext;
- (void)setShareVisRenderContext:(id)arg1;
- (id)renderRciContext;
- (int)maxTextureImageUnit;
- (void)setMaxTextureImageUnit:(int)arg1;
- (BOOL)enableStatsMonitor;
- (void)setEnableStatsMonitor:(BOOL)arg1;
- (unsigned long long)processFrameCount;
- (void)setProcessFrameCount:(unsigned long long)arg1;
- (long long)processFps;
- (void)setProcessFps:(long long)arg1;
- (unsigned long long)processFpsStatCnt;
- (void)setProcessFpsStatCnt:(unsigned long long)arg1;
- (id /* block */)processFpsReport;
- (void)setProcessFpsReport:(id /* block */)arg1;
- (void).cxx_destruct;
@end
