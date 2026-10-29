@interface TPThumbPlayer : NSObject <TPThumbPlayerMessageCallback, TPThumbPlayerVideoFrameCallback, TPThumbPlayerAudioFrameCallback, TPThumbPlayerPostProcessFrameCallback, TPThumbPlayerDemuxerCallback, TPThumbPlayerEventRecordCallback, ITPPlayerBase, ITPLog>
{
    TPPlayerInitConfig _initConfig; // +0x8
    BOOL _outputMute; // +0xc8
    BOOL _externalPlaybackActive; // +0xc9
    BOOL _allowsExternalPlayback; // +0xca
    BOOL _usesExternalPlaybackWhileExternalScreenIsActive; // +0xcb
    BOOL _enableResourceLoader; // +0xcc
    BOOL _pictureInPicturePossible; // +0xcd
    BOOL _pictureInPictureActive; // +0xce
    BOOL _pictureInPictureSupported; // +0xcf
    BOOL _enableSnapshot; // +0xd0
    id <ITPPlayerBaseDelegate> _delegate; // +0xd8
    UIView * _playerView; // +0xe0
    double _audioGainRatio; // +0xe8
    double _playSpeedRatio; // +0xf0
    long long _durationMs; // +0xf8
    long long _currentPositionMs; // +0x100
    double _bufferPercent; // +0x108
    unsigned long long _videoHeight; // +0x110
    unsigned long long _videoWidth; // +0x118
    TPPlayerQueue * _playerQueue; // +0x120
    long long _currentClipIndex; // +0x128
    unsigned long long _videoGravity; // +0x130
    double _maxPlaySpeedRatio; // +0x138
    unsigned long long _externalPlaybackVideoGravity; // +0x140
    long long _playerId; // +0x148
    NSString * _audioNormalizeVolumeParams; // +0x150
    TPThumbPlayerWrapper * _thumbPlayerWrapper; // +0x158
    TPPlayerLogContext * _log; // +0x160
}
- (id)init;
- (void)dealloc;
- (void)updateContext:(id)arg1;
- (long long)playerId;
- (BOOL)outputMute;
- (void)setOutputMute:(BOOL)arg1;
- (void)setAudioNormalizeVolumeParams:(id)arg1;
- (id)audioNormalizeVolumeParams;
- (double)audioGainRatio;
- (void)setAudioGainRatio:(double)arg1;
- (double)playSpeedRatio;
- (void)setPlaySpeedRatio:(double)arg1;
- (double)maxPlaySpeedRatio;
- (long long)durationMs;
- (double)bufferPercent;
- (long long)playableDurationMs;
- (void)setEnableSnapshot:(BOOL)arg1;
- (long long)currentClipIndex;
- (unsigned long long)videoWidth;
- (unsigned long long)videoHeight;
- (unsigned long long)videoGravity;
- (void)setVideoGravity:(unsigned long long)arg1;
- (long long)currentPositionMs;
- (void)setPlayerView:(id)arg1;
- (long long)setPlayerOptionalParam:(id)arg1;
- (long long)setDataSource:(id)arg1;
- (long long)setDataSource:(id)arg1 httpHeader:(id)arg2;
- (long long)setDataSourceWithMediaAsset:(id)arg1;
- (long long)addSubtitleSource:(id)arg1 mimeType:(id)arg2 name:(id)arg3;
- (long long)addSubtitleSource:(id)arg1 mimeType:(id)arg2 name:(id)arg3 httpHeader:(id)arg4;
- (long long)addAudioTrackSource:(id)arg1 name:(id)arg2;
- (long long)addAudioTrackSource:(id)arg1 name:(id)arg2 httpHeader:(id)arg3;
- (long long)getPropertyLong:(long long)arg1;
- (id)getPropertyString:(long long)arg1;
- (id)getTrackInfo;
- (long long)selectTrack:(long long)arg1 opaque:(long long)arg2;
- (long long)deselectTrack:(long long)arg1 opaque:(long long)arg2;
- (id)getProgramInfo;
- (long long)selectProgram:(long long)arg1 opaque:(long long)arg2;
- (id)getPlayer;
- (id)getDynamicStatisticParamsAndReset;
- (long long)prepare;
- (long long)prepareAsync;
- (long long)start;
- (long long)pause;
- (long long)stop;
- (long long)reset;
- (long long)releasePlayer;
- (long long)seekTo:(long long)arg1;
- (long long)seekTo:(long long)arg1 mode:(long long)arg2;
- (long long)setLoopback:(BOOL)arg1;
- (long long)setLoopback:(BOOL)arg1 startPositionMs:(long long)arg2 endPositionMS:(long long)arg3;
- (long long)switchDefinition:(id)arg1 definitionId:(long long)arg2;
- (long long)switchDefinition:(id)arg1 definitionId:(long long)arg2 mode:(long long)arg3;
- (long long)switchDefinition:(id)arg1 definitionId:(long long)arg2 httpHeader:(id)arg3;
- (long long)switchDefinition:(id)arg1 definitionId:(long long)arg2 httpHeader:(id)arg3 mode:(long long)arg4;
- (long long)switchDefinitionWithMediaAsset:(id)arg1 definitionId:(long long)arg2;
- (id)snapshot;
- (id)subtitleSnapshot;
- (long long)startPictureInPicture;
- (long long)stopPictureInPicture;
- (long long)demuxerOffsetInFile;
- (id)dynamicStatisticParams;
- (id)generalPlayFlowParams;
- (void)onASyncCallResult:(id)arg1 callType:(int)arg2 opaque:(long long)arg3 errorType:(int)arg4 errorCode:(int)arg5;
- (void)onInfoLong:(id)arg1 infoType:(int)arg2 lParam1:(long long)arg3 lParam2:(long long)arg4;
- (void)handleClipIndexChanged:(long long)arg1;
- (void)onInfoObject:(id)arg1 infoType:(int)arg2 objectParam:(void *)arg3;
- (void)onError:(id)arg1 errorType:(int)arg2 errorCode:(int)arg3;
- (void)onPlayer:(id)arg1 detailInfo:(const TPDetailInfo *)arg2;
- (void)onPlayer:(id)arg1 drmInfo:(const void *)arg2;
- (void)onTPVideoFrame:(id)arg1 frame:(TPFrame *)arg2 trackID:(int)arg3 flags:(int)arg4;
- (void)onTPAudioFrame:(id)arg1 frame:(TPFrame *)arg2 flags:(int)arg3;
- (TPFrame *)onTPPostProcessFrame:(id)arg1 frame:(TPFrame *)arg2 eventFlag:(int)arg3;
- (TPRtcRemoteSdpInfo)onSdpExchange:(id)arg1 localSdp:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg2 ids:(int)arg3;
- (void)onDemuxerPauseContinueBufferingCompleted;
- (void)registerApplicationObservers;
- (void)unRegisterApplicationObservers;
- (void)applicationDidEnterBackground;
- (void)handleOnprepared:(id)arg1;
- (void)handleOnComplete:(id)arg1;
- (void)handleOnError:(long long)arg1 errorCode:(long long)arg2;
- (void)handleOnSeekComplete:(id)arg1;
- (void)handleOnVideoSizeChanged:(id)arg1 width:(int)arg2 height:(int)arg3;
- (void)handleOnPlayer:(id)arg1 info:(unsigned long long)arg2 extra1:(long long)arg3 extra2:(long long)arg4 extraObject:(id)arg5;
- (long long)setInitConfigValue:(id)arg1;
- (long long)setLongInitConfigValue:(long long)arg1 forKey:(int)arg2;
- (long long)setFloatInitConfigValue:(float)arg1 forKey:(int)arg2;
- (long long)setVideoDecoderStrategeIfNeeded:(id)arg1;
- (long long)setBoolInitConfigValue:(BOOL)arg1 forKey:(int)arg2;
- (long long)setObjectInitConfigValue:(id)arg1 forKey:(int)arg2;
- (long long)setQueueIntInitConfigValue:(id)arg1 forKey:(int)arg2;
- (long long)setQueueStringInitConfigValue:(id)arg1 forKey:(int)arg2;
- (long long)setFixedParamBeforePrepare;
- (long long)setPlayerOptionalValue:(id)arg1;
- (void)setPlayerOptionalLong:(id)arg1;
- (long long)setPlayerOptionalObject:(id)arg1;
- (long long)setPlayerGlobalStrategyValue:(id)arg1;
- (id)getSnapshotUsingRGB24Fmt;
- (id)getSnapshotUsingCVPixelBufferFmt;
- (id)getSubtitleSnapshotUsingRGBA;
- (id)processImage:(id)arg1 rotation:(int)arg2 sampleAspectRatio:(TPRational)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playerView;
- (BOOL)isExternalPlaybackActive;
- (BOOL)allowsExternalPlayback;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1;
- (BOOL)enableResourceLoader;
- (void)setEnableResourceLoader:(BOOL)arg1;
- (BOOL)pictureInPicturePossible;
- (BOOL)pictureInPictureActive;
- (BOOL)pictureInPictureSupported;
- (id)playerQueue;
- (void)setPlayerQueue:(id)arg1;
- (unsigned long long)externalPlaybackVideoGravity;
- (void)setExternalPlaybackVideoGravity:(unsigned long long)arg1;
- (BOOL)enableSnapshot;
- (id)thumbPlayerWrapper;
- (void)setThumbPlayerWrapper:(id)arg1;
- (id)log;
- (void)setLog:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

