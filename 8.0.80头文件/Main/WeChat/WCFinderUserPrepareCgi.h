@interface WCFinderUserPrepareCgi : WCFinderBaseCgi
{
    int _scene; // +0x8
    id <WCFinderUserPrepareCgiDelegate> _delegate; // +0x10
    id /* block */ _failBlock; // +0x18
    id /* block */ _successfulBlock; // +0x20
}
- (id)init;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)logInfoWithObject:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id /* block */)successfulBlock;
- (void)setSuccessfulBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
