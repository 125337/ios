@interface WCPlayerQueueMgr : MMUserService <WCPlayerEventExt, SessionFlowSwizzleExt, MMServiceProtocol>
{
    BOOL _isMulinstance; // +0x8
    int _maxPreloadCount; // +0xc
    WCPlayerView * _playerView; // +0x10
    NSMutableDictionary * _dicPlayerObj; // +0x18
    NSMutableArray * _arrNewPreObjs; // +0x20
    unsigned long long _totalCreateCount; // +0x28
    unsigned long long _notHitCount; // +0x30
    unsigned long long _hitCount; // +0x38
    unsigned long long _hitAndReadyCount; // +0x40
}
- (void)onServiceInit;
- (id)getPlayerWithArgs:(id)arg1 frame:(CGRect)arg2 controlView:(id)arg3;
- (void)removePlayerInstance:(id)arg1;
- (void)removePlayerWithScene:(unsigned long long)arg1;
- (void)preloadWithArgs:(id)arg1;
- (void)adjustPreloadPriority;
- (void)createPlayers;
- (void)onPlayerStartPlay:(id)arg1;
- (void)onViewDidAppear:(id)arg1 withVC:(id)arg2;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)dicPlayerObj;
- (void)setDicPlayerObj:(id)arg1;
- (id)arrNewPreObjs;
- (void)setArrNewPreObjs:(id)arg1;
- (unsigned long long)totalCreateCount;
- (void)setTotalCreateCount:(unsigned long long)arg1;
- (unsigned long long)notHitCount;
- (void)setNotHitCount:(unsigned long long)arg1;
- (unsigned long long)hitCount;
- (void)setHitCount:(unsigned long long)arg1;
- (unsigned long long)hitAndReadyCount;
- (void)setHitAndReadyCount:(unsigned long long)arg1;
- (int)maxPreloadCount;
- (void)setMaxPreloadCount:(int)arg1;
- (BOOL)isMulinstance;
- (void)setIsMulinstance:(BOOL)arg1;
- (void).cxx_destruct;
@end
