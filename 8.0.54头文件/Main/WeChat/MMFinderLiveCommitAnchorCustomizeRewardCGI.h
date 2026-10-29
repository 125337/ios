@interface MMFinderLiveCommitAnchorCustomizeRewardCGI : WCFinderLiveBaseCgi
{
    NSString * _productId; // +0x8
    AnchorSwitchSkinInfo_SelectedValue * _commitStyle; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithTaskId:(id)arg1 productId:(id)arg2 commitStyle:(id)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)productId;
- (void)setProductId:(id)arg1;
- (id)commitStyle;
- (void)setCommitStyle:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

