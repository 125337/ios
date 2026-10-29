@interface WCPreloadProvider : MMObject <PBMessageObserverDelegate>
{
    BOOL isWorking; // +0x8
    unsigned long long uiClientLatestID; // +0x10
    id <WCPreloadProviderDelegate> delegate; // +0x18
}
- (id)init;
- (void)dealloc;
- (id)converListToList:(id)arg1;
- (int)getNetworkType;
- (void)requestForSnsTimeLineRequest:(id)arg1 minID:(id)arg2 lastRequestTime:(unsigned int)arg3;
- (BOOL)responseForSnsTimeLineResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)preloadHeadWithLatestID:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

