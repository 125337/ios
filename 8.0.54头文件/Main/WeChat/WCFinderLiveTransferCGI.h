@interface WCFinderLiveTransferCGI : WCFinderLiveBaseCgi
{
    WXPBGeneratedMessage * _requestObject; // +0x8
    WXPBGeneratedMessage * _responseObject; // +0x10
    Class _responseObjectClass; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failureBlock; // +0x28
}
- (id)initWithLiveTaskId:(id)arg1 cgiNumber:(unsigned int)arg2 requestObject:(id)arg3 responseObjectClass:(Class)arg4 successBlock:(id /* block */)arg5 failureBlock:(id /* block */)arg6;
- (id)createTransferRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)requestObject;
- (void)setRequestObject:(id)arg1;
- (id)responseObject;
- (void)setResponseObject:(id)arg1;
- (Class)responseObjectClass;
- (void)setResponseObjectClass:(Class)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

