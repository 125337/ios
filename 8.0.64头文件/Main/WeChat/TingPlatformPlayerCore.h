@interface TingPlatformPlayerCore : NSObject <TingPlayer, TingPlayerStateService>
{
    BOOL _isPlayerSeeking; // +0x8
    TingPlayerCore * _core; // +0x10
    TingBizPlayer * _stashBizPlayer; // +0x18
    NSMutableSet * _observerList; // +0x20
    NSMutableArray * _associatedPlayerListeners; // +0x28
    long long _seekTargetPosition; // +0x30
}
- (id)core;
- (id)init;
- (void)resetSeekingStatus;
- (void)play:(id)arg1;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)seek:(long long)arg1;
- (void)update:(id)arg1;
- (void)setPlayRate:(float)arg1;
- (void)performOnMainThread:(id /* block */)arg1;
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
- (void)applyAuditoryEnhance:(BOOL)arg1 mode:(int)arg2;
- (id)getAuditoryEnhanceEffectArgs;
- (void)setAudioMixPcmBuffer:(id)arg1 hasMore:(BOOL)arg2 streamType:(int)arg3 sampleRate:(int)arg4 sampleFormat:(int)arg5 channelCount:(int)arg6;
- (void)tingPlayerCore:(id)arg1 tingItem:(id)arg2 updateCurrentTime:(double)arg3 displayTime:(double)arg4 duration:(double)arg5;
- (void)holdLastPlayerCore;
- (void)stopLastPlayerCore;
- (void)tingPlayerCore:(id)arg1 tingItem:(id)arg2 onEvent:(int)arg3 error:(id)arg4;
- (void)tingPlayerCore:(id)arg1 tingItem:(id)arg2 onInfoEvent:(int)arg3 error:(id)arg4;
- (id)observerList;
- (void)setCore:(id)arg1;
- (id)stashBizPlayer;
- (void)setStashBizPlayer:(id)arg1;
- (void)setObserverList:(id)arg1;
- (id)associatedPlayerListeners;
- (void)setAssociatedPlayerListeners:(id)arg1;
- (BOOL)isPlayerSeeking;
- (void)setIsPlayerSeeking:(BOOL)arg1;
- (long long)seekTargetPosition;
- (void)setSeekTargetPosition:(long long)arg1;
- (void).cxx_destruct;
@end
