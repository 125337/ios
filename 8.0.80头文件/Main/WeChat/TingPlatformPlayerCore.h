@interface TingPlatformPlayerCore : NSObject <TingBizPlayerDelegate, TingPlayer, TingPlayerStateService>
{
    BOOL _isPlayerSeeking; // +0x8
    BOOL _useProcessingQueue; // +0x9
    long long _playerId; // +0x10
    id <TingPlayerCoreExtension> _delegate; // +0x18
    TingPlayingInfo * _playingInfo; // +0x20
    TingBizPlayer * _bizPlayer; // +0x28
    TingBizPlayer * _stashBizPlayer; // +0x30
    NSMutableSet * _observerList; // +0x38
    NSMutableArray * _associatedPlayerListeners; // +0x40
    long long _seekTargetPosition; // +0x48
    NSObject<OS_dispatch_queue> * _processingQueue; // +0x50
    TingBizPlayer * _holdBizPlayer; // +0x58
    TingTPResourceLoader * _resourceLoader; // +0x60
    UnitRCWeakPtr * _postProcessCallback; // +0x68
}
- (id)init;
- (void)resetSeekingStatus;
- (void)play:(id)arg1;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)seek:(long long)arg1;
- (void)update:(id)arg1;
- (void)setPlayRate:(float)arg1;
- (void)performOnThreadQueue:(id /* block */)arg1;
- (int)getPlayerState;
- (long long)getPlayerPosition;
- (long long)getPlayerDisplayTimeMs;
- (long long)getPlayerDuration;
- (long long)getPlayerDownloadPercent;
- (void)addPlayerStateClient:(id)arg1;
- (void)removePlayerStateClient:(id)arg1;
- (float)getPlayRate;
- (void)addAssociatedPlayerStateListener:(id)arg1;
- (void)removeAssociatedPlayerStateListener:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)setAudioProcessFrameOutCallback:(id)arg1;
- (void)updateCurrentTime:(double)arg1 displayTime:(double)arg2 duration:(double)arg3;
- (void)holdLastPlayerCore;
- (void)stopLastPlayerCore;
- (void)onEvent:(int)arg1 tingItem:(id)arg2 error:(id)arg3;
- (void)onInfoEvent:(int)arg1 tingItem:(id)arg2 error:(id)arg3;
- (id)observerList;
- (void)logInfo:(id)arg1;
- (void)logError:(id)arg1;
- (void)setBizPlayer:(id)arg1;
- (void)loadItem:(id)arg1;
- (void)playWithItem:(id)arg1;
- (void)createPlayingInfoWithItem:(id)arg1;
- (void)pleload:(id)arg1;
- (BOOL)isNewTTSSentence:(id)arg1;
- (id)tingItemPreloadKey:(id)arg1;
- (void)play;
- (void)_resume;
- (void)_pause;
- (void)_stop;
- (BOOL)canSeek;
- (void)seekToTime:(double)arg1;
- (void)stopCurrentBizPlayer;
- (id)userInfoFromError:(id)arg1 tingItem:(id)arg2;
- (id)parseErrorFromUserInfo:(id)arg1;
- (id)parseTingItemFromUserInfo:(id)arg1;
- (id)currentDisplayElement;
- (void)tingBizPlayer:(id)arg1 updateCurrentTime:(double)arg2 displayTime:(double)arg3 duration:(double)arg4;
- (void)tingBizPlayer:(id)arg1 onEvent:(int)arg2 error:(id)arg3;
- (void)tingBizPlayer:(id)arg1 onInfoEvent:(int)arg2 error:(id)arg3;
- (void)tingBizPlayer:(id)arg1 onDisplayFrameBufferOut:(id)arg2;
- (void)tingBizPlayer:(id)arg1 onDisplayElementAvailable:(id)arg2;
- (void)tingBizPlayerOnDisplayViewMTKViewCreated:(id)arg1;
- (void)tingBizPlayerAudioFrameOut:(id)arg1 metaInfo:(id)arg2;
- (void)tingBizPlayerGetAudioMetaInfo:(id)arg1 listenId:(id)arg2 listenType:(int)arg3;
- (void)_setPlayRate:(float)arg1;
- (float)playRate;
- (BOOL)isPlayRateSupported;
- (int)status;
- (double)currentTime;
- (double)displayTime;
- (double)duration;
- (double)bufferedTime;
- (id)tingItem;
- (long long)playerId;
- (void)setPlayerId:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playingInfo;
- (void)setPlayingInfo:(id)arg1;
- (id)bizPlayer;
- (id)stashBizPlayer;
- (void)setStashBizPlayer:(id)arg1;
- (void)setObserverList:(id)arg1;
- (id)associatedPlayerListeners;
- (void)setAssociatedPlayerListeners:(id)arg1;
- (BOOL)isPlayerSeeking;
- (void)setIsPlayerSeeking:(BOOL)arg1;
- (long long)seekTargetPosition;
- (void)setSeekTargetPosition:(long long)arg1;
- (id)processingQueue;
- (void)setProcessingQueue:(id)arg1;
- (BOOL)useProcessingQueue;
- (void)setUseProcessingQueue:(BOOL)arg1;
- (id)holdBizPlayer;
- (void)setHoldBizPlayer:(id)arg1;
- (id)resourceLoader;
- (void)setResourceLoader:(id)arg1;
- (id)postProcessCallback;
- (void)setPostProcessCallback:(id)arg1;
- (void).cxx_destruct;
@end
