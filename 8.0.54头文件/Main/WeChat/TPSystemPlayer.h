@interface TPSystemPlayer : NSObject <TPPlayerVideoPrivateDelegate, TPPictureInPictureDelegate, TPAudioInterruptionDelegate, TPHeadphoneManagerDelegate, TPAVPlayerDelegate, TPSubtitleParserWrapperCallback, ITPPlayerBase>
{
    BOOL _outputMute; // +0x8
    BOOL _externalPlaybackActive; // +0x9
    BOOL _allowsExternalPlayback; // +0xa
    BOOL _usesExternalPlaybackWhileExternalScreenIsActive; // +0xb
    BOOL _enableResourceLoader; // +0xc
    BOOL _pictureInPicturePossible; // +0xd
    BOOL _pictureInPictureActive; // +0xe
    BOOL _pictureInPictureSupported; // +0xf
    BOOL _enableSnapshot; // +0x10
    BOOL _enableVideoFrameOutput; // +0x11
    BOOL _isLoopback; // +0x12
    BOOL _isPrepared; // +0x13
    BOOL _isBuffering; // +0x14
    BOOL _isHadCallbackBufferingStart; // +0x15
    BOOL _isHadCallbackBufferingBlockDelay; // +0x16
    BOOL _firstVideoFrameRendered; // +0x17
    BOOL _isNeedToNotifySeekComplete; // +0x18
    BOOL _enableAccurateStartPos; // +0x19
    BOOL _isSwitchingDefinition; // +0x1a
    BOOL _isReopening; // +0x1b
    BOOL _isFailedToPlayToEnd; // +0x1c
    BOOL _hasEnterBackground; // +0x1d
    BOOL _enableAutoPictureInPicture; // +0x1e
    BOOL _airplaySeeking; // +0x1f
    BOOL _airplayHoldSeekPosition; // +0x20
    int _subtitleOutputType; // +0x24
    id <ITPPlayerBaseDelegate> _delegate; // +0x28
    UIView * _playerView; // +0x30
    double _audioGainRatio; // +0x38
    double _playSpeedRatio; // +0x40
    TPPlayerQueue * _playerQueue; // +0x48
    unsigned long long _videoGravity; // +0x50
    unsigned long long _externalPlaybackVideoGravity; // +0x58
    long long _playerId; // +0x60
    NSString * _audioNormalizeVolumeParams; // +0x68
    unsigned long long currentState; // +0x70
    unsigned long long _videoWidth; // +0x78
    unsigned long long _videoHeight; // +0x80
    long long _playerType; // +0x88
    long long _playStartPos; // +0x90
    long long _playSkipEndPos; // +0x98
    long long _loopbackStartPos; // +0xa0
    long long _loopbackSkipEndPos; // +0xa8
    long long _bufferingTimeoutMs; // +0xb0
    long long _preferredForwardBufferDurationMs; // +0xb8
    unsigned long long _allowedAudioSpatializationFormats; // +0xc0
    long long _pictureInPictureStartDelayMs; // +0xc8
    long long _state; // +0xd0
    TPPlayerVideo * _video; // +0xd8
    NSObject<ITPAVPlayer> * _player; // +0xe0
    TPPlayerLayerViewContainer * _innerPlayerView; // +0xe8
    UIImageView * _subtitleView; // +0xf0
    TPPictureInPictureController * _pipController; // +0xf8
    TPSubtitleParserWrapper * _subtitleParser; // +0x100
    TPTimer * _subtitleTimer; // +0x108
    TPTimer * _bufferingTimeoutTimer; // +0x110
    id _currentDataSource; // +0x118
    long long _definitionId; // +0x120
    id /* block */ _bufferingStartCallbackBlock; // +0x128
    long long _airplaySeekPosition; // +0x130
    NSMutableArray * _outerTracks; // +0x138
    long long _selectedTrackIndex; // +0x140
    long long _selectedTrackOpaque; // +0x148
    TPSubtitleData * _lastSubtitleData; // +0x150
    TPPlayerLogContext * _log; // +0x158
    TPSubtitleRenderModel * _subtitleRenderModel; // +0x160
}
+ (id)playerWithType:(long long)arg1;
- (void)clearPlayer;
- (void)clearVideo;
- (void)clearProperty;
- (void)clearOptional;
- (id)init;
- (void)dealloc;
- (id)logTag;
- (long long)setPlayerOptionalParam:(id)arg1;
- (long long)setPlayerGlobalOptionalParam:(id)arg1;
- (long long)setPlayerBeforeOptionalParam:(id)arg1;
- (long long)setDataSource:(id)arg1;
- (long long)setDataSource:(id)arg1 httpHeader:(id)arg2;
- (long long)setDataSourceWithMediaAsset:(id)arg1;
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
- (void)setPlayerView:(id)arg1;
- (void)setOutputMute:(BOOL)arg1;
- (void)setAudioGainRatio:(double)arg1;
- (void)setPlaySpeedRatio:(double)arg1;
- (double)maxPlaySpeedRatio;
- (long long)durationMs;
- (long long)currentPositionMs;
- (double)bufferPercent;
- (long long)playableDurationMs;
- (long long)currentClipIndex;
- (long long)getPropertyLong:(long long)arg1;
- (id)getPropertyString:(long long)arg1;
- (void)onUpdateSubtitle;
- (long long)addSubtitleSource:(id)arg1 mimeType:(id)arg2 name:(id)arg3;
- (long long)addSubtitleSource:(id)arg1 mimeType:(id)arg2 name:(id)arg3 httpHeader:(id)arg4;
- (long long)addAudioTrackSource:(id)arg1 name:(id)arg2;
- (long long)addAudioTrackSource:(id)arg1 name:(id)arg2 httpHeader:(id)arg3;
- (id)getTrackInfo;
- (long long)selectTrack:(long long)arg1 opaque:(long long)arg2;
- (long long)deselectTrack:(long long)arg1 opaque:(long long)arg2;
- (id)getProgramInfo;
- (long long)selectProgram:(long long)arg1 opaque:(long long)arg2;
- (id)getPlayer;
- (long long)demuxerOffsetInFile;
- (id)dynamicStatisticParams;
- (id)generalPlayFlowParams;
- (id)getDynamicStatisticParamsAndReset;
- (void)updateContext:(id)arg1;
- (long long)playerId;
- (unsigned long long)videoGravity;
- (void)setVideoGravity:(unsigned long long)arg1;
- (void)onLoadResult:(id)arg1 errorCode:(int)arg2;
- (void)onSelectResult:(id)arg1 errorCode:(int)arg2 opaque:(long long)arg3;
- (void)onSubtitleError:(int)arg1 errorCode:(int)arg2;
- (long long)onGetCurrentPlayPositionMs;
- (void)onSubtitleFrame:(TPFrame *)arg1;
- (void)onSubtitleNote:(id)arg1;
- (void)startPosDidChange:(id)arg1;
- (void)skipEndPosDidChange:(id)arg1;
- (void)setEnableResourceLoader:(BOOL)arg1;
- (void)setEnableSnapshot:(BOOL)arg1;
- (BOOL)isExternalPlaybackActive;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1;
- (void)setExternalPlaybackVideoGravity:(unsigned long long)arg1;
- (unsigned long long)externalPlaybackVideoGravity;
- (BOOL)pictureInPictureSupported;
- (BOOL)pictureInPicturePossible;
- (BOOL)pictureInPictureActive;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (void)audioInterruptionBegan;
- (void)audioInterruptionEnded;
- (void)audioRouteDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)player:(id)arg1 loadStateDidChange:(long long)arg2;
- (void)player:(id)arg1 playbackStateDidChange:(long long)arg2;
- (void)player:(id)arg1 timeBaseValueChange:(double)arg2;
- (void)player:(id)arg1 seekCompleted:(BOOL)arg2;
- (void)player:(id)arg1 didErrorOccurred:(id)arg2;
- (void)player:(id)arg1 naturalSizeAvailableWithSize:(CGSize)arg2;
- (void)playerFirstFrameRendered:(id)arg1;
- (void)player:(id)arg1 airplayDidActive:(BOOL)arg2;
- (id)player:(id)arg1 assembleAVAssetWithIndex:(unsigned long long)arg2;
- (void)player:(id)arg1 onVideoFrame:(__CVBuffer *)arg2;
- (void)player:(id)arg1 videoEndOfOnePlayLoop:(id)arg2;
- (void)player:(id)arg1 startOneClipWithIndex:(unsigned long long)arg2;
- (void)player:(id)arg1 endOfOneClipWithIndex:(unsigned long long)arg2;
- (void)player:(id)arg1 didSelectedTrackAtIndex:(unsigned long long)arg2 opaque:(long long)arg3;
- (void)player:(id)arg1 didDeselectedTrackAtIndex:(unsigned long long)arg2 opaque:(long long)arg3;
- (void)player:(id)arg1 didFailedToPlayToEndWithError:(id)arg2;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)applicationDidBecomeActive;
- (void)updatePlayerView;
- (BOOL)needNotifyInvalidSourceWithPosition:(long long)arg1 video:(id)arg2;
- (void)currentTimeChanged:(struct)arg1;
- (void)disableHoldSeekPosition;
- (void)setPlayerPropertiesAfterPrepared;
- (void)handlePrepared;
- (void)handleSwitchDefinitionEnd;
- (void)handleReopenEnd;
- (void)handleReset;
- (void)handlePrepareAsync;
- (void)handleSetDataSourceWithUrl:(id)arg1 httpHeader:(id)arg2;
- (long long)handleSetDataSourceWithMediaAsset:(id)arg1;
- (void)handleStartPlay;
- (void)handleResumePlay;
- (void)handeOnCompletion;
- (void)handleBufferingStart;
- (void)handleBufferingEnd;
- (void)handleErrorWhenSwitchingDefinition;
- (void)handleErrorWhenReopening;
- (void)handleOnErrorWithError:(id)arg1;
- (void)handlePlayerStateChangeWhenPipActive:(long long)arg1;
- (void)notifySelectSubtitleTrackErrorWithErrorCode:(long long)arg1;
- (void)invalidateSubtitleTimer;
- (long long)outerTrackIndexWithIndex:(long long)arg1;
- (id)avLayerGravityWithTPPlayerGravity:(unsigned long long)arg1;
- (void)switchDefinitionImplWithDefinitionId:(long long)arg1 dataSourceBlock:(id /* block */)arg2;
- (void)reopenPlayer;
- (void)applySubtitleRenderModel:(id)arg1;
- (void)notifyBufferingStartWithBufferingType:(long long)arg1;
- (void)notifyBufferingEndWithBufferingType:(long long)arg1;
- (void)startBufferingTimeoutCheck;
- (void)stopBufferingTimeoutCheck;
- (void)onBufferingTimeout;
- (id)imageFromSubitltTPFrame:(TPFrame *)arg1;
- (void)notifyDetailInfoWithType:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playerView;
- (BOOL)outputMute;
- (double)audioGainRatio;
- (double)playSpeedRatio;
- (void)setExternalPlaybackActive:(BOOL)arg1;
- (BOOL)allowsExternalPlayback;
- (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
- (BOOL)enableResourceLoader;
- (id)playerQueue;
- (void)setPlayerQueue:(id)arg1;
- (BOOL)enableSnapshot;
- (id)audioNormalizeVolumeParams;
- (void)setAudioNormalizeVolumeParams:(id)arg1;
- (unsigned long long)currentState;
- (unsigned long long)videoWidth;
- (void)setVideoWidth:(unsigned long long)arg1;
- (unsigned long long)videoHeight;
- (void)setVideoHeight:(unsigned long long)arg1;
- (long long)playerType;
- (void)setPlayerType:(long long)arg1;
- (long long)playStartPos;
- (void)setPlayStartPos:(long long)arg1;
- (long long)playSkipEndPos;
- (void)setPlaySkipEndPos:(long long)arg1;
- (BOOL)enableVideoFrameOutput;
- (void)setEnableVideoFrameOutput:(BOOL)arg1;
- (BOOL)isLoopback;
- (void)setIsLoopback:(BOOL)arg1;
- (long long)loopbackStartPos;
- (void)setLoopbackStartPos:(long long)arg1;
- (long long)loopbackSkipEndPos;
- (void)setLoopbackSkipEndPos:(long long)arg1;
- (long long)bufferingTimeoutMs;
- (void)setBufferingTimeoutMs:(long long)arg1;
- (long long)preferredForwardBufferDurationMs;
- (void)setPreferredForwardBufferDurationMs:(long long)arg1;
- (unsigned long long)allowedAudioSpatializationFormats;
- (void)setAllowedAudioSpatializationFormats:(unsigned long long)arg1;
- (long long)pictureInPictureStartDelayMs;
- (void)setPictureInPictureStartDelayMs:(long long)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (id)video;
- (void)setVideo:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)innerPlayerView;
- (void)setInnerPlayerView:(id)arg1;
- (id)subtitleView;
- (void)setSubtitleView:(id)arg1;
- (id)pipController;
- (void)setPipController:(id)arg1;
- (int)subtitleOutputType;
- (void)setSubtitleOutputType:(int)arg1;
- (id)subtitleParser;
- (void)setSubtitleParser:(id)arg1;
- (id)subtitleTimer;
- (void)setSubtitleTimer:(id)arg1;
- (id)bufferingTimeoutTimer;
- (void)setBufferingTimeoutTimer:(id)arg1;
- (id)currentDataSource;
- (void)setCurrentDataSource:(id)arg1;
- (BOOL)isPrepared;
- (void)setIsPrepared:(BOOL)arg1;
- (BOOL)isBuffering;
- (void)setIsBuffering:(BOOL)arg1;
- (BOOL)isHadCallbackBufferingStart;
- (void)setIsHadCallbackBufferingStart:(BOOL)arg1;
- (BOOL)isHadCallbackBufferingBlockDelay;
- (void)setIsHadCallbackBufferingBlockDelay:(BOOL)arg1;
- (BOOL)firstVideoFrameRendered;
- (void)setFirstVideoFrameRendered:(BOOL)arg1;
- (BOOL)isNeedToNotifySeekComplete;
- (void)setIsNeedToNotifySeekComplete:(BOOL)arg1;
- (BOOL)enableAccurateStartPos;
- (void)setEnableAccurateStartPos:(BOOL)arg1;
- (BOOL)isSwitchingDefinition;
- (void)setIsSwitchingDefinition:(BOOL)arg1;
- (long long)definitionId;
- (void)setDefinitionId:(long long)arg1;
- (BOOL)isReopening;
- (void)setIsReopening:(BOOL)arg1;
- (BOOL)isFailedToPlayToEnd;
- (void)setIsFailedToPlayToEnd:(BOOL)arg1;
- (BOOL)hasEnterBackground;
- (void)setHasEnterBackground:(BOOL)arg1;
- (BOOL)enableAutoPictureInPicture;
- (void)setEnableAutoPictureInPicture:(BOOL)arg1;
- (id /* block */)bufferingStartCallbackBlock;
- (void)setBufferingStartCallbackBlock:(id /* block */)arg1;
- (BOOL)airplaySeeking;
- (void)setAirplaySeeking:(BOOL)arg1;
- (BOOL)airplayHoldSeekPosition;
- (void)setAirplayHoldSeekPosition:(BOOL)arg1;
- (long long)airplaySeekPosition;
- (void)setAirplaySeekPosition:(long long)arg1;
- (id)outerTracks;
- (void)setOuterTracks:(id)arg1;
- (long long)selectedTrackIndex;
- (void)setSelectedTrackIndex:(long long)arg1;
- (long long)selectedTrackOpaque;
- (void)setSelectedTrackOpaque:(long long)arg1;
- (id)lastSubtitleData;
- (void)setLastSubtitleData:(id)arg1;
- (id)log;
- (void)setLog:(id)arg1;
- (id)subtitleRenderModel;
- (void)setSubtitleRenderModel:(id)arg1;
- (void).cxx_destruct;
@end

