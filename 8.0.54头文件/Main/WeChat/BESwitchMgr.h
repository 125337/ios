@interface BESwitchMgr : MMUserService <MMServiceProtocol>
{
    BOOL _isSvrOpenTimelineWhenInit; // +0x8
    unsigned int _debugConfigOpenTimelineWhenInit; // +0xc
    unsigned int _lastRequestTime; // +0x10
    MemoryMappedKV * _mappedKV; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)resetMappedKv;
- (id)mappedKV;
- (BOOL)isEnableBrandServiceTimeline;
- (void)tryRequestServiceTimelineConfirmWithScene:(unsigned long long)arg1;
- (void)requestServiceTimelineConfirm;
- (BOOL)isSvrOpenTimelineWhenInit;
- (void)setIsSvrOpenTimelineWhenInit:(BOOL)arg1;
- (unsigned int)debugConfigOpenTimelineWhenInit;
- (void)setDebugConfigOpenTimelineWhenInit:(unsigned int)arg1;
- (void)setMappedKV:(id)arg1;
- (unsigned int)lastRequestTime;
- (void)setLastRequestTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

