@interface CaraLiveReddotProphetService : MMUserService <MMServiceProtocol>
{
    CaraCppLiveReddotProphet * _underlying; // +0x8
}
- (id)init;
- (void)reportThatReddotExpose:(id)arg1 isReady:(id)arg2 context:(id)arg3;
- (void)predict:(id)arg1 context:(id)arg2 onPredicted:(id /* block */)arg3;
- (void)reportThatReddotConsume:(id)arg1 isReady:(id)arg2;
- (void)reportThatPreload:(id)arg1 byPrediction:(id)arg2;
- (id)underlying;
- (void).cxx_destruct;
@end

