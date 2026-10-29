@interface WCAppAuthFetchLogic : MMObject <PBMessageObserverDelegate>
{
    unsigned int _nextPageFlag; // +0x8
    id <WCAppAuthFetchLogicDelegate> _delegate; // +0x10
    NSData * _nextPageData; // +0x18
}
- (id)initWithDelegate:(id)arg1;
- (BOOL)fetchAuthenticatedApps;
- (BOOL)isFetchEnd;
- (void)handleFetchResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)nextPageData;
- (void)setNextPageData:(id)arg1;
- (unsigned int)nextPageFlag;
- (void)setNextPageFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end

