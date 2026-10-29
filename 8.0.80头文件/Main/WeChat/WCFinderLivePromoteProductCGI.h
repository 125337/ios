@interface WCFinderLivePromoteProductCGI : WCFinderLiveBaseCgi
{
    BOOL _presentMode; // +0x8
    unsigned int _actionType; // +0xc
    int _businessType; // +0x10
    ShopItemIDUnit * _idUnit; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithFinderTaskId:(id)arg1 idUnit:(id)arg2 businessType:(int)arg3 actionType:(unsigned int)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)idUnit;
- (void)setIdUnit:(id)arg1;
- (BOOL)presentMode;
- (void)setPresentMode:(BOOL)arg1;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (int)businessType;
- (void)setBusinessType:(int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
