@interface ContactGetPluginSwitchCgi : WCBaseCgi
{
    id /* block */ _onGetSwitchBlock; // +0x8
}
- (id)initWithRequest:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)onGetSwitchBlock;
- (void)setOnGetSwitchBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

