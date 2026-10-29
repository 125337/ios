@interface MPChannelGetEntryDataTask : NSObject <PBMessageObserverDelegate>
{
    MPChannelGetEntryDataReq * _request; // +0x8
    id /* block */ _completion; // +0x10
}
- (id)initWithReq:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)start;
- (void)cancel;
- (void)handleChannelEntryDataResp:(id)arg1;
- (void)callbackCompletionIsSuccess:(BOOL)arg1 entryData:(id)arg2 strategyInfo:(id)arg3;
- (unsigned long long)covertAppDebugModeFromRespVersion:(int)arg1;
- (int)covertSceneToPbScene:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)request;
- (void)setRequest:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

