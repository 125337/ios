@interface MMLiveCDNPlayerItem : NSObject <TXLivePlayListener, TRTCCdnPlayerManagerDelegate, TXAudioRawDataDelegate, WCAudioSessionExt>
{
    BOOL _hasPlayBegan; // +0x8
    BOOL _hasReceivedFirstIFrame; // +0x9
    BOOL _hasConnectedSuccess; // +0xa
    BOOL _isMuted; // +0xb
    BOOL _isPlayingLocalAudioLiveStream; // +0xc
    BOOL _interruptedWhenAppResignActive; // +0xd
    BOOL _shouldStartInBackground; // +0xe
    BOOL _isPreplayMode; // +0xf
    BOOL _isMinimizeMode; // +0x10
    BOOL _isAudioMode; // +0x11
    BOOL _isAudioRoomMode; // +0x12
    BOOL _isKTVMode; // +0x13
    BOOL _isGameMode; // +0x14
    BOOL _enableBackgroundDecoding; // +0x15
    BOOL _needCacheRecentCdnPixelBuffer; // +0x16
    BOOL _isInterruptedByAudioDeactiveDuringMutedPlaying; // +0x17
    BOOL _hasSetPlayerOrientation; // +0x18
    BOOL _hasSetPlayerRenderMode; // +0x19
    BOOL _hasSetPlayerCacheType; // +0x1a
    BOOL _hasSetPlayerCacheConfig; // +0x1b
    BOOL _hasEnteredBackgroundWhenWaitingPlayingOK; // +0x1c
    int _liveVrType; // +0x20
    int _encryptMode; // +0x24
    int _channelCount; // +0x28
    int _sampleRate; // +0x2c
    int _commentScene; // +0x30
    int _minPlayerCache; // +0x34
    int _maxPlayerCache; // +0x38
    int _minPlayerCacheLeb; // +0x3c
    int _maxPlayerCacheLeb; // +0x40
    int _wavejbmFlag; // +0x44
    int _wavejbmMode; // +0x48
    float _wavejbmMinSpeedRate; // +0x4c
    float _wavejbmMaxSpeedRate; // +0x50
    int _waveVolumeEqFlag; // +0x54
    float _startPlayVolume; // +0x58
    float _stopPlayVolume; // +0x5c
    int _customRenderVal; // +0x60
    int _flvGopCacheLevel1; // +0x64
    int _flvGopCacheLevel2; // +0x68
    int _svrLDPlayCfg; // +0x6c
    NSString * _itemId; // +0x70
    UIView * _videoView; // +0x78
    NSString * _url; // +0x80
    NSString * _streamId; // +0x88
    NSString * _originalUrl; // +0x90
    MMLiveCdnStreamInfo * _cdnStreamInfo; // +0x98
    MMLiveCDNPlayerStreamWrap * _nextStreamWrap; // +0xa0
    long long _renderMode; // +0xa8
    unsigned long long _startPlayTimestamp; // +0xb0
    unsigned long long _playerConnectTimestamp; // +0xb8
    unsigned long long _firstIFrameTimestamp; // +0xc0
    unsigned long long _playBeginTimestamp; // +0xc8
    unsigned long long _state; // +0xd0
    unsigned long long _lastScene; // +0xd8
    unsigned long long _currentScene; // +0xe0
    MMLiveCommonSEIMsg * _lastConnectMicSEIMsg; // +0xe8
    MMLiveCommonSEIMsg * _lastAnchorStatusSEIMsg; // +0xf0
    NSArray * _cachedMicUsersList; // +0xf8
    NSString * _anchorNickname; // +0x100
    unsigned long long _liveId; // +0x108
    unsigned long long _objectId; // +0x110
    CustomPlayerConfig * _customPlayerCfg; // +0x118
    TRTCCdnPlayerManager * _cdnPlayer; // +0x120
    NSMutableDictionary * _clarityDictionary; // +0x128
    unsigned long long _lastAudioDeactiveTimestampMs; // +0x130
    unsigned long long _switchStreamBeginTime; // +0x138
    CdnRenderViewBase * _barrageMaskRenderView; // +0x140
    long long _maxSupportFps; // +0x148
    id <MMLiveCDNPlayerItemDelegate> _delegate; // +0x150
    MMLiveTask * _liveTask; // +0x158
    long long _playerOrientation; // +0x160
    unsigned long long _playerCacheType; // +0x168
    NSString * _encryptKey; // +0x170
    NSString * _encryptIV; // +0x178
    NSString * _encryptUrl; // +0x180
    unsigned long long _reportInitialScene; // +0x188
    NSMutableDictionary * _sdkIntervalReportDict; // +0x190
    NSMutableDictionary * _sdkEndReportDict; // +0x198
    unsigned long long _videoDecodeType; // +0x1a0
    unsigned long long _enterSessionId; // +0x1a8
    FinderLiveVoipStreamStatus * _streamStatus; // +0x1b0
    CGSize _videoSize; // +0x1b8
}
- (id)initWithItemId:(id)arg1 delegate:(id)arg2 playScene:(unsigned long long)arg3 liveVrType:(int)arg4;
- (void)dealloc;
- (id)videoView;
- (id)videoViewProbe;
- (void)setVideoViewProbe:(id)arg1;
- (void)onEnterBackground;
- (unsigned long long)currentLiveType;
- (BOOL)isSmallScaleDisplayMode;
- (BOOL)isInLiveRoom;
- (BOOL)isLiveRoomPreparedItem;
- (BOOL)isAudioUnitInterrupted;
- (void)resetPlayEventValues:(BOOL)arg1;
- (void)onPlayEvent:(int)arg1 withParam:(id)arg2;
- (void)updateVideoDecodeType:(unsigned long long)arg1;
- (void)debug_autoChangeVideoDecodeType;
- (void)tryReportPlayTimeCostLog;
- (void)tryReportVolumeStatus;
- (void)tryReportPlayStatus;
- (void)tryReportStreamStatus;
- (void)onNetStatus:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)clearDelegate;
- (BOOL)isSameStreamIdFromUrl:(id)arg1;
- (unsigned int)currentQualityTag;
- (void)startPlayWithUrl:(id)arg1;
- (void)startPlayWithUrl:(id)arg1 andOriginalUrl:(id)arg2;
- (void)startPlayWithUrl:(id)arg1 originalUrl:(id)arg2 streamInfo:(id)arg3;
- (void)startPlayWithUrl:(id)arg1 originalUrl:(id)arg2 streamInfo:(id)arg3 forceRecreateCdnPlayer:(BOOL)arg4;
- (void)updateStreamInfo:(id)arg1;
- (void)callExperimentalAPI:(id)arg1;
- (void)cdnPlayerStartPlayWithUrl:(id)arg1 isMuted:(BOOL)arg2;
- (void)cdnPlayerStartPlayWithUrl:(id)arg1 isMuted:(BOOL)arg2 forceRecreateCdnPlayer:(BOOL)arg3;
- (void)resetTRTCCdnPlayerParams;
- (void)resetTRTCCdnPlayerDefaultParams;
- (void)switchToPlaying;
- (BOOL)startPlayForPreloadWithUrl:(id)arg1 andDelayStopTime:(double)arg2;
- (BOOL)startPlayForPreloadWithUrl:(id)arg1 originalUrl:(id)arg2 isLocalAudioLiveStream:(BOOL)arg3 andDelayStopTime:(double)arg4;
- (void)switchToPlayingForPreloadWithDelayStopTime:(double)arg1;
- (void)delayStopPlayingForPreload;
- (void)stopPlay;
- (void)pause;
- (void)resetRenderStats;
- (void)resume;
- (BOOL)isPlaying;
- (void)setMute:(BOOL)arg1;
- (void)setCurrentScene:(unsigned long long)arg1;
- (void)enableBackgroundDecoding:(BOOL)arg1;
- (void)requestARGBColorAtNormalizedCoordinateList:(id)arg1 fromRectWithSize:(CGSize)arg2 callback:(id /* block */)arg3;
- (void)requestYUVColorAtNormalizedCoordinateList:(id)arg1 fromRectWithSize:(CGSize)arg2 callback:(id /* block */)arg3;
- (float)currentVideoDisplayScale;
- (void)disableCdnRenderPixelBuffer:(BOOL)arg1;
- (void)enableCdnRenderPixelBuffer;
- (BOOL)isCurrentEnableCdnRenderPixelBuffer;
- (__CVBuffer *)getCurrentLivePixelBufferRef;
- (void)updateBarrageMaskRenderView:(id)arg1;
- (void)updateNeedCacheRecentCdnPixelBuffer:(BOOL)arg1;
- (id)getCdnRenderContext;
- (void)configCdnWeEffectManager:(id)arg1;
- (void)updateNeedProcessByWeffect:(BOOL)arg1;
- (BOOL)needProcessByWeffect;
- (BOOL)enableRci;
- (unsigned long long)currVideoDecodeType;
- (void)updateMaxSupportFps:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setRenderMode:(long long)arg1;
- (void)setCacheType:(unsigned long long)arg1 minCache:(int)arg2 maxCache:(int)arg3 lebMinCache:(int)arg4 lebMaxCache:(int)arg5;
- (void)setGameAppId:(id)arg1;
- (void)setCacheConfig:(unsigned int)arg1 wavejbmMode:(unsigned int)arg2 wavejbmMinSpeedRate:(double)arg3 wavejbmMaxSpeedRate:(double)arg4;
- (void)configAdaptiveVolumeEQ:(unsigned long long)arg1;
- (int)switchStreamWithUrl:(id)arg1;
- (int)switchStreamWithUrl:(id)arg1 originalUrl:(id)arg2 streamInfo:(id)arg3;
- (int)switchStreamWithUrl:(id)arg1 originalUrl:(id)arg2 streamInfo:(id)arg3 trtcChannelParams:(id)arg4 switchByUser:(BOOL)arg5;
- (void)handleGesturesOperation:(id)arg1;
- (void)setTouchControlFlag:(BOOL)arg1;
- (void)setSensorControlFlag:(BOOL)arg1 keepLastSensor:(BOOL)arg2;
- (void)resetVideoZoomAndYaw;
- (int)getCustomRenderEnable;
- (int)getCustomRenderMode;
- (int)getSharpenInfo;
- (void)onPlayerPixelBufferRefresh:(__CVBuffer *)arg1;
- (void)onPlayerPixelBufferRendered:(__CVBuffer *)arg1;
- (BOOL)isCDNPlayerNeedStopRenderPixel;
- (id)getRootLiveTask;
- (void)onOutputWeEffectProcessedRenderFrame:(id)arg1;
- (void)onCdnRenderFpsUpdate:(int)arg1;
- (void)setCustomRenderParam:(id)arg1;
- (void)setCDNPlayDecryptionParams:(id)arg1 encMode:(unsigned int)arg2 encKey:(id)arg3 encIV:(id)arg4;
- (void)verifyAndSetDecryptionParams:(id)arg1;
- (void)setCDNPlayDecryption:(id)arg1 encMode:(unsigned int)arg2 encKey:(id)arg3 encIV:(id)arg4;
- (void)appendCustomerPlayReportBegin:(id)arg1;
- (void)appendCustomerPlayReportEnd:(id)arg1;
- (void)appendCustomerPlayReportInterval:(id)arg1;
- (void)onAudioInfoChanged:(int)arg1 channels:(int)arg2;
- (void)onPcmDataAvailable:(id)arg1 pts:(unsigned long long)arg2;
- (unsigned long long)enhanceOptions;
- (void)setEnhanceOptions:(unsigned long long)arg1;
- (void)onWCAudioSessionSetActive:(BOOL)arg1;
- (void)setupStreamStatusForReport;
- (id)sdkIntervalReportDict;
- (id)sdkEndReportDict;
- (void)setCommentScene:(int)arg1;
- (void)setIsPreplayMode:(BOOL)arg1;
- (void)updateSDKReportWithAnchorSEIStatus:(unsigned int)arg1 delayInMs:(unsigned int)arg2;
- (void)refillSDKReport;
- (void)fillParamForSDKPlayReportWithIntervalDict:(id)arg1 endDict:(id)arg2;
- (void)addSharedValueToMDict:(id)arg1;
- (unsigned long long)enterSessionId;
- (void)onPlayEventAddCustomParamWithEvent:(int)arg1 changeParam:(id)arg2;
- (id)clarityDictionary;
- (void)clartyDictionaryAddWithCdnUrl:(id)arg1 cdnTransInfo:(id)arg2;
- (id)itemId;
- (void)setItemId:(id)arg1;
- (void)setVideoView:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (id)originalUrl;
- (void)setOriginalUrl:(id)arg1;
- (id)cdnStreamInfo;
- (void)setCdnStreamInfo:(id)arg1;
- (id)nextStreamWrap;
- (void)setNextStreamWrap:(id)arg1;
- (long long)renderMode;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (BOOL)hasPlayBegan;
- (void)setHasPlayBegan:(BOOL)arg1;
- (BOOL)hasReceivedFirstIFrame;
- (void)setHasReceivedFirstIFrame:(BOOL)arg1;
- (BOOL)hasConnectedSuccess;
- (void)setHasConnectedSuccess:(BOOL)arg1;
- (unsigned long long)startPlayTimestamp;
- (void)setStartPlayTimestamp:(unsigned long long)arg1;
- (unsigned long long)playerConnectTimestamp;
- (void)setPlayerConnectTimestamp:(unsigned long long)arg1;
- (unsigned long long)firstIFrameTimestamp;
- (void)setFirstIFrameTimestamp:(unsigned long long)arg1;
- (unsigned long long)playBeginTimestamp;
- (void)setPlayBeginTimestamp:(unsigned long long)arg1;
- (BOOL)isMuted;
- (void)setIsMuted:(BOOL)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)lastScene;
- (void)setLastScene:(unsigned long long)arg1;
- (unsigned long long)currentScene;
- (BOOL)isPlayingLocalAudioLiveStream;
- (void)setIsPlayingLocalAudioLiveStream:(BOOL)arg1;
- (int)liveVrType;
- (void)setLiveVrType:(int)arg1;
- (int)encryptMode;
- (void)setEncryptMode:(int)arg1;
- (BOOL)interruptedWhenAppResignActive;
- (void)setInterruptedWhenAppResignActive:(BOOL)arg1;
- (BOOL)shouldStartInBackground;
- (void)setShouldStartInBackground:(BOOL)arg1;
- (int)channelCount;
- (void)setChannelCount:(int)arg1;
- (int)sampleRate;
- (void)setSampleRate:(int)arg1;
- (BOOL)isPreplayMode;
- (id)lastConnectMicSEIMsg;
- (void)setLastConnectMicSEIMsg:(id)arg1;
- (id)lastAnchorStatusSEIMsg;
- (void)setLastAnchorStatusSEIMsg:(id)arg1;
- (id)cachedMicUsersList;
- (void)setCachedMicUsersList:(id)arg1;
- (id)anchorNickname;
- (void)setAnchorNickname:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)customPlayerCfg;
- (void)setCustomPlayerCfg:(id)arg1;
- (int)commentScene;
- (BOOL)isMinimizeMode;
- (void)setIsMinimizeMode:(BOOL)arg1;
- (BOOL)isAudioMode;
- (void)setIsAudioMode:(BOOL)arg1;
- (BOOL)isAudioRoomMode;
- (void)setIsAudioRoomMode:(BOOL)arg1;
- (BOOL)isKTVMode;
- (void)setIsKTVMode:(BOOL)arg1;
- (BOOL)isGameMode;
- (void)setIsGameMode:(BOOL)arg1;
- (id)cdnPlayer;
- (void)setCdnPlayer:(id)arg1;
- (void)setClarityDictionary:(id)arg1;
- (unsigned long long)lastAudioDeactiveTimestampMs;
- (void)setLastAudioDeactiveTimestampMs:(unsigned long long)arg1;
- (unsigned long long)switchStreamBeginTime;
- (void)setSwitchStreamBeginTime:(unsigned long long)arg1;
- (BOOL)enableBackgroundDecoding;
- (void)setEnableBackgroundDecoding:(BOOL)arg1;
- (BOOL)needCacheRecentCdnPixelBuffer;
- (void)setNeedCacheRecentCdnPixelBuffer:(BOOL)arg1;
- (id)barrageMaskRenderView;
- (void)setBarrageMaskRenderView:(id)arg1;
- (long long)maxSupportFps;
- (void)setMaxSupportFps:(long long)arg1;
- (BOOL)isInterruptedByAudioDeactiveDuringMutedPlaying;
- (void)setIsInterruptedByAudioDeactiveDuringMutedPlaying:(BOOL)arg1;
- (id)delegate;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (BOOL)hasSetPlayerOrientation;
- (void)setHasSetPlayerOrientation:(BOOL)arg1;
- (long long)playerOrientation;
- (void)setPlayerOrientation:(long long)arg1;
- (BOOL)hasSetPlayerRenderMode;
- (void)setHasSetPlayerRenderMode:(BOOL)arg1;
- (BOOL)hasSetPlayerCacheType;
- (void)setHasSetPlayerCacheType:(BOOL)arg1;
- (unsigned long long)playerCacheType;
- (void)setPlayerCacheType:(unsigned long long)arg1;
- (int)minPlayerCache;
- (void)setMinPlayerCache:(int)arg1;
- (int)maxPlayerCache;
- (void)setMaxPlayerCache:(int)arg1;
- (int)minPlayerCacheLeb;
- (void)setMinPlayerCacheLeb:(int)arg1;
- (int)maxPlayerCacheLeb;
- (void)setMaxPlayerCacheLeb:(int)arg1;
- (BOOL)hasSetPlayerCacheConfig;
- (void)setHasSetPlayerCacheConfig:(BOOL)arg1;
- (int)wavejbmFlag;
- (void)setWavejbmFlag:(int)arg1;
- (int)wavejbmMode;
- (void)setWavejbmMode:(int)arg1;
- (float)wavejbmMinSpeedRate;
- (void)setWavejbmMinSpeedRate:(float)arg1;
- (float)wavejbmMaxSpeedRate;
- (void)setWavejbmMaxSpeedRate:(float)arg1;
- (int)waveVolumeEqFlag;
- (void)setWaveVolumeEqFlag:(int)arg1;
- (float)startPlayVolume;
- (void)setStartPlayVolume:(float)arg1;
- (float)stopPlayVolume;
- (void)setStopPlayVolume:(float)arg1;
- (id)encryptKey;
- (void)setEncryptKey:(id)arg1;
- (id)encryptIV;
- (void)setEncryptIV:(id)arg1;
- (id)encryptUrl;
- (void)setEncryptUrl:(id)arg1;
- (int)customRenderVal;
- (void)setCustomRenderVal:(int)arg1;
- (unsigned long long)reportInitialScene;
- (void)setReportInitialScene:(unsigned long long)arg1;
- (BOOL)hasEnteredBackgroundWhenWaitingPlayingOK;
- (void)setHasEnteredBackgroundWhenWaitingPlayingOK:(BOOL)arg1;
- (void)setSdkIntervalReportDict:(id)arg1;
- (void)setSdkEndReportDict:(id)arg1;
- (int)flvGopCacheLevel1;
- (void)setFlvGopCacheLevel1:(int)arg1;
- (int)flvGopCacheLevel2;
- (void)setFlvGopCacheLevel2:(int)arg1;
- (int)svrLDPlayCfg;
- (void)setSvrLDPlayCfg:(int)arg1;
- (unsigned long long)videoDecodeType;
- (void)setVideoDecodeType:(unsigned long long)arg1;
- (void)setEnterSessionId:(unsigned long long)arg1;
- (id)streamStatus;
- (void)setStreamStatus:(id)arg1;
- (void).cxx_destruct;
@end

