@interface GetPOIListMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    SKBuiltinBuffer_t * _nearBuff; // +0x8
    SKBuiltinBuffer_t * _searchBuff; // +0x10
    CLLocationCoordinate2D _lastCoordinate; // +0x18
}
- (void)dealloc;
- (BOOL)getNearPOIList:(CLLocationCoordinate2D)arg1 StartFromFirst:(BOOL)arg2 Scene:(unsigned int)arg3 Scale:(double)arg4 IndoorInfo:(id)arg5 UserActuallyLocation:(id)arg6;
- (BOOL)autoSearchPOIList:(CLLocationCoordinate2D)arg1 Keyword:(id)arg2 Scene:(unsigned int)arg3 Scale:(double)arg4 UserActuallyLocation:(id)arg5 StartFromFirst:(BOOL)arg6;
- (BOOL)getSearchPOIList:(CLLocationCoordinate2D)arg1 KeyWord:(id)arg2 StartFromFirst:(BOOL)arg3 Scene:(unsigned int)arg4 Scale:(double)arg5 UserActuallyLocation:(id)arg6;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)nearBuff;
- (void)setNearBuff:(id)arg1;
- (id)searchBuff;
- (void)setSearchBuff:(id)arg1;
- (void).cxx_destruct;
@end

