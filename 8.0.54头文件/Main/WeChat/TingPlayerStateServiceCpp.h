@interface TingPlayerStateServiceCpp : UnitRCObjcBaseProxyClass <TingPlayerStateService>
- (int)getPlayerState;
- (long long)getPlayerPosition;
- (long long)getPlayerDisplayTimeMs;
- (long long)getPlayerDuration;
- (long long)getPlayerDownloadPercent;
- (float)getPlayRate;
- (void)addPlayerStateClient:(id)arg1;
- (void)removePlayerStateClient:(id)arg1;
@end

