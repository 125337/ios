@interface WCFinderDeletePurchasedContentCGI : WCFinderLiveBaseCgi
{
    unsigned int _objectType; // +0x8
    NSString * _contentId; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithContentId:(id)arg1 objectType:(unsigned int)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)contentId;
- (void)setContentId:(id)arg1;
- (unsigned int)objectType;
- (void)setObjectType:(unsigned int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
