@interface WCFinderDelMentionCGI : WCFinderBaseCgi
{
    id /* block */ _successful; // +0x8
    id /* block */ _failure; // +0x10
}
- (id)initWithUsername:(id)arg1 mention:(id)arg2 mentionBuffer:(id)arg3 successful:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
