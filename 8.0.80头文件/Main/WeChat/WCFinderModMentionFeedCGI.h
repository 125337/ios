@interface WCFinderModMentionFeedCGI : WCFinderBaseCgi
{
    NSString * _userName; // +0x8
    id /* block */ _successfulBlock; // +0x10
    id /* block */ _failedBlock; // +0x18
}
- (id)initWithUserName:(id)arg1 displayItems:(id)arg2 unDisplayItems:(id)arg3 successful:(id /* block */)arg4 failed:(id /* block */)arg5;
- (void)createRequestWithDisplayItems:(id)arg1 unDisplayItems:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id /* block */)successfulBlock;
- (void)setSuccessfulBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
