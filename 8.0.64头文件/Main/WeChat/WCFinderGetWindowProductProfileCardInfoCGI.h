@interface WCFinderGetWindowProductProfileCardInfoCGI : WCFinderLiveBaseCgi
{
    NSString * _finderUsername; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failureBlock; // +0x18
}
- (id)initWithFinderUsername:(id)arg1 reqScene:(unsigned int)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequestWithScene:(unsigned int)arg1;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
