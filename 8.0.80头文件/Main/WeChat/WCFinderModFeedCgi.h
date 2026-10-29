@interface WCFinderModFeedCgi : WCFinderBaseCgi
{
    NSString * _feedId; // +0x8
    NSString * _fromUsername; // +0x10
    WCFinderModFeedOptionModel * _optionModel; // +0x18
    id /* block */ _sucBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithFeedId:(id)arg1 fromUsername:(id)arg2 optionModel:(id)arg3 sucBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)fromUsername;
- (void)setFromUsername:(id)arg1;
- (id)optionModel;
- (void)setOptionModel:(id)arg1;
- (id /* block */)sucBlock;
- (void)setSucBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
