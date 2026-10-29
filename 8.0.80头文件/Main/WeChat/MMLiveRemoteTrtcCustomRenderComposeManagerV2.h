@interface MMLiveRemoteTrtcCustomRenderComposeManagerV2 : NSObject <WeEffectEnergyController, WeEffectManagerResultDelegate>
{
    BOOL _isCustomRenderStart; // +0x8
    BOOL _isFirstFrameRendered; // +0x9
    BOOL _enableRCI; // +0xa
    BOOL _isAllowFp16; // +0xb
    BOOL _isWeVisMgrCreated; // +0xc
    BOOL _isStopCustomRender; // +0xd
    BOOL _isRenderPrepareWaitOverTime; // +0xe
    BOOL _isLiveCaptureRunning; // +0xf
    BOOL _isAppResignActive; // +0x10
    unsigned int _cameraFrameRate; // +0x14
    unsigned int _effectFrameRate; // +0x18
    unsigned int _effectAccumulator; // +0x1c
    int _autoInvokeRemainFrame; // +0x20
    unsigned int _requestBackgroundImageCount; // +0x24
    MMWeEffectManager * _weeffectManager; // +0x28
    double _preferScaleRatio; // +0x30
    id /* block */ _startCallback; // +0x38
    id /* block */ _firstFrameRenderedCallback; // +0x40
    id /* block */ _trtcUserFirstFrameRenderedCallback; // +0x48
    id /* block */ _willStopCallback; // +0x50
    id /* block */ _stopCallback; // +0x58
    id /* block */ _weeffectMsgReceiveCallback; // +0x60
    id /* block */ _trtcUserRenderStopCallback; // +0x68
    id /* block */ _trtcUserRenderReqRenderSizeCallback; // +0x70
    id /* block */ _destroyCallback; // +0x78
    id /* block */ _requestDisplayImagesCallback; // +0x80
    id /* block */ _requestUserListCallback; // +0x88
    id /* block */ _checkIsCurrTopPerfLevelCallback; // +0x90
    id /* block */ _increasePerfLevelCallback; // +0x98
    id /* block */ _decreasePerfLevelCallback; // +0xa0
    id /* block */ _checkTimeRangeIsFullLoadCallback; // +0xa8
    unsigned long long _invokeMode; // +0xb0
    MMLiveTaskId * _liveTaskId; // +0xb8
    UIView * _videoRenderView; // +0xc0
    long long _weffectScene; // +0xc8
    NSMutableSet * _remoteTrtcCustomRenderSceneSet; // +0xd0
    NSMutableDictionary * _remoteTrtcCustomRenderContextDict; // +0xd8
    double _localMixVideoVideoWidth; // +0xe0
    CADisplayLink * _autoInvokeDisplayLink; // +0xe8
    unsigned long long _renderFrameCnt; // +0xf0
    CIContext * _tranferContext; // +0xf8
    CIContext * _ciContext; // +0x100
    __CVPixelBufferPool * _pixelBufferPool; // +0x108
    NSLock * _contextLock; // +0x110
    NSLock * _pixelBufferLock; // +0x118
    MMWeEffectFrame * _curMixBackgroundEffectFrame; // +0x120
    unsigned long long _curMixBackgroundType; // +0x128
    unsigned long long _nextMixBackgroundType; // +0x130
    MMLivePixelBuffer * _blackStreamPixelBuffer; // +0x138
    MMLiveRemoteTrtcCustomRenderComposeV2MetricsMonitor * _metricsMonitor; // +0x140
    WCLoopMetricsCollector * _metricsCollector; // +0x148
    NSMutableArray * _composeEndCallbacks; // +0x150
    NSLock * _composeEndCallbacksLock; // +0x158
    CGSize _pixelBufferPoolSize; // +0x160
}
- (id)initWithTaskId:(id)arg1 initParam:(id)arg2;
- (void)dealloc;
- (void)initDefaultData;
- (void)addComposeEndCallback:(id /* block */)arg1;
- (void)removeComposeEndCallback:(id /* block */)arg1;
- (unsigned long long)updateTrtcCustomRenderUserList:(id)arg1;
- (unsigned long long)addTrtcUserListToCustomRender:(id)arg1;
- (BOOL)addTrtcUserToCustomRender:(id)arg1;
- (void)removeCustomRenderTrtcUser:(id)arg1;
- (void)removeAllCustomRenderTrtcUsers;
- (BOOL)isTrtcUserCustomRender:(id)arg1;
- (BOOL)isTrtcUserCustomRenderWithUsrName:(id)arg1;
- (unsigned long long)getCustomRenderSrcFormatForTrtcUser:(id)arg1;
- (BOOL)hasTrtcCustomRenderUser;
- (BOOL)isTrtcUserFirstFrameRendered:(id)arg1;
- (BOOL)isTrtcUserFirstFrameFromCapture:(id)arg1;
- (BOOL)hasTrtcUserFirstFrameFromCapture;
- (id)getCustomRenderTrtcUser:(id)arg1;
- (id)getTrtcCustomRenderUserIdList;
- (id)getTrtcCustomRenderContextList;
- (void)startCustomRenderWithScene:(unsigned long long)arg1;
- (void)stopCustomRenderWithScene:(unsigned long long)arg1;
- (void)invokeRender;
- (void)onRefreshPixelBuffer:(__CVBuffer *)arg1 userId:(id)arg2;
- (void)onLiveCaptureChanged:(BOOL)arg1;
- (void)updateoLcalMixVideoVideoSize:(double)arg1;
- (void)updateCameraFrameRate:(unsigned int)arg1;
- (void)updateMixBackgroundWithType:(unsigned long long)arg1;
- (void)startAutoInvokeRender;
- (void)stopAutoInvokeRender;
- (void)startAutoInvokeDisplayLink;
- (void)stopAutoInvokeDisplayLink;
- (void)autoInvokeWithDisplayLink:(id)arg1;
- (void)updateInvokeMode;
- (void)initWeEffectData;
- (void)createWeEffectMananger;
- (void)createVideoRenderView;
- (void)startCustomRender;
- (BOOL)stopCustomRenderWithDelay:(BOOL)arg1;
- (void)onCustomRenderStopFinished;
- (void)cancelCustomRenderStop;
- (void)clearData;
- (void)tagFrameRendered:(id)arg1;
- (void)notifyFirstFrameRendered;
- (void)notifyTrtcUsersFirstFrameRendered:(id)arg1;
- (void)notifyTrtcUsersRenderStop:(id)arg1;
- (BOOL)checkAllRenderContextPrepareCompleteIfNeed;
- (void)checkRenderPrepareCompleteWaitOverTime;
- (void)createPixelBufferFromDisplaySurfaceForUnValidRenderContext;
- (void)requestDisplayImagesForUserIdList:(id)arg1 completion:(id /* block */)arg2;
- (id)createRenderContextForUser:(id)arg1;
- (id)getCurrRenderWeeffectFrames;
- (BOOL)addRenderContext:(id)arg1 renderFrameList:(id)arg2;
- (id)getCurrRenderWeeffectFramesWithSort;
- (BOOL)isCurrentInvokeModeSupportRenderContext:(id)arg1;
- (void)onWeeffectFramesProcessCompleted:(id)arg1;
- (BOOL)shouldRenderEffect;
- (double)getScaleRatio;
- (void)_render;
- (void)renderFrame:(id)arg1 contextList:(id)arg2;
- (void)increaseRenderFrame;
- (id)transferImageToPixelbuffer:(id)arg1;
- (void)createTransferContextIfNeed;
- (id)getCustomComposeRenderContextWrapper;
- (CGSize)getLocalMixOutputSize;
- (CGSize)getEffectOutputSize;
- (CGSize)updateRenderList:(id)arg1 composeOutputSize:(CGSize)arg2;
- (void)effectMgr:(id)arg1 configSettings:(void *)arg2;
- (void)effectMgr:(id)arg1 adjustSettings:(void *)arg2;
- (void)effectMgr:(id)arg1 deviceRunPreferByCPU:(BOOL *)arg2;
- (void)onWeEffectLuaScriptJsonMessageReceived:(id)arg1 fromSourceId:(int)arg2;
- (void)onResult:(int)arg1;
- (void)onResourceID:(long long)arg1;
- (void)onResourceIDVector:(id)arg1 scene:(unsigned long long)arg2;
- (void)onWeVisEffectMgrCreateCompleted;
- (void)registerNotification;
- (void)unregisterNotification;
- (void)onAppResignActive:(id)arg1;
- (void)onAppBecomeActive:(id)arg1;
- (id)createCIContext;
- (void)updatePixelBufferPoolWithOutputSize:(CGSize)arg1;
- (void)clearPixelBufferPool;
- (id)coreImageComposeVedio:(id)arg1 outputSize:(CGSize)arg2;
- (id)cropForImage:(id)arg1 targetSize:(CGSize)arg2;
- (void)updateBackgroundImageIfNeed;
- (void)initMixBackgroundEffectFrame;
- (void)destroyMixBackgroundEffectFrame;
- (void)createBlackStream;
- (void)refreshSelfPixelBufferWithBlackStream;
- (void)initMetricsReportData;
- (void)onRenderBegin;
- (void)onRenderEnd;
- (BOOL)isBeginRenderEffect;
- (BOOL)isBeginRenderLocalMixVideo;
- (BOOL)isBeginRenderGiftAttack;
- (id)finderLiveTask;
- (id)renderView;
- (BOOL)hasCustomRenderStarted;
- (unsigned long long)prepareWaitMaxFrames;
- (double)getWeVisMgrCreateTime;
- (id)weeffectManager;
- (void)setWeeffectManager:(id)arg1;
- (BOOL)isCustomRenderStart;
- (void)setIsCustomRenderStart:(BOOL)arg1;
- (BOOL)isFirstFrameRendered;
- (void)setIsFirstFrameRendered:(BOOL)arg1;
- (double)preferScaleRatio;
- (void)setPreferScaleRatio:(double)arg1;
- (id /* block */)startCallback;
- (void)setStartCallback:(id /* block */)arg1;
- (id /* block */)firstFrameRenderedCallback;
- (void)setFirstFrameRenderedCallback:(id /* block */)arg1;
- (id /* block */)trtcUserFirstFrameRenderedCallback;
- (void)setTrtcUserFirstFrameRenderedCallback:(id /* block */)arg1;
- (id /* block */)willStopCallback;
- (void)setWillStopCallback:(id /* block */)arg1;
- (id /* block */)stopCallback;
- (void)setStopCallback:(id /* block */)arg1;
- (id /* block */)weeffectMsgReceiveCallback;
- (void)setWeeffectMsgReceiveCallback:(id /* block */)arg1;
- (id /* block */)trtcUserRenderStopCallback;
- (void)setTrtcUserRenderStopCallback:(id /* block */)arg1;
- (id /* block */)trtcUserRenderReqRenderSizeCallback;
- (void)setTrtcUserRenderReqRenderSizeCallback:(id /* block */)arg1;
- (id /* block */)destroyCallback;
- (void)setDestroyCallback:(id /* block */)arg1;
- (id /* block */)requestDisplayImagesCallback;
- (void)setRequestDisplayImagesCallback:(id /* block */)arg1;
- (id /* block */)requestUserListCallback;
- (void)setRequestUserListCallback:(id /* block */)arg1;
- (id /* block */)checkIsCurrTopPerfLevelCallback;
- (void)setCheckIsCurrTopPerfLevelCallback:(id /* block */)arg1;
- (id /* block */)increasePerfLevelCallback;
- (void)setIncreasePerfLevelCallback:(id /* block */)arg1;
- (id /* block */)decreasePerfLevelCallback;
- (void)setDecreasePerfLevelCallback:(id /* block */)arg1;
- (id /* block */)checkTimeRangeIsFullLoadCallback;
- (void)setCheckTimeRangeIsFullLoadCallback:(id /* block */)arg1;
- (unsigned long long)invokeMode;
- (void)setInvokeMode:(unsigned long long)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (BOOL)enableRCI;
- (void)setEnableRCI:(BOOL)arg1;
- (id)videoRenderView;
- (void)setVideoRenderView:(id)arg1;
- (BOOL)isAllowFp16;
- (void)setIsAllowFp16:(BOOL)arg1;
- (long long)weffectScene;
- (void)setWeffectScene:(long long)arg1;
- (BOOL)isWeVisMgrCreated;
- (void)setIsWeVisMgrCreated:(BOOL)arg1;
- (BOOL)isStopCustomRender;
- (void)setIsStopCustomRender:(BOOL)arg1;
- (id)remoteTrtcCustomRenderSceneSet;
- (void)setRemoteTrtcCustomRenderSceneSet:(id)arg1;
- (id)remoteTrtcCustomRenderContextDict;
- (void)setRemoteTrtcCustomRenderContextDict:(id)arg1;
- (unsigned int)cameraFrameRate;
- (void)setCameraFrameRate:(unsigned int)arg1;
- (unsigned int)effectFrameRate;
- (void)setEffectFrameRate:(unsigned int)arg1;
- (unsigned int)effectAccumulator;
- (void)setEffectAccumulator:(unsigned int)arg1;
- (double)localMixVideoVideoWidth;
- (void)setLocalMixVideoVideoWidth:(double)arg1;
- (id)autoInvokeDisplayLink;
- (void)setAutoInvokeDisplayLink:(id)arg1;
- (int)autoInvokeRemainFrame;
- (void)setAutoInvokeRemainFrame:(int)arg1;
- (unsigned long long)renderFrameCnt;
- (void)setRenderFrameCnt:(unsigned long long)arg1;
- (BOOL)isRenderPrepareWaitOverTime;
- (void)setIsRenderPrepareWaitOverTime:(BOOL)arg1;
- (id)tranferContext;
- (void)setTranferContext:(id)arg1;
- (BOOL)isLiveCaptureRunning;
- (void)setIsLiveCaptureRunning:(BOOL)arg1;
- (BOOL)isAppResignActive;
- (void)setIsAppResignActive:(BOOL)arg1;
- (id)ciContext;
- (void)setCiContext:(id)arg1;
- (__CVPixelBufferPool *)pixelBufferPool;
- (void)setPixelBufferPool:(__CVPixelBufferPool *)arg1;
- (CGSize)pixelBufferPoolSize;
- (void)setPixelBufferPoolSize:(CGSize)arg1;
- (id)contextLock;
- (void)setContextLock:(id)arg1;
- (id)pixelBufferLock;
- (void)setPixelBufferLock:(id)arg1;
- (id)curMixBackgroundEffectFrame;
- (void)setCurMixBackgroundEffectFrame:(id)arg1;
- (unsigned long long)curMixBackgroundType;
- (void)setCurMixBackgroundType:(unsigned long long)arg1;
- (unsigned long long)nextMixBackgroundType;
- (void)setNextMixBackgroundType:(unsigned long long)arg1;
- (unsigned int)requestBackgroundImageCount;
- (void)setRequestBackgroundImageCount:(unsigned int)arg1;
- (id)blackStreamPixelBuffer;
- (void)setBlackStreamPixelBuffer:(id)arg1;
- (id)metricsMonitor;
- (void)setMetricsMonitor:(id)arg1;
- (id)metricsCollector;
- (void)setMetricsCollector:(id)arg1;
- (id)composeEndCallbacks;
- (void)setComposeEndCallbacks:(id)arg1;
- (id)composeEndCallbacksLock;
- (void)setComposeEndCallbacksLock:(id)arg1;
- (void).cxx_destruct;
@end
