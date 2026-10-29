@interface WCFinderLiveRandomMicCGI : WCFinderLiveBaseCgi
{
    WCFinderDataItem * _dataItem; // +0x8
    NSData * _liveCookies; // +0x10
    unsigned long long _opCode; // +0x18
    id /* block */ _completionBlock; // +0x20
}
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 liveCookies:(id)arg3 opCode:(unsigned long long)arg4 completionBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned long long)opCode;
- (void)setOpCode:(unsigned long long)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

