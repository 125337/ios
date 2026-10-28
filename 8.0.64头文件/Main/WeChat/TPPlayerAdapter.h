@interface TPPlayerAdapter : NSObject <ITPPlayerBaseDelegate, ITPPlayerStateWrapperDelegate, ITPInnerRichMediaSynchronizerDelegate, ITPPlayerAdapter>
{
    BOOL _enableSnapshot; // +0x8
    id <ITPPlayerBaseDelegate> _delegate; // +0x10
    long long _playerType; // +0x18
    long long _playerId; // +0x20
    id <ITPPlayerAdapterDelegate> _adapterPlayerDelegate; // +0x28
    id <ITPPlayerBase> _player; // +0x30
    id <ITPStrategy> _strategy; // +0x38
    TPPlaybackParams * _playbackParams; // +0x40
    TPPlaybackInfo * _playbackInfo; // +0x48
    TPPlayerStateWrapper * _playerState; // +0x50
    TPPlayerStateStrategy * _playerStateChecker; // +0x58
    TPPlayerPictureInPictureHandler * _pipHandler; // +0x60
    NSMutableSet * _filteredPlayInfo; // +0x68
    NSMutableSet * _filteredDetailInfo; // +0x70
    TPPlayerLogContext * _log; // +0x78
    id <ITPInnerRichMediaSynchronizer> _innerRichMediaSynchronizer; // +0x80
}
- (id)init;
- (void)dealloc;
- (long long)playerId;
- (BOOL)isPlaying;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (BOOL)outputMute;
- (void)setOutputMute:(BOOL)arg1;
- (double)audioGainRatio;
- (void)setAudioGainRatio:(double)arg1;
- (void)setAudioNormalizeVolumeParams:(id)arg1;
- (id)audioNormalizeVolumeParams;
- (double)playSpeedRatio;
- (void)setPlaySpeedRatio:(double)arg1;
- (double)maxPlaySpeedRatio;
- (long long)durationMs;
- (long long)currentPositionMs;
- (unsigned long long)currentState;
- (double)bufferPercent;
- (long long)playableDurationMs;
- (long long)currentClipIndex;
- (unsigned long long)videoWidth;
- (unsigned long long)videoHeight;
- (unsigned long long)videoGravity;
- (void)setVideoGravity:(unsigned long long)arg1;
- (BOOL)enableResourceLoader;
- (void)setEnableResourceLoader:(BOOL)arg1;
- (void)setPlayerQueue:(id)arg1;
- (id)playerQueue;
- (id)getPlayer;
- (long long)demuxerOffsetInFile;
- (id)dynamicStatisticParams;
- (id)getDynamicStatisticParamsAndReset;
- (id)generalPlayFlowParams;
- (long long)setDataSource:(id)arg1;
- (long long)setDataSource:(id)arg1 httpHeader:(id)arg2;
- (long long)setDataSourceWithMediaAsset:(id)arg1;
- (long long)setPlayerOptionalParam:(id)arg1;
- (long long)addSubtitleSource:(id)arg1 mimeType:(id)arg2 name:(id)arg3 httpHeader:(id)arg4;
- (long long)addSubtitleSource:(id)arg1 mimeType:(id)arg2 name:(id)arg3;
- (long long)addAudioTrackSource:(id)arg1 name:(id)arg2 httpHeader:(id)arg3;
- (long long)addAudioTrackSource:(id)arg1 name:(id)arg2;
- (long long)setLoopback:(BOOL)arg1;
- (long long)setLoopback:(BOOL)arg1 startPositionMs:(long long)arg2 endPositionMS:(long long)arg3;
- (long long)switchDefinition:(id)arg1 definitionId:(long long)arg2;
- (long long)switchDefinitionWithMediaAsset:(id)arg1 definitionId:(long long)arg2;
- (long long)getPropertyLong:(long long)arg1;
- (id)getPropertyString:(long long)arg1;
- (id)getTrackInfo;
- (long long)selectTrack:(long long)arg1 opaque:(long long)arg2;
- (long long)deselectTrack:(long long)arg1 opaque:(long long)arg2;
- (id)getProgramInfo;
- (long long)getPlayerState;
- (long long)selectProgram:(long long)arg1 opaque:(long long)arg2;
- (long long)prepare;
- (long long)prepareAsync;
- (long long)start;
- (long long)pause;
- (long long)stop;
- (long long)reset;
- (long long)releasePlayer;
- (long long)seekTo:(long long)arg1;
- (long long)seekTo:(long long)arg1 mode:(long long)arg2;
- (void)updateContext:(id)arg1;
- (id)snapshot;
- (id)subtitleSnapshot;
- (id)videoPlusSubtitleSnapshot;
- (BOOL)isExternalPlaybackActive;
- (BOOL)allowsExternalPlayback;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1;
- (unsigned long long)externalPlaybackVideoGravity;
- (void)setExternalPlaybackVideoGravity:(unsigned long long)arg1;
- (long long)startPictureInPicture;
- (long long)stopPictureInPicture;
- (BOOL)pictureInPictureSupported;
- (BOOL)pictureInPictureActive;
- (BOOL)pictureInPicturePossible;
- (long long)playerType;
- (long long)setVideoInfo:(id)arg1;
- (long long)setUrlDataSource:(id)arg1;
- (long long)switchDefinitionWithUrlDataSource:(id)arg1 definitionId:(long long)arg2;
- (long long)switchDefinitionWithUrlDataSource:(id)arg1 definitionId:(long long)arg2 mode:(long long)arg3;
- (long long)forceStopPlayer;
- (long long)reopenPlayer;
- (void)setRichMediaSynchronizer:(id)arg1;
- (void)onCompletion:(id)arg1;
- (void)onPlayer:(id)arg1 errorType:(long long)arg2 errorCode:(long long)arg3;
- (void)onPrepared:(id)arg1;
- (void)onPlayer:(id)arg1 info:(unsigned long long)arg2 extra1:(long long)arg3 extra2:(long long)arg4 extraObject:(id)arg5;
- (void)onSeekComplete:(id)arg1;
- (void)onVideoSizeChanged:(id)arg1 width:(int)arg2 height:(int)arg3;
- (void)onPlayer:(id)arg1 subtitleData:(id)arg2;
- (void)onPlayer:(id)arg1 videoFrameOut:(id)arg2;
- (void)onPlayer:(id)arg1 audioFrameOut:(id)arg2;
- (id)onPlayer:(id)arg1 videoProcessFrameOut:(id)arg2;
- (id)onPlayer:(id)arg1 audioProcessFrameOut:(id)arg2;
- (id)onSdpExchange:(id)arg1 localSdp:(id)arg2 ids:(int)arg3;
- (void)onDemuxerPauseContinueBufferingCompleted;
- (id)onPlayer:(id)arg1 assembleAVAssetWithUrl:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)onPlayer:(id)arg1 pictureInPictureErrorDidOccur:(long long)arg2;
- (void)onPlayer:(id)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onPlayer:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (void)onPlayer:(id)arg1 stateChangedWhenPictureInPictureActive:(unsigned long long)arg2;
- (void)onPlayer:(id)arg1 airplayDidActive:(BOOL)arg2;
- (void)onPlayer:(id)arg1 airplayErrorDidOccur:(long long)arg2;
- (void)onPlayer:(id)arg1 detailInfo:(id)arg2;
- (void)onPlayer:(id)arg1 drmInfo:(id)arg2;
- (void)onStateChange:(id)arg1 preState:(unsigned long long)arg2 currentState:(unsigned long long)arg3;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (long long)rePrepareWithPlayerType:(long long)arg1;
- (long long)playerTypeForOpen;
- (long long)playerTypeForRetry;
- (id)createPlayer:(long long)arg1;
- (void)retryWithPlayerType:(long long)arg1;
- (long long)handlePrepare;
- (long long)handlePrepareAsync;
- (void)handleOnPrepared;
- (long long)handleStop;
- (long long)handleReset;
- (void)savePlayerStatus;
- (id)currentStateString;
- (BOOL)shouldFilterOnInfo:(unsigned long long)arg1;
- (BOOL)shouldFilterOnDetailInfo:(long long)arg1;
- (BOOL)isPlayerInfoVerbose:(unsigned long long)arg1;
- (long long)onGetCurrentPlayPosition:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)enableSnapshot;
- (void)setEnableSnapshot:(BOOL)arg1;
- (id)adapterPlayerDelegate;
- (void)setAdapterPlayerDelegate:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)strategy;
- (void)setStrategy:(id)arg1;
- (id)playbackParams;
- (void)setPlaybackParams:(id)arg1;
- (id)playbackInfo;
- (void)setPlaybackInfo:(id)arg1;
- (id)playerState;
- (void)setPlayerState:(id)arg1;
- (id)playerStateChecker;
- (void)setPlayerStateChecker:(id)arg1;
- (id)pipHandler;
- (void)setPipHandler:(id)arg1;
- (id)filteredPlayInfo;
- (void)setFilteredPlayInfo:(id)arg1;
- (id)filteredDetailInfo;
- (void)setFilteredDetailInfo:(id)arg1;
- (id)log;
- (void)setLog:(id)arg1;
- (id)innerRichMediaSynchronizer;
- (void)setInnerRichMediaSynchronizer:(id)arg1;
- (void).cxx_destruct;
@end
