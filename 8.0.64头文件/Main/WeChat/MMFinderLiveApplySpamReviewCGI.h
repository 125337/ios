@interface MMFinderLiveApplySpamReviewCGI : WCFinderLiveBaseCgi
{
    MMFinderLiveApplySpamReviewCGIParam * _param; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
}
- (id)initWithParam:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)createRequestWithParam:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)param;
- (void)setParam:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
