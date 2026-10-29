@interface WAWebViewPlugin_APIQueue : WAWebViewPluginBase
{
    NSMutableArray * _arrEvent; // +0x8
    NSObject<WAWebViewPlugin_ApiQueueProtocol> * _runningEvent; // +0x10
}
- (id)init;
- (void)addApiEvent:(id)arg1 param:(id)arg2;
- (void)checkApiEvent;
- (void)removeApiEvent:(id)arg1;
- (id)arrEvent;
- (void)setArrEvent:(id)arg1;
- (id)runningEvent;
- (void)setRunningEvent:(id)arg1;
- (void).cxx_destruct;
@end

