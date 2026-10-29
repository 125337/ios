@interface TingTPPlayer : TingBizPlayer <ITPPlayerDelegate, TingTPResourceLoaderDelegate>
{
    BOOL _hasCallPrepared; // +0x8
    BOOL _isPreload; // +0x9
    BOOL _hasCallStoped; // +0xa
    BOOL _hasCallStartPlayBeforePrepared; // +0xb
    BOOL _isSeeking; // +0xc
    BOOL _isMoovReady; // +0xd
    id <ITPPlayer> _player; // +0x10
    WCAudioInfo * _audioInfo; // +0x18
    MMTimer * _progressCheckTimer; // +0x20
    long long _lagTime; // +0x28
    TingTPResourceLoader * _resourceLoader; // +0x30
    TingSafeWeakProxy * _safeProxy; // +0x38
    double _startPrepareTime; // +0x40
    AudioFrameMetaInfo * _metaInfo; // +0x48
}
+ (id)buildAudioOnlyXmlWithUrl:(id)arg1;
- (id)player;
- (id)audioInfo;
- (void)startProgressCheckTimer;
- (void)stopProgressCheckTimer;
- (void)onProgressCheckTimerCallback;
- (int)playerKernelType;
- (id)view;
- (void)reset;
- (void)prepareToPlay;
- (BOOL)shouldWaitForMoovReady;
- (void)setupDataSource;
- (id)genVideoInfo:(id)arg1;
- (void)play;
- (void)pause;
- (void)resume;
- (void)safePlayStart;
- (BOOL)checkForceStopedState;
- (void)stop;
- (BOOL)shouldDeleteTargetFileWhenStop;
- (void)seekToTime:(double)arg1;
- (BOOL)canSeek;
- (double)duration;
- (double)currentTime;
- (double)displayTime;
- (double)bufferedTime;
- (void)setPlayRate:(float)arg1;
- (void)setVolume:(float)arg1;
- (void)checkSetPlayRate;
- (id)generateReadyReportInfo;
- (void)onPrepared:(id)arg1;
- (void)onCompletion:(id)arg1;
- (void)onPlayer:(id)arg1 errorType:(long long)arg2 errorCode:(long long)arg3 arg1:(long long)arg4 arg2:(long long)arg5;
- (void)onStateChange:(id)arg1 preState:(unsigned long long)arg2 currentState:(unsigned long long)arg3;
- (void)onPlayer:(id)arg1 info:(unsigned long long)arg2 extra1:(long long)arg3 extra2:(long long)arg4 extraObject:(id)arg5;
- (void)onPlayer:(id)arg1 videoFrameOut:(id)arg2;
- (void)onSeekComplete:(id)arg1;
- (id)onPlayer:(id)arg1 audioProcessFrameOut:(id)arg2;
- (int)tpKernelStateToTingEvent:(unsigned long long)arg1;
- (long long)durationInSeconds;
- (BOOL)isBuffering;
- (void)onResourceDownloadFailWithCode:(int)arg1 expired:(BOOL)arg2;
- (void)onResourceDownloadFinished;
- (void)onResourceMoovReady:(id)arg1;
- (void)onMixTtsStart:(id)arg1;
- (void)onMixTtsEnd:(id)arg1 totalTime:(int)arg2;
- (void)setPlayer:(id)arg1;
- (void)setAudioInfo:(id)arg1;
- (id)progressCheckTimer;
- (void)setProgressCheckTimer:(id)arg1;
- (BOOL)hasCallPrepared;
- (void)setHasCallPrepared:(BOOL)arg1;
- (BOOL)isPreload;
- (void)setIsPreload:(BOOL)arg1;
- (BOOL)hasCallStoped;
- (void)setHasCallStoped:(BOOL)arg1;
- (BOOL)hasCallStartPlayBeforePrepared;
- (void)setHasCallStartPlayBeforePrepared:(BOOL)arg1;
- (BOOL)isSeeking;
- (void)setIsSeeking:(BOOL)arg1;
- (BOOL)isMoovReady;
- (void)setIsMoovReady:(BOOL)arg1;
- (long long)lagTime;
- (void)setLagTime:(long long)arg1;
- (id)resourceLoader;
- (void)setResourceLoader:(id)arg1;
- (id)safeProxy;
- (void)setSafeProxy:(id)arg1;
- (double)startPrepareTime;
- (void)setStartPrepareTime:(double)arg1;
- (id)metaInfo;
- (void)setMetaInfo:(id)arg1;
- (void).cxx_destruct;
@end
