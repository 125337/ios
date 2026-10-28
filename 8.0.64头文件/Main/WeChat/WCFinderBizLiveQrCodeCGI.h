@interface WCFinderBizLiveQrCodeCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successCompletion; // +0x8
    id /* block */ _failedCompletion; // +0x10
}
- (id)initWithUrl:(id)arg1 successCompletion:(id /* block */)arg2 failedCompletion:(id /* block */)arg3;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successCompletion;
- (void)setSuccessCompletion:(id /* block */)arg1;
- (id /* block */)failedCompletion;
- (void)setFailedCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
