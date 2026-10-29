@interface MMLiveRemoteTrtcCustomRenderComposeManager : NSObject <WeEffectEnergyController, WeEffectManagerResultDelegate>
{
    BOOL _isCustomRenderStart; // +0x8
    BOOL _isFirstFrameRendered; // +0x9
    BOOL _isAllowFp16; // +0xa
    BOOL _isWeVisMgrCreated; // +0xb
    BOOL _isStopCustomRender; // +0xc
    BOOL _isRenderPrepareWaitOverTime; // +0xd
    int _autoInvokeRemainFrame; // +0x10
    MMWeEffectManager * _weeffectManager; // +0x18
    double _preferScaleRatio; // +0x20
    id /* block */ _startCallback; // +0x28
    id /* block */ _firstFrameRenderedCallback; // +0x30
    id /* block */ _trtcUserFirstFrameRenderedCallback; // +0x38
    id /* block */ _willStopCallback; // +0x40
    id /* block */ _stopCallback; // +0x48
    id /* block */ _weeffectMsgReceiveCallback; // +0x50
    id /* block */ _trtcUserRenderStopCallback; // +0x58
    id /* block */ _trtcUserRenderReqRenderSizeCallback; // +0x60
    id /* block */ _destroyCallback; // +0x68
    id /* block */ _requestDisplayImagesCallback; // +0x70
    id /* block */ _checkIsCurrTopPerfLevelCallback; // +0x78
    id /* block */ _increasePerfLevelCallback; // +0x80
    id /* block */ _decreasePerfLevelCallback; // +0x88
    id /* block */ _checkTimeRangeIsFullLoadCallback; // +0x90
    id /* block */ _surviveOverTimeCallback; // +0x98
    id /* block */ _maxSupportCntChangeCallback; // +0xa0
    id /* block */ _checkCanSurviveCallback; // +0xa8
    unsigned long long _maxSupportComposeCnt; // +0xb0
    unsigned long long _invokeMode; // +0xb8
    MMLiveTaskId * _liveTaskId; // +0xc0
    MMLiveRemoteTrtcCustomRenderComposeInitParam * _param; // +0xc8
    UIView * _videoRenderView; // +0xd0
    NSMutableDictionary * _remoteTrtcCustomRenderContextDict; // +0xd8
    CADisplayLink * _autoInvokeDisplayLink; // +0xe0
    unsigned long long _renderFrameCnt; // +0xe8
    CIContext * _tranferContext; // +0xf0
    MMLiveRemoteTrtcCustomRenderComposeMetricsMonitor * _metricsMonitor; // +0xf8
}
- (void)initMetricsReportData;
- (void)onRenderBegin;
- (void)onRenderEnd;
- (void)onCustomComposeRenderStart;
- (void)onCustomComposeRenderStop;
- (void)startSurviveCountDown;
- (void)cancelSurviveCountDown;
- (double)getSurviveDuration;
- (double)getRecentAverageFootPrintMemoryPercent:(id)arg1;
- (id)initWithTaskId:(id)arg1 initParam:(id)arg2;
- (void)dealloc;
- (void)initDefaultData;
- (unsigned long long)updateTrtcCustomRenderUserList:(id)arg1;
- (unsigned long long)addTrtcUserListToCustomRender:(id)arg1;
- (BOOL)addTrtcUserToCustomRender:(id)arg1;
- (void)removeCustomRenderTrtcUser:(id)arg1;
- (void)removeAllCustomRenderTrtcUsers;
- (BOOL)isTrtcUserCustomRender:(id)arg1;
- (BOOL)isTrtcUserCustomRenderWithUsrName:(id)arg1;
- (unsigned long long)getCustomRenderSrcFormatForTrtcUser:(id)arg1;
- (BOOL)hasTrtcCustomRenderUser;
- (BOOL)checkTrtcCustomComposeOverMaxSupportCnt;
- (BOOL)isTrtcUserFirstFrameRendered:(id)arg1;
- (BOOL)isTrtcUserFirstFrameFromCapture:(id)arg1;
- (BOOL)hasTrtcUserFirstFrameFromCapture;
- (id)getCustomRenderTrtcUser:(id)arg1;
- (id)getTrtcCustomRenderUserIdList;
- (id)getTrtcCustomRenderContextList;
- (BOOL)startCustomRenderWithUserList:(id)arg1;
- (BOOL)stopCustomRenderWithDelay:(BOOL)arg1;
- (void)destroy;
- (double)getWeVisMgrCreateTime;
- (void)onCustomRenderStopFinished;
- (void)cancelCustomRenderStop;
- (void)clearData;
- (void)prepareForRenderStart;
- (void)onRefreshPixelBuffer:(__CVBuffer *)arg1 userId:(id)arg2;
- (void)onRefreshRenderFrame:(id)arg1 userId:(id)arg2;
- (void)invokeRender;
- (void)startAutoInvokeRender;
- (void)stopAutoInvokeRender;
- (BOOL)needInvokeByOuter;
- (BOOL)supportOuterTexture;
- (void)startAutoInvokeDisplayLink;
- (void)stopAutoInvokeDisplayLink;
- (void)autoInvokeWithDisplayLink:(id)arg1;
- (void)initWeEffectData;
- (void)createWeEffectMananger;
- (void)createVideoRenderView;
- (void)updateMaxSupportComposeCnt;
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
- (BOOL)isCurrentInvokeModeSupportRenderContext:(id)arg1;
- (void)onWeeffectFramesProcessCompleted:(id)arg1;
- (double)getScaleRatio;
- (void)_render;
- (CGSize)getOutputSize;
- (void)increaseRenderFrame;
- (id)transferImageToPixelbuffer:(id)arg1;
- (void)createTransferContextIfNeed;
- (id)getCustomComposeRenderContextWrapper;
- (void)onSurviveOverTime;
- (BOOL)checkCanSurviveAfterRenderStop;
- (long long)autoRefreshFrameRate;
- (id)getVisRenderContext;
- (void)effectMgr:(id)arg1 configSettings:(void *)arg2;
- (void)effectMgr:(id)arg1 adjustSettings:(void *)arg2;
- (void)onWeEffectLuaScriptJsonMessageReceived:(id)arg1 fromSourceId:(int)arg2;
- (void)onResult:(int)arg1;
- (void)onResourceID:(long long)arg1;
- (void)onResourceIDVector:(id)arg1 scene:(unsigned long long)arg2;
- (void)onWeVisEffectMgrCreateCompleted;
- (id)finderLiveTask;
- (id)renderView;
- (BOOL)hasCustomRenderStarted;
- (long long)weffectScene;
- (unsigned long long)prepareWaitMaxFrames;
- (unsigned long long)workingMode;
- (BOOL)useSharedRenderContext;
- (BOOL)isRenderViewNeedDisableOpaque;
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
- (id /* block */)checkIsCurrTopPerfLevelCallback;
- (void)setCheckIsCurrTopPerfLevelCallback:(id /* block */)arg1;
- (id /* block */)increasePerfLevelCallback;
- (void)setIncreasePerfLevelCallback:(id /* block */)arg1;
- (id /* block */)decreasePerfLevelCallback;
- (void)setDecreasePerfLevelCallback:(id /* block */)arg1;
- (id /* block */)checkTimeRangeIsFullLoadCallback;
- (void)setCheckTimeRangeIsFullLoadCallback:(id /* block */)arg1;
- (id /* block */)surviveOverTimeCallback;
- (void)setSurviveOverTimeCallback:(id /* block */)arg1;
- (id /* block */)maxSupportCntChangeCallback;
- (void)setMaxSupportCntChangeCallback:(id /* block */)arg1;
- (id /* block */)checkCanSurviveCallback;
- (void)setCheckCanSurviveCallback:(id /* block */)arg1;
- (unsigned long long)maxSupportComposeCnt;
- (void)setMaxSupportComposeCnt:(unsigned long long)arg1;
- (unsigned long long)invokeMode;
- (void)setInvokeMode:(unsigned long long)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)param;
- (void)setParam:(id)arg1;
- (id)videoRenderView;
- (void)setVideoRenderView:(id)arg1;
- (BOOL)isAllowFp16;
- (void)setIsAllowFp16:(BOOL)arg1;
- (BOOL)isWeVisMgrCreated;
- (void)setIsWeVisMgrCreated:(BOOL)arg1;
- (BOOL)isStopCustomRender;
- (void)setIsStopCustomRender:(BOOL)arg1;
- (id)remoteTrtcCustomRenderContextDict;
- (void)setRemoteTrtcCustomRenderContextDict:(id)arg1;
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
- (id)metricsMonitor;
- (void)setMetricsMonitor:(id)arg1;
- (void).cxx_destruct;
@end
