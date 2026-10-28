@interface WAJSContextPlugin_DelayToForeground : WAJSContextPluginBase
{
    NSMutableArray * _delayPerformArr; // +0x8
}
- (id)init;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)addDelayJSAPIHandler:(id /* block */)arg1 jsapiName:(id)arg2;
- (void)execute;
- (void)trimJSAPIInArray:(id)arg1;
- (id)delayPerformArr;
- (void)setDelayPerformArr:(id)arg1;
- (void).cxx_destruct;
@end
