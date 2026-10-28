@interface WCFinderApplyLiveMicCGI : WCFinderLiveBaseCgi
{
    WCFinderDataItem * _dataItem; // +0x8
    WCFinderContact * _toFinderContact; // +0x10
    NSData * _liveCookies; // +0x18
    NSData * _randomMicBuffer; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failBlock; // +0x30
}
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 toFinderContact:(id)arg3 liveCookies:(id)arg4 randomMicBuffer:(id)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)toFinderContact;
- (void)setToFinderContact:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)randomMicBuffer;
- (void)setRandomMicBuffer:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
