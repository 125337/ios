@interface WCFinderLiveCreateLotteryCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
    WCFinderDataItem * _dataItem; // +0x18
    MMFinderLiveLotteryCreateInfo * _createInfo; // +0x20
    long long _optype; // +0x28
    NSData * _liveCookies; // +0x30
}
- (id)initWithLotteryCreateInfo:(id)arg1 finderDataItem:(id)arg2 optype:(long long)arg3 liveCookies:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)createInfo;
- (void)setCreateInfo:(id)arg1;
- (long long)optype;
- (void)setOptype:(long long)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (void).cxx_destruct;
@end

