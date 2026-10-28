@interface MMLiveCommonUIDefineMgr : MMUserService <MMServiceProtocol>
{
    unsigned long long _liveBusinessType; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (unsigned long long)liveBusinessType;
- (void)setLiveBusinessType:(unsigned long long)arg1;
@end
