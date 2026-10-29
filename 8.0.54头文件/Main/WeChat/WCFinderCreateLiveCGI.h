@interface WCFinderCreateLiveCGI : WCFinderLiveBaseCgi
{
    BOOL _isLiveCanceled; // +0x8
    MMFinderLiveCreateParamsModel * _createLiveParamsModel; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithCreateLiveParamsModel:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)createRequest;
- (void)mergeLiveCoverImagesFromMediaArray:(id)arg1 request:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)isLiveCanceled;
- (void)setIsLiveCanceled:(BOOL)arg1;
- (id)createLiveParamsModel;
- (void)setCreateLiveParamsModel:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

