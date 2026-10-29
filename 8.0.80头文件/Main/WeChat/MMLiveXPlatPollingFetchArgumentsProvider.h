@interface MMLiveXPlatPollingFetchArgumentsProvider : NSObject <LiveURLivePollingRequestArgumentsProvider>
{
    MMLiveTaskId * _taskId; // +0x8
    id /* block */ _requestModelFactory; // +0x10
}
- (id)initWithTaskId:(id)arg1 requestModelFactory:(id /* block */)arg2;
- (id)anchorFinderUsername;
- (id)finderUsername;
- (id)clientStatus;
- (int)commentScene;
- (id)requestBuffer:(unsigned long long)arg1;
- (id)ecSource;
- (unsigned int)identity;
- (id)liveCookies;
- (unsigned long long)liveId;
- (unsigned long long)objectId;
- (id)objectNonceId;
- (id)uxInfo;
- (id)liveTask;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id /* block */)requestModelFactory;
- (void)setRequestModelFactory:(id /* block */)arg1;
- (void).cxx_destruct;
@end
