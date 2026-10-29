@interface TRTCCdnPlayerManager : NSObject <CdnNotifyDelegate, TXVideoCustomProcessDelegate>
{
    BOOL _isMuted; // +0x8
    BOOL _enableRci; // +0x9
    BOOL _disableCustomDNSResolve; // +0xa
    BOOL _useCdnRenderer; // +0xb
    BOOL _forbidRenderPixel; // +0xc
    BOOL _hasSetWavejbmParam; // +0xd
    BOOL _needCacheRecentCdnPixelBuffer; // +0xe
    BOOL _isLebPlayer; // +0xf
    BOOL _isProcessByWeffect; // +0x10
    BOOL _needPrintRenderFps; // +0x11
    BOOL _forbidRenderPixelCompletely; // +0x12
    BOOL _backgroundRenderingEnabled; // +0x13
    int _cdnRenderParam; // +0x14
    int _customrenderInfo; // +0x18
    TXLivePlayer * _player; // +0x20
    TRTCCdnPlayerConfig * _config; // +0x28
    id <TXLivePlayListener> _delegate; // +0x30
    id <TRTCCdnPlayerManagerDelegate> _cdnPlayerDelegate; // +0x38
    unsigned long long _enhanceOptions; // +0x40
    CdnRenderViewBase * _renderView; // +0x48
    CdnRenderViewBase * _barrageMaskRenderView; // +0x50
    UIView * _containView; // +0x58
    long long _customrenderMode; // +0x60
    long long _wavejbm_factory; // +0x68
    CustomPlayerConfig * _customPlayerCfg; // +0x70
    MMLivePixelBuffer * _currLivePixelBuffer; // +0x78
    MMLivePixelBuffer * _prePixelBuffer; // +0x80
    long long _maxStandardFps; // +0x88
    long long _maxSupportFps; // +0x90
    long long _fpsCounter; // +0x98
    long long _thermalState; // +0xa0
    MMLiveTask * _liveTask; // +0xa8
    NSString * _playUrl; // +0xb0
    NSString * _playUrlResolved; // +0xb8
    MMWeEffectManager * _weeffectManager; // +0xc0
    NSMutableArray * _tempARGBColorRequestTaskList; // +0xc8
    NSMutableArray * _tempYUVColorRequestTaskList; // +0xd0
    NSObject<OS_dispatch_semaphore> * _tempARGBReqTaskLock; // +0xd8
    NSObject<OS_dispatch_semaphore> * _tempYUVReqTaskLock; // +0xe0
    NSObject<OS_dispatch_semaphore> * _forbidRenderPixelChangedLock; // +0xe8
}
- (void)addTempARGBColorRequestTask:(id)arg1;
- (void)addTempYUVColorRequestTask:(id)arg1;
- (void)extractPixelColorInfoFromPixelBufferIfNeeded:(__CVBuffer *)arg1;
- (void)checkTempYUVColorRequestTaskListOverLimit;
- (void)checkTempARGBColorRequestTaskListOverLimit;
- (void)extractPixelColorWithRequestTaskList:(id)arg1 fromPixelBufferIfNeeded:(__CVBuffer *)arg2;
- (CGRect)convertNormalizedDisplayFrameFromPixelBuffer:(__CVBuffer *)arg1 withDisplaySize:(CGSize)arg2;
- (CGPoint)convertNormalizedCoordinate:(CGPoint)arg1 toPointInPixelBuffer:(__CVBuffer *)arg2 pixelBufferDisplayNormalizedFrame:(CGRect)arg3;
- (struct)readARGBColorInPixelPoint:(CGPoint)arg1 pixelBuffer:(__CVBuffer *)arg2 ret:(BOOL *)arg3;
- (struct)readYUVColorInPixelPoint:(CGPoint)arg1 pixelBuffer:(__CVBuffer *)arg2 ret:(BOOL *)arg3;
- (id)initWithContainerView:(id)arg1 delegate:(id)arg2 liveVrType:(int)arg3 enableRci:(BOOL)arg4;
- (void)initDefaultData;
- (void)setupRenderInfo;
- (BOOL)isOverMaxStandardFpsLimit;
- (void)liveTaskChanged:(id)arg1;
- (void)thermalStateDidChange;
- (void)dealloc;
- (long long)getCurrentMaxFps;
- (BOOL)shallLimitForMaxStandardFps;
- (BOOL)shallLimitForMaxSupportFps;
- (BOOL)checkNeedSkipRenderFrame;
- (long long)frameIntervalForMaxFps:(long long)arg1;
- (BOOL)checkNeedSkipRenderFrameWithMaxTimeInterval:(double)arg1;
- (double)getMaxRenderTimeIntervalWithMaxFps:(long long)arg1;
- (void)presentRenderFrame:(id)arg1 atView:(id)arg2;
- (void)applyConfigToPlayer;
- (void)setupRenderer;
- (void)configCallbacksForCdnRenderView:(id)arg1;
- (void)setRenderer;
- (void)setMaskRender;
- (void)configRender;
- (void)startPlay:(id)arg1;
- (BOOL)isPlayingUsingCustomDNSResolve;
- (void)restartPlayDisableCustomDNSResolve;
- (int)switchStream:(id)arg1;
- (void)resetRenderViewStats;
- (void)removeRenderer;
- (void)stopPlay;
- (void)pause;
- (void)resume;
- (BOOL)isPlaying;
- (void)setMute:(BOOL)arg1;
- (void)setVolume:(int)arg1;
- (void)enableBackgroundDecoding:(BOOL)arg1;
- (void)requestARGBColorAtNormalizedCoordinateList:(id)arg1 fromRectWithSize:(CGSize)arg2 callback:(id /* block */)arg3;
- (void)requestYUVColorAtNormalizedCoordinateList:(id)arg1 fromRectWithSize:(CGSize)arg2 callback:(id /* block */)arg3;
- (float)currentVideoDisplayScale;
- (void)disableCdnRenderPixelBufferWithForbidPixel:(BOOL)arg1 hideView:(BOOL)arg2;
- (void)enableCdnRenderPixelBuffer;
- (BOOL)isCurrentEnableCdnRenderPixelBuffer;
- (void)enableMetalRender:(BOOL)arg1;
- (void)updateCurrentLivePixelBuffer:(__CVBuffer *)arg1;
- (__CVBuffer *)getCurrentLivePixelBufferRef;
- (void)updateNeedCacheRecentCdnPixelBuffer:(BOOL)arg1;
- (void)updateBarrageMaskRenderView:(id)arg1;
- (id)getCdnRenderContext;
- (void)configCdnWeEffectManager:(id)arg1;
- (void)updateNeedProcessByWeffect:(BOOL)arg1;
- (BOOL)needProcessByWeffect;
- (void)updateMaxSupportFps:(long long)arg1;
- (void)updateNeedPrintRenderFps:(BOOL)arg1;
- (void)enableBackgroundRendering:(BOOL)arg1;
- (BOOL)onPlayerPixelBuffer:(__CVBuffer *)arg1;
- (void)setDebugLogEnabled:(BOOL)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setRenderMode:(long long)arg1;
- (void)setCacheType:(unsigned long long)arg1 minCache:(int)arg2 maxCache:(int)arg3 lebMinCache:(int)arg4 lebMaxCache:(int)arg5;
- (void)setGameAppId:(id)arg1;
- (void)setDefaultPlayerConfig;
- (void)configAdaptiveVolumeEQ:(int)arg1 baseLevel:(int)arg2;
- (void)configSuperResolution:(BOOL)arg1;
- (void)updateEnableRci:(BOOL)arg1;
- (void)initCacheConfig;
- (void)setCacheConfig:(unsigned int)arg1 wavejbmMode:(unsigned int)arg2 wavejbmMinSpeedRate:(double)arg3 wavejbmMaxSpeedRate:(double)arg4;
- (void)setLowDelayMode:(unsigned int)arg1 initialdelay:(unsigned int)arg2;
- (void)setConnectRetryCount:(int)arg1;
- (void)setConnectRetryInterval:(int)arg1;
- (void)setEnableMessage:(BOOL)arg1;
- (void)setCloseHWDecoder;
- (void)setCustomRenderParam:(id)arg1;
- (void)callExperimentalAPI:(id)arg1;
- (void)setLEBPlayerCache:(float)arg1 maxCache:(float)arg2;
- (void)setPreferLocalIPStackV6:(BOOL)arg1;
- (void)updatePlayerCache;
- (void)updatePlayerAudioJitterBufferConfig:(unsigned int)arg1 wavejbmMode:(unsigned int)arg2 wavejbmMinSpeedRate:(double)arg3 wavejbmMaxSpeedRate:(double)arg4;
- (BOOL)forbidAdjustCDNEnhanceOptions;
- (id)currLiveTask;
- (void)enableReportStreamRspInfo;
- (void)appendCustomerPlayReportBegin:(id)arg1;
- (void)appendCustomerPlayReportEnd:(id)arg1;
- (void)appendCustomerPlayReportInterval:(id)arg1;
- (void)appendCustomerPlayReport:(id)arg1 withParams:(id)arg2;
- (void)onNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)onOutputWeEffectProcessedRenderFrame:(id)arg1;
- (void)onRenderFpsUpdate:(int)arg1;
- (void)handleGesturesOperation:(id)arg1;
- (void)setTouchControlFlag:(BOOL)arg1;
- (void)setSensorControlFlag:(BOOL)arg1 keepLastSensor:(BOOL)arg2;
- (void)resetPitchAndYaw;
- (void)setMaxMinHalfFOVHor:(float)arg1 MaxVal:(float)arg2;
- (void)setMaxMinHalfFOVVer:(float)arg1 MaxVal:(float)arg2;
- (int)getCustomRenderEnable;
- (int)getCustomRenderMode;
- (long long)getActualCustomRenderMode;
- (int)getSharpenInfo;
- (void)addPerfWarningObserve;
- (void)onMatrixPerfWarning:(id)arg1;
- (id)tempARGBColorRequestTaskList;
- (id)tempYUVColorRequestTaskList;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (BOOL)isMuted;
- (void)setIsMuted:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cdnPlayerDelegate;
- (void)setCdnPlayerDelegate:(id)arg1;
- (unsigned long long)enhanceOptions;
- (void)setEnhanceOptions:(unsigned long long)arg1;
- (BOOL)enableRci;
- (void)setEnableRci:(BOOL)arg1;
- (BOOL)disableCustomDNSResolve;
- (void)setDisableCustomDNSResolve:(BOOL)arg1;
- (id)renderView;
- (void)setRenderView:(id)arg1;
- (id)barrageMaskRenderView;
- (void)setBarrageMaskRenderView:(id)arg1;
- (id)containView;
- (void)setContainView:(id)arg1;
- (BOOL)useCdnRenderer;
- (void)setUseCdnRenderer:(BOOL)arg1;
- (int)cdnRenderParam;
- (void)setCdnRenderParam:(int)arg1;
- (long long)customrenderMode;
- (void)setCustomrenderMode:(long long)arg1;
- (int)customrenderInfo;
- (void)setCustomrenderInfo:(int)arg1;
- (BOOL)forbidRenderPixel;
- (void)setForbidRenderPixel:(BOOL)arg1;
- (long long)wavejbm_factory;
- (void)setWavejbm_factory:(long long)arg1;
- (BOOL)hasSetWavejbmParam;
- (void)setHasSetWavejbmParam:(BOOL)arg1;
- (id)customPlayerCfg;
- (void)setCustomPlayerCfg:(id)arg1;
- (BOOL)needCacheRecentCdnPixelBuffer;
- (void)setNeedCacheRecentCdnPixelBuffer:(BOOL)arg1;
- (id)currLivePixelBuffer;
- (void)setCurrLivePixelBuffer:(id)arg1;
- (id)prePixelBuffer;
- (void)setPrePixelBuffer:(id)arg1;
- (long long)maxStandardFps;
- (void)setMaxStandardFps:(long long)arg1;
- (long long)maxSupportFps;
- (void)setMaxSupportFps:(long long)arg1;
- (long long)fpsCounter;
- (void)setFpsCounter:(long long)arg1;
- (long long)thermalState;
- (void)setThermalState:(long long)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (BOOL)isLebPlayer;
- (void)setIsLebPlayer:(BOOL)arg1;
- (id)playUrl;
- (void)setPlayUrl:(id)arg1;
- (id)playUrlResolved;
- (void)setPlayUrlResolved:(id)arg1;
- (id)weeffectManager;
- (void)setWeeffectManager:(id)arg1;
- (BOOL)isProcessByWeffect;
- (void)setIsProcessByWeffect:(BOOL)arg1;
- (BOOL)needPrintRenderFps;
- (void)setNeedPrintRenderFps:(BOOL)arg1;
- (BOOL)forbidRenderPixelCompletely;
- (void)setForbidRenderPixelCompletely:(BOOL)arg1;
- (BOOL)backgroundRenderingEnabled;
- (void)setBackgroundRenderingEnabled:(BOOL)arg1;
- (void)setTempARGBColorRequestTaskList:(id)arg1;
- (void)setTempYUVColorRequestTaskList:(id)arg1;
- (id)tempARGBReqTaskLock;
- (void)setTempARGBReqTaskLock:(id)arg1;
- (id)tempYUVReqTaskLock;
- (void)setTempYUVReqTaskLock:(id)arg1;
- (id)forbidRenderPixelChangedLock;
- (void)setForbidRenderPixelChangedLock:(id)arg1;
- (void).cxx_destruct;
@end
