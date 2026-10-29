@interface TingPlayerCpp : UnitRCObjcBaseProxyClass <TingPlayer>
- (void)play:(id)arg1;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)seek:(long long)arg1;
- (void)setPlayRate:(float)arg1;
- (void)update:(id)arg1;
- (void)holdLastPlayerCore;
- (void)stopLastPlayerCore;
- (void)addAssociatedPlayerStateListener:(id)arg1;
- (void)removeAssociatedPlayerStateListener:(id)arg1;
- (void)setVolume:(float)arg1;
- (int)getPlayerState;
- (long long)getPlayerPosition;
- (long long)getPlayerDisplayTimeMs;
- (long long)getPlayerDuration;
- (long long)getPlayerDownloadPercent;
- (float)getPlayRate;
- (void)addPlayerStateClient:(id)arg1;
- (void)removePlayerStateClient:(id)arg1;
@end

