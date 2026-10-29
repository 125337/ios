@interface MMLivePollingFetchEngineMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _engineMap; // +0x8
}
- (void)onServiceInit;
- (void)onServiceTerminate;
- (id)startEngineForLive:(id)arg1 requestParamsMaker:(id /* block */)arg2;
- (id)engineForLive:(id)arg1;
- (void)stopEngineForLive:(id)arg1;
- (id)engineMap;
- (void).cxx_destruct;
@end

