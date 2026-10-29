@interface WCPayHKGetPluginCgi : WCPayBaseCgi
{
    id <WCPayHKGetPluginCgiDelegate> _logicDelegate; // +0x8
}
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (void)startRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (void).cxx_destruct;
@end
