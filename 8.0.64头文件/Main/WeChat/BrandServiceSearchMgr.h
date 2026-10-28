@interface BrandServiceSearchMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    CLLocation * _location; // +0x8
}
- (void)onServiceInit;
- (void)dealloc;
- (unsigned int)sendDetailPageDataQuickRequest:(unsigned long long)arg1 Keyword:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)location;
- (void)setLocation:(id)arg1;
- (void).cxx_destruct;
@end
