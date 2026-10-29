@interface WCFinderLiveEntranceVerifyCGI : WCFinderLiveBaseCgi
{
    id /* block */ _completionBlock; // +0x8
    long long _status; // +0x10
}
- (id)initWithNewEntranceStatus:(long long)arg1 completionBlock:(id /* block */)arg2;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (void).cxx_destruct;
@end

