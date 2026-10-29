@interface TingFinderLivePlayer : TingBizPlayer <MMLiveCDNPlayerViewDelegate>
{
    BOOL _isChecking; // +0x8
    unsigned int _checkInterval; // +0xc
    unsigned int _checkFailCount; // +0x10
    WCFinderDataItem * _finderItem; // +0x18
    MMLiveCDNPlayerView * _livePlayerView; // +0x20
    MMTimer * _checkTimer; // +0x28
}
- (id)livePlayerView;
- (id)initWithTingItem:(id)arg1 configuartion:(id)arg2;
- (void)dealloc;
- (id)view;
- (void)prepareToPlay;
- (void)play;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)onPlayBegin;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void)onPlayWarningReconnect;
- (void)startTimerCheck;
- (void)stopTimerCheck;
- (void)checkLiveStatus;
- (id)finderItem;
- (void)setFinderItem:(id)arg1;
- (void)setLivePlayerView:(id)arg1;
- (id)checkTimer;
- (void)setCheckTimer:(id)arg1;
- (unsigned int)checkInterval;
- (void)setCheckInterval:(unsigned int)arg1;
- (BOOL)isChecking;
- (void)setIsChecking:(BOOL)arg1;
- (unsigned int)checkFailCount;
- (void)setCheckFailCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

