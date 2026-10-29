@interface MBExternalFinderLive : MMUserService <MMServiceProtocol>
{
    id <IMBPublicServiceDispatcher> _dispatcher; // +0x8
    NSMutableDictionary * _playerItemsMap; // +0x10
}
- (void)registerFinderLiveTexture:(id)arg1 withId:(long long)arg2 extraData:(id)arg3 dispatcher:(id)arg4 retBlock:(id /* block */)arg5;
- (void)unregisterFinderLiveTexture:(id)arg1 withId:(long long)arg2 retBlock:(id /* block */)arg3;
- (void)startPlay:(long long)arg1 retBlock:(id /* block */)arg2;
- (void)stopPlay:(long long)arg1 retBlock:(id /* block */)arg2;
- (void)clean;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)dispatcher;
- (void)setDispatcher:(id)arg1;
- (id)playerItemsMap;
- (void)setPlayerItemsMap:(id)arg1;
- (void).cxx_destruct;
@end
