@interface MMFinderLiveECManager : MMUserService <MMServiceProtocol>
{
    MMFinderLiveECLocalSwitchManager * _localSwitchManager; // +0x8
}
- (void)onServiceInit;
- (void)buildParamForDisplayWindowOpenProduct:(unsigned long long)arg1 appID:(id)arg2 anchor:(id)arg3 entranceGMsgID:(id)arg4 reqType:(int)arg5 ecSource:(id)arg6 completion:(id /* block */)arg7;
- (void)enterLiveWidgetWithProductID:(unsigned long long)arg1 reqType:(int)arg2 anchor:(id)arg3 entranceGMsgID:(id)arg4 ecSource:(id)arg5 completion:(id /* block */)arg6;
- (id)localSwitchManager;
- (void)setLocalSwitchManager:(id)arg1;
- (void).cxx_destruct;
@end

