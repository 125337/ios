@interface TPPlayer : NSObject <ITPPlayerBaseDelegate, ITPPlayerAdapterDelegate, TPProxyPlayDelegate, ITPPlayerPrivate, ITPPlayerInfoGetter, ITPPlayer>
{
    BOOL _enableSuggestedBitrateCallBack; // +0x8
    BOOL _isPlayerForceStopped; // +0x9
    id <ITPPlayerDelegate> delegate; // +0x10
    id <ITPPlayerDetailInfoDelegate> detailInfoDelegate; // +0x18
    TPPlayerLogContext * _log; // +0x20
    id <ITPPlayerAdapter> _adapter; // +0x28
    TPVideoInfo * _playVideoInfo; // +0x30
    TPProxyPlayManager * _playProxyManager; // +0x38
    TPPlayerQueue * _playerQueue; // +0x40
    TPPlayerQueue * _delegateQueue; // +0x48
    TPWorkerQueue * _imageCaptureQueue; // +0x50
    TPPluginManager * _pluginManager; // +0x58
    TPReportPlugin * _reportPlugin; // +0x60
    NSString * _cdnUrl; // +0x68
    TPPlayerTrackInfo * _selectedAudioTrack; // +0x70
    long long _donwloadPlayableDurationMs; // +0x78
    long long _currentDownloadSizeByte; // +0x80
    long long _totalFileSizeByte; // +0x88
    long long _startTimeMs; // +0x90
    long long _skipEndTimeMs; // +0x98
    TPTimer * _playingTimer; // +0xa0
    NSMutableDictionary * _uniqueIdToOpaqueMap; // +0xa8
    long long _uniqueIdCounter; // +0xb0
    TPContext * _context; // +0xb8
    TPReportController * _reportController; // +0xc0
}
- (id)initWithPlayingQueue:(id)arg1;
- (id)initWithPlayingQueue:(id)arg1 delegateQueue:(id)arg2;
- (void)setupPluginManger;
- (id)proxy;
- (id)reportManager;
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
- (unsigned long long)videoWidth;
- (unsigned long long)videoHeight;
- (unsigned long long)videoGravity;
- (void)setVideoGravity:(unsigned long long)arg1;
- (BOOL)enableResourceLoader;
- (void)setEnableResourceLoader:(BOOL)arg1;
- (void)setLog:(id)arg1;
- (id)log;
- (long long)setPlayerOptionalParam:(id)arg1;
- (long long)setDataSource:(id)arg1;
- (long long)setDataSource:(id)arg1 resourceLoaderDelegate:(id)arg2 delegateQueue:(id)arg3;
- (long long)setDataSource:(id)arg1 httpHeader:(id)arg2;
- (long long)setDataSourceWithMediaAsset:(id)arg1;
- (long long)setVideoInfo:(id)arg1;
- (long long)addSubtitleSource:(id)arg1 mimeType:(id)arg2 name:(id)arg3;
- (long long)addSubtitleSource:(id)arg1 mimeType:(id)arg2 name:(id)arg3 downloadParamData:(id)arg4;
- (long long)addAudioTrackSource:(id)arg1 name:(id)arg2;
- (long long)addAudioTrackSource:(id)arg1 name:(id)arg2 downloadParamData:(id)arg3;
- (id)getTrackInfo;
- (long long)selectTrack:(long long)arg1 opaque:(long long)arg2;
- (long long)deselectTrack:(long long)arg1 opaque:(long long)arg2;
- (id)getProgramInfo;
- (long long)selectProgram:(long long)arg1 opaque:(long long)arg2;
- (long long)prepareAsync;
- (long long)start;
- (long long)pause;
- (long long)getPlayerState;
- (long long)stop;
- (void)stopAsync;
- (long long)reset;
- (long long)releasePlayer;
- (long long)seekTo:(long long)arg1;
- (long long)seekTo:(long long)arg1 mode:(long long)arg2;
- (long long)setLoopback:(BOOL)arg1;
- (long long)setLoopback:(BOOL)arg1 startPositionMs:(long long)arg2 endPositionMS:(long long)arg3;
- (long long)switchDefinition:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3;
- (long long)switchDefinition:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3 httpHeader:(id)arg4;
- (long long)switchDefinition:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3 mode:(long long)arg4 resourceLoaderDelegate:(id)arg5 delegateQueue:(id)arg6;
- (long long)switchDefinitionWithMediaAsset:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3;
- (void)captureVideo;
- (void)captureWithMode:(unsigned long long)arg1;
- (id)syncCaptureVideo;
- (void)captureVideoWithFinishBlock:(id /* block */)arg1;
- (long long)getPropertyLong:(long long)arg1;
- (id)getPropertyString:(long long)arg1;
- (id)getPlayer;
- (BOOL)isExternalPlaybackActive;
- (BOOL)allowsExternalPlayback;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1;
- (unsigned long long)externalPlaybackVideoGravity;
- (void)setExternalPlaybackVideoGravity:(unsigned long long)arg1;
- (BOOL)pictureInPicturePossible;
- (BOOL)pictureInPictureActive;
- (BOOL)pictureInPictureSupported;
- (long long)startPictureInPicture;
- (long long)stopPictureInPicture;
- (void)setRichMediaSynchronizer:(id)arg1;
- (void)onPrepared:(id)arg1;
- (void)onCompletion:(id)arg1;
- (void)onPlayer:(id)arg1 errorType:(long long)arg2 errorCode:(long long)arg3;
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
- (void)onPlayer:(id)arg1 airplayDidActive:(BOOL)arg2;
- (void)onPlayer:(id)arg1 airplayErrorDidOccur:(long long)arg2;
- (void)onPlayer:(id)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onPlayer:(id)arg1 pictureInPictureErrorDidOccur:(long long)arg2;
- (void)onPlayer:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (void)onPlayer:(id)arg1 detailInfo:(id)arg2;
- (void)onStateChange:(id)arg1 preState:(unsigned long long)arg2 currentState:(unsigned long long)arg3;
- (void)onDownloadProgressUpdateWithPlayableDuration:(int)arg1 downloadSpeedKBs:(int)arg2 currentDownloadSizeByte:(long long)arg3 totalFileSizeByte:(long long)arg4 extraInfo:(id)arg5;
- (void)onDownloadFinish;
- (void)onDownloadErrorWithModuleId:(int)arg1 errorCode:(int)arg2 extInfo:(id)arg3;
- (id)onPlayCallbackWithMessageType:(unsigned long long)arg1 ext1:(id)arg2 ext2:(id)arg3 ext3:(id)arg4 ext4:(id)arg5;
- (void)onDownloadCdnUrlUpdate:(id)arg1;
- (void)onDownloadCdnUrlInfoUpdateWithUrl:(id)arg1 cdnIP:(id)arg2 uIP:(id)arg3 errcodeStr:(id)arg4;
- (void)onDownloadCdnUrlExpiredWithKVInfo:(id)arg1;
- (void)onDownloadStatusUpdateWithStatusCode:(int)arg1;
- (void)onDownloadProtocolUpdateWithProtocol:(id)arg1 protocolVer:(id)arg2;
- (long long)getPlayerBufferLength;
- (long long)getCurrentPosition;
- (int)getCurrentPlayClipNo;
- (id)getPlayInfo:(id)arg1;
- (long long)getCurrentPlayOffset;
- (long long)internalStop;
- (void)updateStartAndSkipEndTimeMsForDownloadParam:(id)arg1 startTimeMs:(long long)arg2 skipEndTimeMs:(long long)arg3;
- (void)handleOnPreparedWithProxyAvailable:(BOOL)arg1;
- (long long)assignUniqueIdForOpaque:(long long)arg1 logTag:(id)arg2;
- (long long)getOpaqueFromUniqueId:(long long)arg1 logTag:(id)arg2;
- (void)publishSetDataSourceEvent:(id)arg1 resourceLoaderActive:(BOOL)arg2;
- (void)publishPrepareEvent:(id)arg1;
- (id)startPlayTasksWithUrl:(id)arg1 httpHeader:(id)arg2;
- (void)setTPPlayerOptionalParam:(id)arg1;
- (void)handlePlayerInfo:(unsigned long long)arg1 extra1:(long long)arg2 extra2:(long long)arg3 extraObject:(id)arg4;
- (void)pushEventToDownloadProxyWithPlayerInfo:(unsigned long long)arg1 extra1:(long long)arg2 extra2:(long long)arg3 extraObject:(id)arg4;
- (void)samplingPlayFlowEvent:(long long)arg1;
- (void)onPlayFlowEventWithDetailInfo:(id)arg1;
- (void)onPlayFlowEventWithDetailInfoType:(long long)arg1;
- (void)onPlayerInfoToOnPlayerDetailInfo:(unsigned long long)arg1;
- (void)pushEventToPluginWithPlayerInfo:(unsigned long long)arg1 extra1:(long long)arg2 extra2:(long long)arg3 extraObject:(id)arg4;
- (void)pushEventToPluginWithEvent:(unsigned long long)arg1 withUserInfo:(id)arg2;
- (id)selectedTracksWithType:(unsigned long long)arg1;
- (id)trackInfoForTrackIndex:(long long)arg1 witType:(unsigned long long)arg2;
- (void)startPlayingTimer;
- (void)pausePlayingTimer;
- (void)invaliPlayingTimer;
- (void)checkPlayerIsPlaying;
- (id)getExtendReportController;
- (id)getGeneralPlayFlowParams;
- (id)getDynamicStatisticParams:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)detailInfoDelegate;
- (void)setDetailInfoDelegate:(id)arg1;
- (id)adapter;
- (void)setAdapter:(id)arg1;
- (id)playVideoInfo;
- (void)setPlayVideoInfo:(id)arg1;
- (id)playProxyManager;
- (void)setPlayProxyManager:(id)arg1;
- (id)playerQueue;
- (void)setPlayerQueue:(id)arg1;
- (id)delegateQueue;
- (void)setDelegateQueue:(id)arg1;
- (id)imageCaptureQueue;
- (void)setImageCaptureQueue:(id)arg1;
- (id)pluginManager;
- (void)setPluginManager:(id)arg1;
- (id)reportPlugin;
- (void)setReportPlugin:(id)arg1;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (id)selectedAudioTrack;
- (void)setSelectedAudioTrack:(id)arg1;
- (long long)donwloadPlayableDurationMs;
- (void)setDonwloadPlayableDurationMs:(long long)arg1;
- (long long)currentDownloadSizeByte;
- (void)setCurrentDownloadSizeByte:(long long)arg1;
- (long long)totalFileSizeByte;
- (void)setTotalFileSizeByte:(long long)arg1;
- (long long)startTimeMs;
- (void)setStartTimeMs:(long long)arg1;
- (long long)skipEndTimeMs;
- (void)setSkipEndTimeMs:(long long)arg1;
- (id)playingTimer;
- (void)setPlayingTimer:(id)arg1;
- (BOOL)enableSuggestedBitrateCallBack;
- (void)setEnableSuggestedBitrateCallBack:(BOOL)arg1;
- (id)uniqueIdToOpaqueMap;
- (void)setUniqueIdToOpaqueMap:(id)arg1;
- (long long)uniqueIdCounter;
- (void)setUniqueIdCounter:(long long)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)reportController;
- (void)setReportController:(id)arg1;
- (BOOL)isPlayerForceStopped;
- (void)setIsPlayerForceStopped:(BOOL)arg1;
- (void).cxx_destruct;
@end

