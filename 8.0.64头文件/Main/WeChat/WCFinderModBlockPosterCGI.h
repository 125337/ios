@interface WCFinderModBlockPosterCGI : WCFinderBaseCgi
{
    BOOL _setBlock; // +0x8
    NSString * _feedID; // +0x10
    id /* block */ _successful; // +0x18
    id /* block */ _failure; // +0x20
}
- (id)initWithUserName:(id)arg1 setBlock:(BOOL)arg2 selfUserName:(id)arg3 enterFeedID:(id)arg4 scene:(int)arg5 sessionBuffer:(id)arg6 successful:(id /* block */)arg7 failure:(id /* block */)arg8;
- (id)createRequest:(id)arg1 setBlock:(BOOL)arg2 selfUserName:(id)arg3;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)setBlock;
- (void)setSetBlock:(BOOL)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
